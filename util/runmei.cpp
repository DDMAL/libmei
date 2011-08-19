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

//static void XmlNodeToMei(xmlNode* node) {
//    xmlAttr* currattr = NULL;
//	xmlNode* currnode = NULL;
//    xmlNode* attrvalue = NULL;
//    
//    for (currnode = node; currnode; currnode = currnode->next) {
//        if (currnode->type == XML_ELEMENT_NODE) {
//            cout << "Node: " << currnode->name << endl;
//            if(currnode->properties) {
//                for (currattr = currnode->properties; currattr; currattr = currattr->next) {
//                    attrvalue = currattr->children;
//                    cout << "  Attr: " << currattr->name << ": " << attrvalue->content << endl;
//                }
//            }
//            
//            
//            XmlNodeToMei(currnode->children);
//            
//            
//            
//        } else if (currnode->type == XML_TEXT_NODE) {
//            cout << "Text node: " << currnode->content << endl;
//        } else {
//            cout << "unknown node type " << currnode->name << endl;
//            cout << "   of type " << currnode->type << endl;
//        }
////            MeiElement* child = MeiFactory::createInstanceFromNode(string((const char*)curnode->name),curnode);
////            if (child) {
////                XmlNodeToMei(curnode->children, child);
////                parent->addChild(child);
////            } else {
////                string message = "unknown node type " + (string)(const char*)curnode->name;
////                throw message;
////            }            
//	}
//}


int main(int argc, char **argv) {
//    if (argc != 2)
//        return(1);
    
    mei::MeiDocument *d = mei::XmlImport::File("/Users/ahankins/Documents/code/git/libmei/test/beethoven.mei");
//    MeiDocument *d = mei::XmlImport::File(argv[1]);
    
//    xmlDoc *doc = NULL;
//	xmlNode *rootelement = NULL;
//    xmlAttr* rootattr = NULL;
//    const xmlChar* attrname;
//    xmlNode* attrvalue = NULL;
//    xmlNs* rootxmlns = NULL;
//	
//    doc = xmlReadFile(argv[1], NULL, 0);
//	rootelement = xmlDocGetRootElement(doc);
//    
//    rootxmlns = rootelement->ns; 
//	const xmlChar* roothref = rootxmlns->href;
//	const xmlChar* rootprefix = rootxmlns->prefix;
    
//    XmlNodeToMei(rootelement->children);
//    
//    /*
//     * Cleanup function for the XML library.
//     */
//    xmlCleanupParser();
//    /*
//     * this is to debug memory for regression tests
//     */
//    xmlMemoryDump();
    
    return 0;
}