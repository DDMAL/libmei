
#include "corpus.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Meicorpus::Meicorpus() : 
    MeiElement("meiCorpus"),
    m_Common(this),
    m_Meiversion(this) 
{
};
REGISTER_DEFINITION(mei::Meicorpus, "meiCorpus");




