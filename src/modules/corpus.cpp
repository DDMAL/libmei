#include "corpus.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Meicorpus::Meicorpus() :
    MeiElement("meiCorpus"),
    m_Common(this),
    m_Meiversion(this)
{
}
REGISTER_DEFINITION(mei::Meicorpus, "meiCorpus");
mei::Meicorpus::~Meicorpus() {}

/* include <meiCorpus> */



