//
//  xmlimport.h
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#ifndef MEIXMLEXPORT_H_
#define MEIXMLEXPORT_H_

#include "meidocument.h"

namespace mei {
    
    class XmlExport {
    public:
        /** public interfaces for importing. Each of these will convert their input
         *  into an xmlNode for processing by the _MeiXmlStruct class.
         */
        static void meiDocumentToFile(MeiDocument *doc, const char* filename);
        static void meiDocumentToStream(MeiDocument *doc, const char* filename); // figure out arg type!
        static void meiDocumentToText(MeiDocument *doc); // is this right???
        
    private:
        XmlExport(MeiDocument *doc);
        virtual ~XmlExport();
        void init();
        xmlNode* meiElementToXmlNode(MeiElement *el);
        void outputToFile(const char* filename);
        
        MeiDocument* meiDocument;
        xmlDocPtr xmlDocOutput;
    };
}


#endif // MEIXMLEXPORT_H_
