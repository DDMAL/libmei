/*
 * mxmltomei.cpp
 * musicxmltomei
 *
 * Created by Greg Burlet on 11-09-23.
 * 
 * Main file for standalone MusicXML to MEI file conversion executable
 */

#include <iostream>
#include <string>

#include "mxmlparser.h"

using namespace std;

// Global var declarations
enum fType { MXML, MXML_COMP, MEI, INVAL };

// Function declarations
void displayHelp();
fType getFileType(const string& fName);

int main (int argc, const char * argv[]) {
    if (argc < 2) {
        displayHelp();
    } else {
        fType in, out;
        string finPath, foutPath;
        
        if(string(argv[1]) == "-h" || string(argv[1]) == "--help") {
            displayHelp();
        } else {
            finPath = string(argv[1]);
            cout << "file path in: " << finPath << endl;           
            in = getFileType(finPath);

            foutPath = string(argv[2]);
            cout << "file path out: " << foutPath << endl;  
            out = getFileType(foutPath);
        }

        if (in == MXML && out == MEI) {
            // begin parser and conversion
            cout << "Converting from MusicXML to MEI" << endl;
            mparser::MXMLParser *p = new mparser::MXMLParser(finPath);
            p->begin();
            p->output(foutPath);
            delete p;
            cout << "Conversion complete, wrote to file: " << foutPath << endl;
        } else if (in == MEI && out == MXML) {
            cout << "MEI to MXML conversion in development." << endl;
        } else {
            displayHelp();
        }
    }
    return 0;
}

void displayHelp() {
    cerr << endl << "mxmltomei converts MusicXML files to MEI or MEI files to MusicXML" << endl;
    cerr << "-----------------------------------------------------------------" << endl;
    cerr << "Incorect parameters, usage is -i <filein>[.xml][.mei] -o <fileout>[.mei][.xml]" << endl;
    cerr << endl << "-h or --help will display this help message" << endl;
    exit(0);
}

fType getFileType(const string& fName) {
    if (fName.find_last_of(".") != string::npos) {
        string ext = fName.substr(fName.find_last_of(".")+1);
        if (ext == "xml") {
            return MXML;
        } else if (ext == "mxml") {
            return MXML_COMP;
        } else if (ext == "mei") {
            return MEI;
        }
    } else {
        cerr << "Error: no file extension" << endl;
        displayHelp();
    }
    return INVAL;
}
