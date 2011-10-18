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
mei::MeiCorpus::MeiCorpus(const MeiCorpus& other) :
    MeiElement(other), 
    m_Common(this),
    m_Meiversion(this)
{
}

/* include <meiCorpus> */



