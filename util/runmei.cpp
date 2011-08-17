//
//  runmei.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-14.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <mei/shared.h>
#include <mei/meielement.h>
#include <gtest/gtest.h>

using std::cout;
using std::string;

using mei::MeiElement;
using mei::MeiFactory;
using mei::Note;

// class ParentClass {
// public:
//     ParentClass(string name);
//     virtual ~ParentClass();
//     
//     string getName();
//     
// private:
//     string name;
// };
// 
// ParentClass::ParentClass(string name) {
//     this->name = name;
// }
// 
// string ParentClass::getName() {
//     return this->name;
// }
// 
// ParentClass::~ParentClass() {}
// 
// class CoolMixIn {
// public:
//     CoolMixIn(ParentClass *b);
//     virtual ~CoolMixIn() {};
//     
//     string getCoolness();
// private:
//     ParentClass *b;
// };
// 
// CoolMixIn::CoolMixIn(ParentClass *b) {
//     this->b = b;
// }
// 
// string CoolMixIn::getCoolness() {
//     return this->b->getName();
// }
// 
// 
// class ChildClass : public ParentClass {
// public:
//     ChildClass();
//     virtual ~ChildClass() {};
//     
//     CoolMixIn m_Cool;
// private:
// };
// 
// ChildClass::ChildClass() :
//     ParentClass("so cool"),
//     m_Cool(this)
// {
//     
// }

// int main(int argc, char **argv) {
TEST(XYTest, NewXYTest) {
    // ParentClass *p = new ChildClass();
    // 
    // string coolness = dynamic_cast<ChildClass*>(p)->m_Cool.getCoolness();
    // 
    // cout << "how cool? " << coolness << "\n";
    MeiElement *e = MeiFactory::createInstance("note");
    
    string name = e->getName();
    cout << "I am a " << name << "\n";
    
    Note *n = dynamic_cast<Note*>(e);
    
    if (n == NULL) {
        cout << "Sad panda." << "\n";
    } else {
        n->m_NoteVis.setHeadshape("diamond");
        
        cout << "I have a head shaped like a " << n->m_NoteVis.getHeadshape()->getValue() << "\n";
    }
    dynamic_cast<Note*>(e)->m_NoteVis.removeHeadshape();
    dynamic_cast<Note*>(e)->m_NoteVis.setHeadshape("XXX");
    cout << "New head " << dynamic_cast<Note*>(e)->m_NoteVis.getHeadshape()->getValue() << "\n";
    
    // return 0;
}