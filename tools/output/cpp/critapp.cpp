#include "critapp.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::App::App() :
    MeiElement("app")
{
}
REGISTER_DEFINITION(mei::App, "app");
mei::App::~App() {}
mei::App::App(const App& other) :
    MeiElement(other),

{
}

/* include <app> */

mei::Lem::Lem() :
    MeiElement("lem")
{
}
REGISTER_DEFINITION(mei::Lem, "lem");
mei::Lem::~Lem() {}
mei::Lem::Lem(const Lem& other) :
    MeiElement(other),

{
}

/* include <lem> */

mei::Rdg::Rdg() :
    MeiElement("rdg")
{
}
REGISTER_DEFINITION(mei::Rdg, "rdg");
mei::Rdg::~Rdg() {}
mei::Rdg::Rdg(const Rdg& other) :
    MeiElement(other),

{
}

/* include <rdg> */



