//
//  meixml.h
//  libmei
//
//  Created by Andrew Hankinson on 12-05-25.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef MEI_XML_H
#define MEI_XML_H

#include "meicommon.h"

#include <string>
#include <vector>
#include <utility>

namespace mei {
    /**
        Define types that are used in both XML import and export
    */    
    class MEI_EXPORT XmlProcessingInstruction 
    {
    public:
        XmlProcessingInstruction(std::string name, std::string value);
        virtual ~XmlProcessingInstruction();

        std::string getName();
        std::string getValue();
    private:
        std::string name;
        std::string value;
    };
    
    typedef std::vector<XmlProcessingInstruction*> XmlInstructions;
}

#endif
