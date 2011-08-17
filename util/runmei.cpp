//
//  runmei.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-14.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>

using std::string;

class CoolMixIn {
public:
    CoolMixIn(ParentClass *b);
    virtual ~CoolMixIn() {};
    
    string getCoolness();
private:
    ParentClass *b;
}

CoolMixIn::CoolMixIn(ParentClass *b) {
    this->b = b;
}

string CoolMixIn::getCoolness() {
    return this->b.getName();
}


class ParentClass {
public:
    ParentClass(string name);
    virtual ~ParentClass();
    
    string getName() {
        return this->name;
    }
    
private:
    string name;
}

class ChildClass : public ParentClass {
public:
    ChildClass();
    virtual ~ChildClass() {};
    
    CoolMixIn m_Cool;
private:
}

ChildClass::ChildClass() :
    ParentClass("so cool"),
    m_Cool(this)
{
    
}

int main(int argc, char **argv) {
    
    ParentClass *p = new ChildClass();
    
    string coolness = dynamic_cast<ChildClass*>(p)->getCoolness();
    
    cout << "how cool? " << coolness << "\n";
    
    
    return 0;
}