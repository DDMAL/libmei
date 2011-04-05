/*
 *  libmei: Music Encoding Initiative
 *
 *  A simple example to demonstrate using libmei to read an MEI file.
 */

#include <iostream>
using std::cout;
using std::endl;

#include <mei/meielement.h>
#include <mei/meidocument.h>
#include <libxml/xmlreader.h>

int main(int argc, char **argv) {
    MeiElement* el = new MeiElement("neume");
	MeiElement n = MeiElement("note"); 
	MeiElement o = MeiElement("octave");
	
	el->addChild(n);
	el->addChild(o);
    
    MeiDocument* meidoc = new MeiDocument("example1","UTF-8");
    meidoc->setRootElement(el);
    
    meidoc->WriteToXml(meidoc);
    
   // if (argc > 1) {
    
        MeiDocument* Doc = MeiDocument::ReadFromXml("example1.xml","UTF-8");
	
    Doc->getRootElement()->print();
    
    Doc->getRootElement()->getAttributes();
    
    
    
  //  }
	
    
	return 0;
}