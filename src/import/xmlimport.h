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

    namespace XmlImport {
        
        /** public interfaces for importing. Each of these will convert their input
         *  into an xmlNode for processing by the _MeiXmlStruct class.
         */
        MeiDocument* File(const char* filename);
        MeiDocument* Stream(std::string stream); // figure out arg type!
        MeiDocument* Text(std::string text); // is this right???
        
        // privat class for doing the processing.
        class _MeiXml {
            public:
                _MeiXml(xmlDoc *d);
                virtual ~_MeiXml();
                MeiDocument* getMeiDocument();
                
            private:
                MeiElement* xmlNodeToMeiElement(xmlNode *el);
                
                xmlNode* rootXmlNode;
                xmlDoc* xmlMeiDocument;
                MeiDocument* meiDocument;
                MeiElement* rootMeiElement;
        };

    }
}


#endif // MEIXMLIMPORT_H_
