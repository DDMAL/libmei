#include "lyrics.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Lyrics::Lyrics() :
    MeiElement("lyrics")
{
}
REGISTER_DEFINITION(mei::Lyrics, "lyrics");
mei::Lyrics::~Lyrics() {}
mei::Lyrics::Lyrics(const Lyrics& other) :
    MeiElement(other),

{
}

/* include <lyrics> */

mei::Verse::Verse() :
    MeiElement("verse")
{
}
REGISTER_DEFINITION(mei::Verse, "verse");
mei::Verse::~Verse() {}
mei::Verse::Verse(const Verse& other) :
    MeiElement(other),

{
}

/* include <verse> */



