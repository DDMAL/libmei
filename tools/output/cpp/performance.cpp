#include "performance.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AvFile::AvFile() :
    MeiElement("avFile")
{
}
REGISTER_DEFINITION(mei::AvFile, "avFile");
mei::AvFile::~AvFile() {}
mei::AvFile::AvFile(const AvFile& other) :
    MeiElement(other),

{
}

/* include <avFile> */

mei::Clip::Clip() :
    MeiElement("clip")
{
}
REGISTER_DEFINITION(mei::Clip, "clip");
mei::Clip::~Clip() {}
mei::Clip::Clip(const Clip& other) :
    MeiElement(other),

{
}

/* include <clip> */

mei::Performance::Performance() :
    MeiElement("performance")
{
}
REGISTER_DEFINITION(mei::Performance, "performance");
mei::Performance::~Performance() {}
mei::Performance::Performance(const Performance& other) :
    MeiElement(other),

{
}

/* include <performance> */

mei::Recording::Recording() :
    MeiElement("recording")
{
}
REGISTER_DEFINITION(mei::Recording, "recording");
mei::Recording::~Recording() {}
mei::Recording::Recording(const Recording& other) :
    MeiElement(other),

{
}

/* include <recording> */



