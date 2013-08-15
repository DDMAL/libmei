/*
    Copyright (c) 2011-2013 Andrew Hankinson, Alastair Porter, and Others
    
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

#ifndef EDITTRANS_H_
#define EDITTRANS_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include <string>


namespace mei {
/** \brief contains an abbreviation of any sort.
 */
class MEI_EXPORT Abbr : public MeiElement {
    public:
        Abbr();
        Abbr(const Abbr& other);
        virtual ~Abbr();
        /** \brief records the expansion of a text abbreviation.
         */
        MeiAttribute* getExpan();
        void setExpan(std::string _expan);
        bool hasExpan();
        void removeExpan();

/* include <abbr> */


    private:
        REGISTER_DECLARATION(Abbr);
};

/** \brief contains letters, words, or phrases inserted in the source text by an author,
 *  scribe, annotator, or corrector.
 */
class MEI_EXPORT Add : public MeiElement {
    public:
        Add();
        Add(const Add& other);
        virtual ~Add();

/* include <add> */


    private:
        REGISTER_DECLARATION(Add);
};

/** \brief groups a number of alternative encodings for the same point in a text.
 */
class MEI_EXPORT Choice : public MeiElement {
    public:
        Choice();
        Choice(const Choice& other);
        virtual ~Choice();

/* include <choice> */


    private:
        REGISTER_DECLARATION(Choice);
};

/** \brief contains the correct form of a passage apparently erroneous in the copy text.
 */
class MEI_EXPORT Corr : public MeiElement {
    public:
        Corr();
        Corr(const Corr& other);
        virtual ~Corr();

/* include <corr> */


    private:
        REGISTER_DECLARATION(Corr);
};

/** \brief contains an area of damage to the text witness.
 */
class MEI_EXPORT Damage : public MeiElement {
    public:
        Damage();
        Damage(const Damage& other);
        virtual ~Damage();
        /** \brief signifies the degree of damage according to a convenient scale.
         * 
         *  The
         */
        MeiAttribute* getDegree();
        void setDegree(std::string _degree);
        bool hasDegree();
        void removeDegree();

/* include <damage> */


    private:
        REGISTER_DECLARATION(Damage);
};

/** \brief contains a letter, word, or passage deleted, marked as deleted, or otherwise
 *  indicated as superfluous or spurious in the copy text by an author, scribe,
 *  annotator, or corrector.
 */
class MEI_EXPORT Del : public MeiElement {
    public:
        Del();
        Del(const Del& other);
        virtual ~Del();
        /** \brief indicates how the element in question was rendered or presented in the source
         *  text.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

/* include <del> */


    private:
        REGISTER_DECLARATION(Del);
};

/** \brief contains the expansion of an abbreviation.
 */
class MEI_EXPORT Expan : public MeiElement {
    public:
        Expan();
        Expan(const Expan& other);
        virtual ~Expan();
        /** \brief captures the unabbreviated form of the text.
         */
        MeiAttribute* getAbbr();
        void setAbbr(std::string _abbr);
        bool hasAbbr();
        void removeAbbr();

/* include <expan> */


    private:
        REGISTER_DECLARATION(Expan);
};

/** \brief indicates a point where material has been omitted in a transcription, whether
 *  for editorial reasons described in the TEI header, as part of sampling practice,
 *  or because the material is illegible, invisible, or inaudible.
 */
class MEI_EXPORT Gap : public MeiElement {
    public:
        Gap();
        Gap(const Gap& other);
        virtual ~Gap();

/* include <gap> */


    private:
        REGISTER_DECLARATION(Gap);
};

/** \brief marks the beginning of a sequence of text written in a new hand, or the
 *  beginning of a scribal stint.
 */
class MEI_EXPORT HandShift : public MeiElement {
    public:
        HandShift();
        HandShift(const HandShift& other);
        virtual ~HandShift();
        /** \brief describes the character of the new hand.
         */
        MeiAttribute* getCharacter();
        void setCharacter(std::string _character);
        bool hasCharacter();
        void removeCharacter();
        /** \brief specifies the new state of the paralinguistic feature specified.
         */
        MeiAttribute* getNew();
        void setNew(std::string _new);
        bool hasNew();
        void removeNew();
        /** \brief identifies the old hand.
         * 
         *  The value must contain the ID of a hand element given elsewhere in the document.
         */
        MeiAttribute* getOld();
        void setOld(std::string _old);
        bool hasOld();
        void removeOld();

/* include <handShift> */


    private:
        REGISTER_DECLARATION(HandShift);
};

/** \brief contains a reading which is marked as following the original, rather than being
 *  normalized or corrected.
 */
class MEI_EXPORT Orig : public MeiElement {
    public:
        Orig();
        Orig(const Orig& other);
        virtual ~Orig();

/* include <orig> */


    private:
        REGISTER_DECLARATION(Orig);
};

/** \brief contains a reading which has been regularized or normalized in some sense.
 */
class MEI_EXPORT Reg : public MeiElement {
    public:
        Reg();
        Reg(const Reg& other);
        virtual ~Reg();

/* include <reg> */


    private:
        REGISTER_DECLARATION(Reg);
};

/** \brief indicates restoration of text to an earlier state by cancellation of an
 *  editorial or authorial marking or instruction.
 */
class MEI_EXPORT Restore : public MeiElement {
    public:
        Restore();
        Restore(const Restore& other);
        virtual ~Restore();
        /** \brief provides a description of the means of restoration.
         */
        MeiAttribute* getDesc();
        void setDesc(std::string _desc);
        bool hasDesc();
        void removeDesc();

/* include <restore> */


    private:
        REGISTER_DECLARATION(Restore);
};

/** \brief contains text reproduced although apparently incorrect or inaccurate.
 */
class MEI_EXPORT Sic : public MeiElement {
    public:
        Sic();
        Sic(const Sic& other);
        virtual ~Sic();

/* include <sic> */


    private:
        REGISTER_DECLARATION(Sic);
};

/** \brief groups one or more deletions with one or more additions when the combination is
 *  to be regarded as a single intervention in the text.
 */
class MEI_EXPORT Subst : public MeiElement {
    public:
        Subst();
        Subst(const Subst& other);
        virtual ~Subst();

/* include <subst> */


    private:
        REGISTER_DECLARATION(Subst);
};

/** \brief signifies text supplied by the transcriber or editor for any reason, typically
 *  because the original cannot be read because of physical damage or loss to the
 *  original.
 */
class MEI_EXPORT Supplied : public MeiElement {
    public:
        Supplied();
        Supplied(const Supplied& other);
        virtual ~Supplied();

/* include <supplied> */


    private:
        REGISTER_DECLARATION(Supplied);
};

/** \brief contains a word, phrase, or passage which cannot be transcribed with certainty
 *  because it is illegible or inaudible in the source.
 */
class MEI_EXPORT Unclear : public MeiElement {
    public:
        Unclear();
        Unclear(const Unclear& other);
        virtual ~Unclear();

/* include <unclear> */


    private:
        REGISTER_DECLARATION(Unclear);
};
}
#endif  // EDITTRANS_H_
