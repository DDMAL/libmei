//
//  meixml.h
//  libmei
//
//  Created by Andrew Hankinson on 12-05-25.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef MEI_XML_H
#define MEI_XML_H

#include <string>
#include <vector>
#include <utility>

namespace mei {
    /**
        Define types that are used in both XML import and export
    */
    typedef std::pair<std::string, std::string> XmlProcessingInstruction;
    typedef std::vector<XmlProcessingInstruction*> XmlInstructions;    
}

#endif
