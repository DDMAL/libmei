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

int main(int argc, char **argv) {
    MeiElement el = MeiElement("neume");
	MeiElement n = MeiElement("note"); 
	MeiElement o = MeiElement("octave");
	
	el.addChild(n);
	el.addChild(o);
    
    if (argc > 1) {
    
        MeiDocument* Doc = MeiDocument::ReadFromXML(argv[1],"UTF-8");
	
    Doc->getRootElement()->print(); 
    }
	
	return 0;
}