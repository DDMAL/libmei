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
#include <mei/shared.h>
#include <mei/cmn.h>
#include <mei/meiattribute.h>

#include <mei/xmlexport.h>
#include <mei/xmlimport.h>

using namespace mei;

int main(int argc, char **argv) {
    MeiElement *el = new Mei();
	MeiElement *n = new Note();
	MeiElement *o = new Slur();

    MeiAttribute *a1 = new MeiAttribute("accid", "s");
    MeiAttribute *a2 = new MeiAttribute("artic", "stacc");
    MeiAttribute *ver = new MeiAttribute("meiversion", "2011-04");

    MeiAttribute *b1 = new MeiAttribute("accid", "f");

    n->addAttribute(a1);
    n->addAttribute(a2);
    o->addAttribute(b1);

    el->addAttribute(ver);
    el->addChild(n);
    el->addChild(o);

    MeiDocument* meidoc = new MeiDocument();
    meidoc->setRootElement(el);

    XmlExport::meiDocumentToFile(meidoc, "example.mei");

    MeiDocument* newdoc = XmlImport::documentFromFile("example.mei");
    newdoc->getRootElement()->print();

	return 0;
}