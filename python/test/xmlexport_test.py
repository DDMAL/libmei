# testing suite
import unittest
import os
import tempfile
import shutil
from pymei import MeiElement, MeiDocument, MeiAttribute
from pymei import documentToFile, documentFromFile, documentToText
from pymei.exceptions import DocumentRootNotSetException, FileWriteFailureException


class XmlExportTest(unittest.TestCase):

    def setUp(self):
        self.tempdir = tempfile.mkdtemp()

    def test_basicexport(self):
        docf = documentFromFile(os.path.join("test", "testdocs", "beethoven.mei"))
        status = documentToFile(docf.getMeiDocument(), os.path.join(self.tempdir, "filename.mei"))
        self.assertTrue(status)

    def test_exportwithcomments(self):
        docf = documentFromFile(os.path.join("test", "testdocs", "campion.mei"))
        status = documentToFile(docf.getMeiDocument(), os.path.join(self.tempdir, "filename.mei"))
        self.assertTrue(status)

    def test_exporttostring(self):
        doc = MeiDocument()
        root = MeiElement("mei")
        root.id = "myid"
        doc.root = root

        expected = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<mei xml:id=\"myid\" xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2013\" />\n"
        ret = documentToText(doc)
        self.assertEqual(expected, ret)

    def test_documentrootnotset(self):
        doc = MeiDocument()
        with self.assertRaises(DocumentRootNotSetException) as cm:
            ret = documentToText(doc)

        self.assertTrue(isinstance(cm.exception, DocumentRootNotSetException))

    def test_documentwritefailure(self):
        doc = MeiDocument()
        root = MeiElement("mei")
        root.id = "myid"
        doc.root = root
        with self.assertRaises(FileWriteFailureException) as cm:
            ret = documentToFile(doc, "C:/StupidPath")

        self.assertTrue(isinstance(cm.exception, FileWriteFailureException))

    def test_exportvalueandtail(self):
        doc = MeiDocument()
        root = MeiElement("mei")
        root.id = "myid"
        doc.root = root

        note = MeiElement("note")
        note.id = "noteid"
        note.value = "value"
        note.tail = "tail"
        root.addChild(note)

        expected = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<mei xml:id=\"myid\" xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2013\">\n\t<note xml:id=\"noteid\">value</note>tail</mei>\n"
        ret = documentToText(doc)

        self.assertEqual(expected, ret)

    def test_exportcomment(self):
        doc = MeiDocument()
        root = MeiElement("mei")
        root.id = "myid"

        doc.root = root

        comment = MeiElement("_comment")
        comment.value = "comment"
        comment.tail = "t"

        root.addChild(comment)
        expected = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<mei xml:id=\"myid\" xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2013\">\n\t<!--comment-->t</mei>\n"
        ret = documentToText(doc)
        self.assertEqual(expected, ret)

#     def test_exportnamespace(self):
#         doc = MeiDocument()
#         root = MeiElement("mei")
#         root.id = "myid"
#         doc.root = root

#         xlink = MeiNamespace("xlink", "http://www.w3.org/1999/xlink")
#         attr = MeiAttribute(xlink, "title", "my awesome thing")
#         root.addAttribute(attr)

#         expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
# xmlns:xlink=\"http://www.w3.org/1999/xlink\" xml:id=\"myid\" xlink:title=\"my awesome thing\" meiversion=\"2013\"/>\n";

#         ret = XmlExport.meiDocumentToText(doc)
#         self.assertEqual(expected, ret)

#     def test_exportnamespace2(self):
#         doc = MeiDocument()
#         root = MeiElement("mei")
#         root.id = "myid"
#         doc.root = root

#         xlink = MeiNamespace("xlink", "http://www.w3.org/1999/xlink")
#         attr = MeiAttribute(xlink, "title", "my awesome thing")
#         music = MeiElement("music")
#         music.id = "musid"

#         music.addAttribute(attr)
#         music.value = "mus!"
#         root.addChild(music)

#         expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
# xmlns:xlink=\"http://www.w3.org/1999/xlink\" xml:id=\"myid\" meiversion=\"2013\">\n  <music \
# xml:id=\"musid\" xlink:title=\"my awesome thing\">mus!</music>\n</mei>\n"

#         ret = XmlExport.meiDocumentToText(doc)
#         self.assertEqual(expected, ret)

#     def test_exportProcessingInstructions(self):
#         procinst = XmlInstructions()

#         xpi1 = XmlProcessingInstruction("xml-model", "href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://purl.oclc.org/dsdl/schematron\"")
#         xpi2 = XmlProcessingInstruction("xml-stylesheet", "href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://purl.oclc.org/dsdl/schematron\"")

#         procinst.extend([xpi1, xpi2])

#         doc = MeiDocument()
#         root = MeiElement("mei")
#         root.id = "myid"
#         doc.root = root

#         ret = XmlExport.meiDocumentToText(doc, procinst)

#         expected = "<?xml version=\"1.0\"?>\n<?xml-model href=\"mei-2012.rng\" type=\"application/xml\" \
# schematypens=\"http://purl.oclc.org/dsdl/schematron\"?>\n<?xml-stylesheet href=\"mei-2012.rng\" type=\"application/xml\" \
# schematypens=\"http://purl.oclc.org/dsdl/schematron\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
# xml:id=\"myid\" meiversion=\"2013\"/>\n"

#         self.assertEqual(expected, ret)

    def tearDown(self):
        if os.path.exists(self.tempdir):
            shutil.rmtree(self.tempdir)

    def test_copynamespace(self):
        xml_namespace = MeiNamespace('xml', 'http://www.w3.org/XML/1998/namespace')
        xml_base = MeiAttribute(xml_namespace, 'base', 'http://example.com/')

        self.assertEqual(xml_base.getNamespace().getPrefix(), 'xml')

        newdoc = MeiDocument()
        facsimile = MeiElement('facsimile')
        facsimile.addAttribute(xml_base)
        facsimile.id = "myid"
        newdoc.root = facsimile

        expected = '<?xml version="1.0"?>\n<facsimile xmlns="http://www.music-encoding.org/ns/mei" xml:id="myid" xml:base="http://example.com/" meiversion="2013"/>\n'

        ret = XmlExport.meiDocumentToText(newdoc)
        self.assertEqual(expected, ret)


def suite():
    test_suite = unittest.makeSuite(XmlExportTest, 'test')
    return test_suite
