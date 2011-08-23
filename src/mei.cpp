//
//  mei.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-23.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "mei.h"

extern "C"
{
#ifdef WIN32
#include <Rpc.h>
#else
#include <uuid/uuid.h>
#endif
}


std::string mei::generateId() {
#ifdef WIN32
    UUID uuid;
    UuidCreate ( &uuid );
    
    unsigned char * str;
    UuidToStringA ( &uuid, &str );
    
    std::string s( ( char* ) str );
    
    RpcStringFreeA ( &str );
#else
    uuid_t uuid;
    uuid_generate_random(uuid);
    char s[37];
    uuid_unparse(uuid, s);
    
#endif
    std::string out;
    
    // xml IDs can't start with a number, so we append "m-" to every ID.
    out = "m-" + std::string(s);
    std::transform(out.begin(), out.end(), out.begin(), ::tolower);
    
    return out;
}