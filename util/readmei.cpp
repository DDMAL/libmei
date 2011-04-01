/*
 *  libmei: Music Encoding Initiative
 *
 *  A simple example to demonstrate using libmei to read an MEI file.
 */

#include <iostream>
using std::cout;
using std::endl;

#include <mei/meielement.h>

int main(int argc, char **argv) {
    MeiElement el = MeiElement("neume");
	MeiElement n = MeiElement("note"); 
	MeiElement o = MeiElement("octave");
	
	el.addChild(n);
	el.addChild(o);
	
	el.print();
							  
}