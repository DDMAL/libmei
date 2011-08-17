
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

#ifndef MENSURALMIXIN_H_
#define MENSURALMIXIN_H_

#include "meielement.h"
#include "exceptions.h"



struct LigatureLogMixIn {
    LigatureLogMixIn(BaseMeiElement *b);
    virtual ~LigatureLogMixIn() {};
    
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


struct MensurLogMixIn {
    MensurLogMixIn(BaseMeiElement *b);
    virtual ~MensurLogMixIn() {};
    
    /** \brief   describes the maxima-long relationship.
    */

    string getModusmaiorValue() throw (AttributeNotFoundException);
    MeiAttribute* getModusmaior() throw (AttributeNotFoundException);
    void setModusmaior(std::string _modusmaior);
    bool hasModusmaior();
    void removeModusmaior();

    /** \brief   describes the long-breve relationship.
    */

    string getModusminorValue() throw (AttributeNotFoundException);
    MeiAttribute* getModusminor() throw (AttributeNotFoundException);
    void setModusminor(std::string _modusminor);
    bool hasModusminor();
    void removeModusminor();

    /** \brief   describes the semibreve-minim relationship.
    */

    string getProlatioValue() throw (AttributeNotFoundException);
    MeiAttribute* getProlatio() throw (AttributeNotFoundException);
    void setProlatio(std::string _prolatio);
    bool hasProlatio();
    void removeProlatio();

    /** \brief   describes the breve-semibreve relationship.
    */

    string getTempusValue() throw (AttributeNotFoundException);
    MeiAttribute* getTempus() throw (AttributeNotFoundException);
    void setTempus(std::string _tempus);
    bool hasTempus();
    void removeTempus();

    private:
        BaseMeiElement *b;
};


struct MensurVisMixIn {
    MensurVisMixIn(BaseMeiElement *b);
    virtual ~MensurVisMixIn() {};
    
    /** \brief   specifies whether a dot is to be added to the base symbol.
    */

    string getDotValue() throw (AttributeNotFoundException);
    MeiAttribute* getDot() throw (AttributeNotFoundException);
    void setDot(std::string _dot);
    bool hasDot();
    void removeDot();

    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    /** \brief   describes the rotation or reflection of the base symbol.
    */

    string getOrientValue() throw (AttributeNotFoundException);
    MeiAttribute* getOrient() throw (AttributeNotFoundException);
    void setOrient(std::string _orient);
    bool hasOrient();
    void removeOrient();

    /** \brief   the base symbol in the mensuration sign/time signature of mensural notation.
    */

    string getSignValue() throw (AttributeNotFoundException);
    MeiAttribute* getSign() throw (AttributeNotFoundException);
    void setSign(std::string _sign);
    bool hasSign();
    void removeSign();

    private:
        BaseMeiElement *b;
};


struct MensurationLogMixIn {
    MensurationLogMixIn(BaseMeiElement *b);
    virtual ~MensurationLogMixIn() {};
    
    /** \brief   determines if a dot is to be added to the base symbol.
    */

    string getMensurDotValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurDot() throw (AttributeNotFoundException);
    void setMensurDot(std::string _mensurdot);
    bool hasMensurDot();
    void removeMensurDot();

    /** \brief   describes the rotation or reflection of the base symbol.
    */

    string getMensurOrientValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurOrient() throw (AttributeNotFoundException);
    void setMensurOrient(std::string _mensurorient);
    bool hasMensurOrient();
    void removeMensurOrient();

    /** \brief   the base symbol in the mensuration sign/time signature of mensural notation.
    */

    string getMensurSignValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurSign() throw (AttributeNotFoundException);
    void setMensurSign(std::string _mensursign);
    bool hasMensurSign();
    void removeMensurSign();

    /** \brief   indicates the number lines added to the mensuration sign. For example, one slash
    * is added for what we now call 'alla breve'.
    */

    string getMensurSlashValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurSlash() throw (AttributeNotFoundException);
    void setMensurSlash(std::string _mensurslash);
    bool hasMensurSlash();
    void removeMensurSlash();

    private:
        BaseMeiElement *b;
};


struct MensurationVisMixIn {
    MensurationVisMixIn(BaseMeiElement *b);
    virtual ~MensurationVisMixIn() {};
    
    /** \brief   indicates whether the base symbol is written vertically or horizontally.
    */

    string getMensurFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurForm() throw (AttributeNotFoundException);
    void setMensurForm(std::string _mensurform);
    bool hasMensurForm();
    void removeMensurForm();

    /** \brief   holds the staff location of the mensuration sign.
    */

    string getMensurLocValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurLoc() throw (AttributeNotFoundException);
    void setMensurLoc(std::string _mensurloc);
    bool hasMensurLoc();
    void removeMensurLoc();

    /** \brief   describes the relative size of the mensuration sign.
    */

    string getMensurSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getMensurSize() throw (AttributeNotFoundException);
    void setMensurSize(std::string _mensursize);
    bool hasMensurSize();
    void removeMensurSize();

    private:
        BaseMeiElement *b;
};


struct NoteLogMensuralMixIn {
    NoteLogMensuralMixIn(BaseMeiElement *b);
    virtual ~NoteLogMensuralMixIn() {};
    
    /** \brief   indicates this element's participation in a ligature.
    */

    string getLigValue() throw (AttributeNotFoundException);
    MeiAttribute* getLig() throw (AttributeNotFoundException);
    void setLig(std::string _lig);
    bool hasLig();
    void removeLig();

    private:
        BaseMeiElement *b;
};


struct RestVisMensuralMixIn {
    RestVisMensuralMixIn(BaseMeiElement *b);
    virtual ~RestVisMensuralMixIn() {};
    
    /** \brief   states how many spaces are covered by the rest.
    */

    string getSpacesValue() throw (AttributeNotFoundException);
    MeiAttribute* getSpaces() throw (AttributeNotFoundException);
    void setSpaces(std::string _spaces);
    bool hasSpaces();
    void removeSpaces();

    private:
        BaseMeiElement *b;
};


struct StaffdefLogMensuralMixIn {
    StaffdefLogMensuralMixIn(BaseMeiElement *b);
    virtual ~StaffdefLogMensuralMixIn() {};
    
    /** \brief   Together, proport.num and proport.numbase specify a proportional change as a
    * ratio, e.g., 1:3. Proport.num is for the first value in the ratio.
    */

    string getProportNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getProportNum() throw (AttributeNotFoundException);
    void setProportNum(std::string _proportnum);
    bool hasProportNum();
    void removeProportNum();

    /** \brief   Together, proport.num and proport.numbase specify a proportional change as a
    * ratio, e.g., 1:3. Proport.numbase is for the second value in the ratio.
    */

    string getProportNumbaseValue() throw (AttributeNotFoundException);
    MeiAttribute* getProportNumbase() throw (AttributeNotFoundException);
    void setProportNumbase(std::string _proportnumbase);
    bool hasProportNumbase();
    void removeProportNumbase();

    private:
        BaseMeiElement *b;
};


#endif // MENSURALMIXIN_H_
