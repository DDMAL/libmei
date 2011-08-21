/**
 * section: xmlReader
 * synopsis: Parse an XML file with an xmlReader
 * purpose: Demonstrate the use of xmlReaderForFile() to parse an XML file
 *          and dump the informations about the nodes found in the process.
 *          (Note that the XMLReader functions require libxml2 version later
 *          than 2.6.)
 * usage: reader1 <filename>
 * test: reader1 test2.xml > reader1.tmp ; diff reader1.tmp reader1.res ; rm reader1.tmp
 * author: Daniel Veillard
 * copy: see Copyright for the status of this software.
 */

#include <iostream.h>
#include <stdio.h>
#include <libxml/xmlreader.h>
#include <mei/xmlimport.h>
#include <mei/meidocument.h>

using std::string;
using std::cout;
using mei::MeiDocument;

int main(int argc, char **argv) {
    mei::MeiDocument *d = mei::XmlImport::documentFromFile("/Users/ahankins/Documents/code/git/libmei/test/beethoven.mei");
    return 0;
}