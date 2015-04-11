#include "performance.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AvFile::AvFile() :
    MeiElement("avFile"),
    m_Common(this),
    m_Declaring(this),
    m_Internetmedia(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AvFile, "avFile");
mei::AvFile::~AvFile() {}
mei::AvFile::AvFile(const AvFile& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Internetmedia(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_Typed(this)
{
}

/* include <avFile> */

mei::Clip::Clip() :
    MeiElement("clip"),
    m_Common(this),
    m_Declaring(this),
    m_Mediabounds(this),
    m_Startid(this)
{
}
REGISTER_DEFINITION(mei::Clip, "clip");
mei::Clip::~Clip() {}
mei::Clip::Clip(const Clip& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Mediabounds(this),
    m_Startid(this)
{
}

/* include <clip> */

mei::Performance::Performance() :
    MeiElement("performance"),
    m_Common(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Performance, "performance");
mei::Performance::~Performance() {}
mei::Performance::Performance(const Performance& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this)
{
}

/* include <performance> */

mei::Recording::Recording() :
    MeiElement("recording"),
    m_Common(this),
    m_Declaring(this),
    m_Mediabounds(this),
    m_Startid(this)
{
}
REGISTER_DEFINITION(mei::Recording, "recording");
mei::Recording::~Recording() {}
mei::Recording::Recording(const Recording& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Mediabounds(this),
    m_Startid(this)
{
}

/* include <recording> */



