/*
 *  libmei: Music Encoding Initiative
 *
 *  A simple example to demonstrate using libmei to read an MEI file.
 *
 *  Note that the changes made to the input file might not necessarily make
 *  sense musically...
 */

#include <iostream>
#include <string>

#include <mei/mei.h>

#include <mei/shared.h>
#include <mei/cmn.h>

#include <mei/xmlexport.h>
#include <mei/xmlimport.h>

using std::cout;
using std::endl;
using std::cerr;
using std::string;

using namespace mei;

int main(int argc, char **argv) {
    if (argc < 3) {
        cerr << "usage: " << argv[0] << " input output" << endl;
        cerr << "       Use this program on beethoven.mei" << endl;
        return 1;
    }

    MeiDocument* doc = XmlImport::documentFromFile(string(argv[1]));

    // Find an element
    MeiElement *note1 = doc->getElementById("d1e111");
    MeiElement *note2 = doc->getElementById("d1e218");
    MeiElement *note3 = doc->getElementById("d1e295");

    if (note1) {
        // Get an element's parent
        MeiElement *layer = note1->getParent();
        // Remove element
        layer->removeChild(note2);
        layer->removeChild(note3);

        // Make a new note with attributes
        MeiAttribute *a1 = new MeiAttribute("accid", "s");
        MeiAttribute *a2 = new MeiAttribute("artic", "stacc");
        Note *newnote = new Note();
        newnote->addAttribute(a1);
        newnote->addAttribute(a2);
        // Change attributes of a note with helper methods
        newnote->m_Pitch.setPname("g");
        newnote->m_Octave.setOct("5");

        // Add a child
        layer->addChildBefore(note1, newnote);
    }

    // Save out again
    XmlExport::meiDocumentToFile(doc, string(argv[2]));

	return 0;
}