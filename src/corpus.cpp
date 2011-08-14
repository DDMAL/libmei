#include "corpus.h"
using namespace std;

MeiCorpus::MeiCorpus() : m_Common(this), m_Meiversion(this){
    m_Base.setName("meiCorpus");
};
//REGISTER_DEFINITION(MeiCorpus, "meiCorpus");
