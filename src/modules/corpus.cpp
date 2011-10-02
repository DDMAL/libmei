#include "corpus.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::MeiCorpus::MeiCorpus() :
    MeiElement("meiCorpus"),
    m_Common(this),
    m_Meiversion(this)
{
}
REGISTER_DEFINITION(mei::MeiCorpus, "meiCorpus");
mei::MeiCorpus::~MeiCorpus() {}

/* include <meiCorpus> */



