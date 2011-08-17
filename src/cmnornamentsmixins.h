
/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:
    
    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef CMNORNAMENTSMIXIN_H_
#define CMNORNAMENTSMIXIN_H_

#include "meielement.h"
#include "exceptions.h"



struct MordentLogMixIn {
    MordentLogMixIn(BaseMeiElement *b);
    virtual ~MordentLogMixIn() {};
    
    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    /** \brief   When the long attribute is set to 'yes', a double or long mordent, consisting of
    * 5 notes, is indicated.
    */

    string getLongValue() throw (AttributeNotFoundException);
    MeiAttribute* getLong() throw (AttributeNotFoundException);
    void setLong(std::string _long);
    bool hasLong();
    void removeLong();

    private:
        BaseMeiElement *b;
};


struct OrnamentaccidMixIn {
    OrnamentaccidMixIn(BaseMeiElement *b);
    virtual ~OrnamentaccidMixIn() {};
    
    /** \brief   records the written accidental associated with an upper neighboring note.
    */

    string getAccidupperValue() throw (AttributeNotFoundException);
    MeiAttribute* getAccidupper() throw (AttributeNotFoundException);
    void setAccidupper(std::string _accidupper);
    bool hasAccidupper();
    void removeAccidupper();

    /** \brief   records the written accidental associated with a lower neighboring note.
    */

    string getAccidlowerValue() throw (AttributeNotFoundException);
    MeiAttribute* getAccidlower() throw (AttributeNotFoundException);
    void setAccidlower(std::string _accidlower);
    bool hasAccidlower();
    void removeAccidlower();

    private:
        BaseMeiElement *b;
};


struct TurnLogMixIn {
    TurnLogMixIn(BaseMeiElement *b);
    virtual ~TurnLogMixIn() {};
    
    /** \brief   When the delayed attribute is set to 'true', the turn begins on the second half
    * of the beat. See Read, p. 246.
    */

    string getDelayedValue() throw (AttributeNotFoundException);
    MeiAttribute* getDelayed() throw (AttributeNotFoundException);
    void setDelayed(std::string _delayed);
    bool hasDelayed();
    void removeDelayed();

    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    private:
        BaseMeiElement *b;
};


#endif // CMNORNAMENTSMIXIN_H_
