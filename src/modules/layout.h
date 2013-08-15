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

#ifndef LAYOUT_H_
#define LAYOUT_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"


namespace mei {
/** \brief A layout element contains elements describing the physical layout of a page of
 *  music.
 */
class MEI_EXPORT Layout : public MeiElement {
    public:
        Layout();
        Layout(const Layout& other);
        virtual ~Layout();

/* include <layout> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(Layout);
};

/** \brief A page element defines a physical page.
 * 
 *  Use the regular @facs pattern to describe page dimensions.
 */
class MEI_EXPORT Page : public MeiElement {
    public:
        Page();
        Page(const Page& other);
        virtual ~Page();

/* include <page> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Page);
};

/** \brief A system element defines a physical system on a printed page.
 */
class MEI_EXPORT System : public MeiElement {
    public:
        System();
        System(const System& other);
        virtual ~System();

/* include <system> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(System);
};
}
#endif  // LAYOUT_H_
