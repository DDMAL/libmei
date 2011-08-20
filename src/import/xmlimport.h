//
//  xmlimport.h
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#ifndef MEIXMLIMPORT_H_
#define MEIXMLIMPORT_H_

#include "meidocument.h"

namespace mei {

    class XmlImport {
        public:
            /** public interfaces for importing. Each of these will convert their input
             *  into an xmlNode for processing by the _MeiXmlStruct class.
             */
            static MeiDocument* documentFromFile(const char* filename);
            static MeiDocument* documentFromStream(std::string stream); // figure out arg type!
            static MeiDocument* documentFromText(std::string text); // is this right???
        
        private:
            XmlImport(xmlDoc *doc);
            virtual ~XmlImport();
            void init();
            
            MeiDocument* getMeiDocument();
            MeiElement* xmlNodeToMeiElement(xmlNode *el);
            
            xmlNode* rootXmlNode;
            xmlDoc* xmlMeiDocument;
            MeiDocument* meiDocument;
            MeiElement* rootMeiElement;
    };
}


#endif // MEIXMLIMPORT_H_
