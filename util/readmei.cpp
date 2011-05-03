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
    MeiNs ns1;
    MeiNs ns2;
    
    ns1.href = "http://www.example1.com";
    ns1.prefix = "link";
    
    ns2.href = "http://example12.ca";
    ns2.prefix = "show";
    
    MeiElement* el = new MeiElement("mei", ns1);
    MeiElement neume = MeiElement("neume", ns1);
	MeiElement n = MeiElement("note", ns2); 
	MeiElement o = MeiElement("octave", ns2);
	MeiElement p = MeiElement("accidental", ns2);

    
    MeiAttribute a1 = MeiAttribute("accid", "s");
    MeiAttribute a2 = MeiAttribute("artic", "stacc");
    MeiAttribute ver = MeiAttribute("meiversion", "2011-04");
    
    MeiAttribute b1 = MeiAttribute("accid", "f");

    n.addAttribute(a1);
    n.addAttribute(a2);
    o.addAttribute(b1);
    
    neume.addChild(n);
	neume.addChild(o);
	neume.addChild(p);
        
    el->addChild(neume);
   // el->print(4);
    el->addAttribute(ver);
    
    MeiDocument* meidoc = new MeiDocument("example1.xml","UTF-8");
    meidoc->setRootElement(el);
    
    meidoc->WriteToXml(meidoc);
    
   // if (argc > 1) {
    
    MeiDocument* Doc = MeiDocument::ReadFromXml("example1.xml","UTF-8");
    Doc->getRootElement()->print(4);
    
  //  }
	
    
	return 0;
}