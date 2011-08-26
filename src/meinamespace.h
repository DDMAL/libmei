//
//  MeiNamespace.h
//  libmei
//
//  Created by Andrew Hankinson on 11-08-22.
//  Copyright 2011 McGill University. All rights reserved.
//

#ifndef MEINAMESPACE_H_
#define MEINAMESPACE_H_

#include <string>

namespace mei {

    class MeiNamespace {
    public:
        MeiNamespace();
        ~MeiNamespace();

        std::string getHref();
        void setHref(std::string href);

        std::string getPrefix();
        void setPrefix(std::string prefix);

    private:
        std::string href;
        std::string prefix;
    };
}

#endif // MEINAMESPACE_H_
