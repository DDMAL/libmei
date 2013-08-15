#include "layout.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Layout::Layout() :
    MeiElement("layout"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::Layout, "layout");
mei::Layout::~Layout() {}
mei::Layout::Layout(const Layout& other) :
    MeiElement(other),
    m_Common(this)
{
}

/* include <layout> */

mei::Page::Page() :
    MeiElement("page"),
    m_Common(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Page, "page");
mei::Page::~Page() {}
mei::Page::Page(const Page& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this)
{
}

/* include <page> */

mei::System::System() :
    MeiElement("system"),
    m_Common(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::System, "system");
mei::System::~System() {}
mei::System::System(const System& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this)
{
}

/* include <system> */



