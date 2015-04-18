//
//  test_xmlinput.cpp
//  libmei
//
//  Created by Andrew Hankinson on 2015-04-13.
//
//

#include <gtest/gtest.h>
#include <iostream>
#include <mei/xmlimport.h>
#include <mei/meielement.h>
#include <mei/meidocument.h>
#include <mei/exceptions.h>
#include <mei/shared.h>

#include <string>
#include <vector>

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiAttribute;
using mei::Note;
using mei::documentFromText;
using mei::documentFromFile;
using mei::XMLProcessingInstructions;
using mei::ImportWarnings;
using mei::XMLImportResult;
using mei::MEI_STRICT_IMPORT;
using mei::MEI_LAX_IMPORT;

using std::string;
using std::vector;

TEST(TestMeiXMLImport, TestFromTextFunction)
{
    string goodMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <layer xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </layer>\n</mei>\n";
    
    XMLImportResult res = mei::documentFromText(goodMei, MEI_STRICT_IMPORT);
    
    ASSERT_TRUE(res.meiDocument);
}

TEST(TestMeiXMLImport, TestFromFileFunction)
{
    string filename = "beethoven.mei";
    XMLImportResult res = mei::documentFromFile(filename, MEI_STRICT_IMPORT);
    
    ASSERT_TRUE(res.meiDocument);
}

TEST(TestMeiXMLImport, TestImportInStrictMode)
{
    string goodMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <layer xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </layer>\n</mei>\n";
    
    string badMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <foo xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </foo>\n</mei>\n";
    
    ASSERT_NO_THROW(mei::documentFromText(goodMei, MEI_STRICT_IMPORT););
    ASSERT_THROW(mei::documentFromText(badMei, MEI_STRICT_IMPORT), mei::ElementNotRegisteredException);
}

TEST(TestMeiXMLImport, TestImportInLaxMode)
{
    string goodMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <layer xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </layer>\n</mei>\n";
    
    string badMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <foo xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </foo>\n</mei>\n";
    
    ASSERT_NO_THROW(mei::documentFromText(goodMei, MEI_LAX_IMPORT););
    ASSERT_NO_THROW(mei::documentFromText(badMei, MEI_LAX_IMPORT));
}

TEST(TestMeiXMLImport, TestImportProcessingInstructions)
{
    XMLImportResult res = mei::documentFromFile("test-procinst.mei", MEI_STRICT_IMPORT);
    ASSERT_EQ(res.xmlProcessingInstructions.size(), 2);
    
    string pi = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
    <?xml-model href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://purl.oclc.org/dsdl/schematron\"?> \
    <?xml-stylesheet href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://relaxng.org/ns/structure/1.0\"?> \
    <mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"m-4a3c8d81-25fd-4c2e-b5e1-63bfaf955ae3\" meiversion=\"2013\"/>";
    
    XMLImportResult res2 = mei::documentFromText(pi, MEI_STRICT_IMPORT);
    ASSERT_EQ(res2.xmlProcessingInstructions.size(), 2);
}

TEST(TestMeiXMLImport, TestReadLargeFileIn) {
    XMLImportResult res = mei::documentFromFile("bach.mei", MEI_STRICT_IMPORT);
    ASSERT_NE((MeiDocument*)NULL, res.meiDocument);
}

TEST(TestMeiXMLimport, TestImportWarningsAndStatus)
{
    string badMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <foo xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </foo>\n</mei>\n";
    
    XMLImportResult res = mei::documentFromText(badMei, MEI_LAX_IMPORT);
    
    ASSERT_EQ(res.importStatus, mei::status_warnings);
    ASSERT_EQ(res.importWarnings.size(), 1);
    
    string goodMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <layer xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </layer>\n</mei>\n";

    XMLImportResult res2 = mei::documentFromText(goodMei, MEI_LAX_IMPORT);
    
    ASSERT_EQ(res2.importStatus, mei::status_ok);
    ASSERT_EQ(res2.importWarnings.size(), 0);
}

TEST(TestMeiXMLImport, CheckBasicDocumentTraversalFunctions)
{
    XMLImportResult res = mei::documentFromFile("beethoven.mei", MEI_STRICT_IMPORT);

    ASSERT_NE((MeiDocument*)NULL, res.meiDocument);
    
    MeiDocument* doc = res.meiDocument;
    
    std::vector<MeiElement*> notes = doc->getElementsByName("note");
    
    ASSERT_EQ(38, notes.size());
    
    const std::vector<MeiElement*> tree = doc->getFlattenedTree();
    
    ASSERT_TRUE(tree.size() > 0);
}

TEST(TestMeiXmlImport, TestNoVersionException)
{
    ASSERT_THROW(documentFromFile("noversion.mei", MEI_STRICT_IMPORT), mei::NoVersionFoundException);
    ASSERT_NO_THROW(documentFromFile("noversion.mei", MEI_LAX_IMPORT));
    
    XMLImportResult res = documentFromFile("noversion.mei", MEI_LAX_IMPORT);
    
    ASSERT_TRUE(res.getImportWarnings().size() > 0);
}

TEST(TestMeiXmlImport, TestMalformedFileException)
{
    ASSERT_THROW(documentFromFile("malformed.mei", MEI_STRICT_IMPORT), mei::MeiException);
}

TEST(TestMeiXmlImport, TestNonExistentFileException)
{
    ASSERT_THROW(documentFromFile("blahblah.mei", MEI_STRICT_IMPORT), mei::MeiException);
}