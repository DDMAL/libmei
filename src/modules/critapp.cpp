#include "critapp.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::App::App() :
    MeiElement("app"),
    m_Common(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::App, "app");
mei::App::~App() {}

/* include <app> */

mei::Lem::Lem() :
    MeiElement("lem"),
    m_Common(this),
    m_Crit(this),
    m_Handident(this),
    m_Responsibility(this),
    m_Sequence(this),
    m_Source(this),
    m_Typed(this),
    m_Pointing(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Lem, "lem");
mei::Lem::~Lem() {}

/* include <lem> */

mei::Rdg::Rdg() :
    MeiElement("rdg"),
    m_Common(this),
    m_Crit(this),
    m_Handident(this),
    m_Responsibility(this),
    m_Sequence(this),
    m_Source(this),
    m_Typed(this),
    m_Pointing(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Rdg, "rdg");
mei::Rdg::~Rdg() {}

/* include <rdg> */



