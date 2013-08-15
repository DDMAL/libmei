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

#ifndef SOLESMES_H_
#define SOLESMES_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "derived-module-meimixins.h"


namespace mei {
/** \brief 
 */
class MEI_EXPORT Division : public MeiElement {
    public:
        Division();
        Division(const Division& other);
        virtual ~Division();

/* include <division> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        SolesmesDivisionMixIn    m_SolesmesDivision;

    private:
        REGISTER_DECLARATION(Division);
};

/** \brief 
 */
class MEI_EXPORT Episema : public MeiElement {
    public:
        Episema();
        Episema(const Episema& other);
        virtual ~Episema();

/* include <episema> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        SolesmesEpisemaMixIn    m_SolesmesEpisema;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;

    private:
        REGISTER_DECLARATION(Episema);
};

/** \brief Supplies a "neume component" to neume that allows the description of individual
 *  neume parts, e.g., a quilisma.
 */
class MEI_EXPORT Nc : public MeiElement {
    public:
        Nc();
        Nc(const Nc& other);
        virtual ~Nc();

/* include <nc> */

        CommonMixIn    m_Common;
        SolesmesNcMixIn    m_SolesmesNc;

    private:
        REGISTER_DECLARATION(Nc);
};

/** \brief Identifies a recognized group of pitches that are known as belonging to a single
 *  group.
 * 
 *  This is used instead of the earlier "ineume" and "uneume" grouping. Neumes may
 *  be nested, so it is possible to, for example, construct a neume from a number of
 *  sub-neume components. This is useful in situations where there is no pre-
 *  determined name for a given figure, i.e., compound neumes. As well, neume allows
 *  ligature elements as children. Ligatures may be either "recta" or "obliqua." In
 *  practice most neumes are "recta" so it may be safe to omit any ligature element.
 *  However, in compound neume cases it can be useful to precisely spell out the
 *  forms that are given.
 */
class MEI_EXPORT Neume : public MeiElement {
    public:
        Neume();
        Neume(const Neume& other);
        virtual ~Neume();

/* include <neume> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        SolesmesNeumeMixIn    m_SolesmesNeume;

    private:
        REGISTER_DECLARATION(Neume);
};
}
#endif  // SOLESMES_H_
