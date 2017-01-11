#include "critapp.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::App::App() :
    MeiElement("app"),
    m_Common(this),
    m_CommonPart(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::App, "app");
mei::App::~App() {}
mei::App::App(const App& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Typed(this)
{
}

/* include <app> */

mei::Lem::Lem() :
    MeiElement("lem"),
    m_Common(this),
    m_CommonPart(this),
    m_Crit(this),
    m_Handident(this),
    m_Responsibility(this),
    m_Sequence(this),
    m_Source(this),
    m_Pointing(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Targeteval(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Lem, "lem");
mei::Lem::~Lem() {}
mei::Lem::Lem(const Lem& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Crit(this),
    m_Handident(this),
    m_Responsibility(this),
    m_Sequence(this),
    m_Source(this),
    m_Pointing(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Targeteval(this),
    m_Typed(this)
{
}

/* include <lem> */

mei::Rdg::Rdg() :
    MeiElement("rdg"),
    m_Common(this),
    m_CommonPart(this),
    m_Crit(this),
    m_Handident(this),
    m_Responsibility(this),
    m_Sequence(this),
    m_Source(this),
    m_Pointing(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Targeteval(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Rdg, "rdg");
mei::Rdg::~Rdg() {}
mei::Rdg::Rdg(const Rdg& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Crit(this),
    m_Handident(this),
    m_Responsibility(this),
    m_Sequence(this),
    m_Source(this),
    m_Pointing(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Targeteval(this),
    m_Typed(this)
{
}

/* include <rdg> */



