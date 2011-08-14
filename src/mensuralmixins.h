/*
    Copyright (c) 2011 Jamie Klassen, Alastair Porter, Mahtab Ghamsari-Esfahani, Andrew Hankinson

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
    
#ifndef MENSURALMIXINS_H_
#define MENSURALMIXINS_H_

#include "meielement.h"
#include "exceptions.h"
#include "sharedmixins.h"
using namespace std;

/** \brief   Used by staffDef and scoreDef to provide default values for attributes in the
 *           visual domain related to mensuration
 */
struct MensurationVisMixIn {

    MensurationVisMixIn(BaseMeiElement *b);

    string getMensurFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurForm() throw (AttributeNotFoundException);
    void setMensurForm(string _mensurform);
    bool hasMensurForm();

    string getMensurLocValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurLoc() throw (AttributeNotFoundException);
    void setMensurLoc(string _mensurloc);
    bool hasMensurLoc();

    string getMensurSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurSize() throw (AttributeNotFoundException);
    void setMensurSize(string _mensursize);
    bool hasMensurSize();


    private:
         BaseMeiElement *b;
};

/** \brief   Logical domain attributes
 */
struct MensurLogMixIn {

    MensurLogMixIn(BaseMeiElement *b);

    string getModusmaiorValue() throw (AttributeNotFoundException);
    MeiAttribute* getModusmaior() throw (AttributeNotFoundException);
    void setModusmaior(string _modusmaior);
    bool hasModusmaior();

    string getModusminorValue() throw (AttributeNotFoundException);
    MeiAttribute* getModusminor() throw (AttributeNotFoundException);
    void setModusminor(string _modusminor);
    bool hasModusminor();

    string getProlatioValue() throw (AttributeNotFoundException);
    MeiAttribute* getProlatio() throw (AttributeNotFoundException);
    void setProlatio(string _prolatio);
    bool hasProlatio();

    string getTempusValue() throw (AttributeNotFoundException);
    MeiAttribute* getTempus() throw (AttributeNotFoundException);
    void setTempus(string _tempus);
    bool hasTempus();

    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(string _num);
    bool hasNum();

    string getNumbaseValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumbase() throw (AttributeNotFoundException);
    void setNumbase(string _numbase);
    bool hasNumbase();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by staffDef and scoreDef to provide default values for attributes in the
 *           logical domain related to mensuration
 */
struct MensurationLogMixIn {

    MensurationLogMixIn(BaseMeiElement *b);

    string getMensurDotValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurDot() throw (AttributeNotFoundException);
    void setMensurDot(string _mensurdot);
    bool hasMensurDot();

    string getMensurOrientValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurOrient() throw (AttributeNotFoundException);
    void setMensurOrient(string _mensurorient);
    bool hasMensurOrient();

    string getMensurSignValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurSign() throw (AttributeNotFoundException);
    void setMensurSign(string _mensursign);
    bool hasMensurSign();

    string getMensurSlashValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurSlash() throw (AttributeNotFoundException);
    void setMensurSlash(string _mensurslash);
    bool hasMensurSlash();

    string getModusmaiorValue() throw (AttributeNotFoundException);
    MeiAttribute* getModusmaior() throw (AttributeNotFoundException);
    void setModusmaior(string _modusmaior);
    bool hasModusmaior();

    string getModusminorValue() throw (AttributeNotFoundException);
    MeiAttribute* getModusminor() throw (AttributeNotFoundException);
    void setModusminor(string _modusminor);
    bool hasModusminor();

    string getProlatioValue() throw (AttributeNotFoundException);
    MeiAttribute* getProlatio() throw (AttributeNotFoundException);
    void setProlatio(string _prolatio);
    bool hasProlatio();

    string getTempusValue() throw (AttributeNotFoundException);
    MeiAttribute* getTempus() throw (AttributeNotFoundException);
    void setTempus(string _tempus);
    bool hasTempus();

    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(string _num);
    bool hasNum();

    string getNumbaseValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumbase() throw (AttributeNotFoundException);
    void setNumbase(string _numbase);
    bool hasNumbase();


    private:
         BaseMeiElement *b;
};

#endif // MENSURALMIXINS_H_