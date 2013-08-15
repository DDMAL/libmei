#include "shared.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Accid::Accid() :
    MeiElement("accid"),
    m_Common(this),
    m_Facsimile(this),
    m_Typography(this),
    m_AccidLog(this),
    m_Accidental(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Color(this),
    m_Enclosingchars(this),
    m_Placement(this),
    m_Staffloc(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Accid, "accid");
mei::Accid::~Accid() {}
mei::Accid::Accid(const Accid& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Typography(this),
    m_AccidLog(this),
    m_Accidental(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Color(this),
    m_Enclosingchars(this),
    m_Placement(this),
    m_Staffloc(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}

/* include <accid> */

mei::Actor::Actor() :
    MeiElement("actor"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Actor, "actor");
mei::Actor::~Actor() {}
mei::Actor::Actor(const Actor& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <actor> */

mei::AddrLine::AddrLine() :
    MeiElement("addrLine"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::AddrLine, "addrLine");
mei::AddrLine::~AddrLine() {}
mei::AddrLine::AddrLine(const AddrLine& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <addrLine> */

mei::Address::Address() :
    MeiElement("address"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Address, "address");
mei::Address::~Address() {}
mei::Address::Address(const Address& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <address> */

mei::Annot::Annot() :
    MeiElement("annot"),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Layerident(this),
    m_Staffident(this),
    m_Startendid(this),
    m_Startid(this),
    m_TimestampMusical(this),
    m_Timestamp2Musical(this),
    m_TimestampPerformed(this),
    m_DurationPerformed(this),
    m_Plist(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Annot, "annot");
mei::Annot::~Annot() {}
mei::Annot::Annot(const Annot& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Layerident(this),
    m_Staffident(this),
    m_Startendid(this),
    m_Startid(this),
    m_TimestampMusical(this),
    m_Timestamp2Musical(this),
    m_TimestampPerformed(this),
    m_DurationPerformed(this),
    m_Plist(this),
    m_Responsibility(this)
{
}

/* include <annot> */

mei::Arranger::Arranger() :
    MeiElement("arranger"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Arranger, "arranger");
mei::Arranger::~Arranger() {}
mei::Arranger::Arranger(const Arranger& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <arranger> */

mei::Artic::Artic() :
    MeiElement("artic"),
    m_Common(this),
    m_Facsimile(this),
    m_Typography(this),
    m_Articulation(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Color(this),
    m_Enclosingchars(this),
    m_Placement(this),
    m_Staffloc(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Artic, "artic");
mei::Artic::~Artic() {}
mei::Artic::Artic(const Artic& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Typography(this),
    m_Articulation(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Color(this),
    m_Enclosingchars(this),
    m_Placement(this),
    m_Staffloc(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}

/* include <artic> */

mei::Author::Author() :
    MeiElement("author"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Author, "author");
mei::Author::~Author() {}
mei::Author::Author(const Author& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <author> */

mei::BarLine::BarLine() :
    MeiElement("barLine"),
    m_Common(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_BarLineLog(this),
    m_MeterconformanceBar(this),
    m_Barplacement(this),
    m_Color(this),
    m_Measurement(this),
    m_Width(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::BarLine, "barLine");
mei::BarLine::~BarLine() {}
mei::BarLine::BarLine(const BarLine& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_BarLineLog(this),
    m_MeterconformanceBar(this),
    m_Barplacement(this),
    m_Color(this),
    m_Measurement(this),
    m_Width(this),
    m_TimestampMusical(this)
{
}

/* include <barLine> */

mei::Bibl::Bibl() :
    MeiElement("bibl"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Bibl, "bibl");
mei::Bibl::~Bibl() {}
mei::Bibl::Bibl(const Bibl& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Pointing(this)
{
}

/* include <bibl> */

mei::BiblList::BiblList() :
    MeiElement("biblList"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::BiblList, "biblList");
mei::BiblList::~BiblList() {}
mei::BiblList::BiblList(const BiblList& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this)
{
}

/* include <biblList> */

mei::BiblScope::BiblScope() :
    MeiElement("biblScope"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::BiblScope, "biblScope");
mei::BiblScope::~BiblScope() {}
mei::BiblScope::BiblScope(const BiblScope& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Measurement(this)
{
}

/* include <biblScope> */

mei::Body::Body() :
    MeiElement("body"),
    m_Common(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Body, "body");
mei::Body::~Body() {}
mei::Body::Body(const Body& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this)
{
}

/* include <body> */

mei::Caption::Caption() :
    MeiElement("caption"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Caption, "caption");
mei::Caption::~Caption() {}
mei::Caption::Caption(const Caption& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <caption> */

mei::CastGrp::CastGrp() :
    MeiElement("castGrp"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::CastGrp, "castGrp");
mei::CastGrp::~CastGrp() {}
mei::CastGrp::CastGrp(const CastGrp& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <castGrp> */

mei::CastItem::CastItem() :
    MeiElement("castItem"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::CastItem, "castItem");
mei::CastItem::~CastItem() {}
mei::CastItem::CastItem(const CastItem& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <castItem> */

mei::CastList::CastList() :
    MeiElement("castList"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::CastList, "castList");
mei::CastList::~CastList() {}
mei::CastList::CastList(const CastList& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <castList> */

mei::Chord::Chord() :
    MeiElement("chord"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Articulation(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Syltext(this),
    m_Slurpresent(this),
    m_Tiepresent(this),
    m_Tupletpresent(this),
    m_ChordVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Relativesize(this),
    m_Stemmed(this),
    m_Visibility(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_Xy(this),
    m_ArticulationPerformed(this),
    m_DurationPerformed(this),
    m_Instrumentident(this)
{
}
REGISTER_DEFINITION(mei::Chord, "chord");
mei::Chord::~Chord() {}
mei::Chord::Chord(const Chord& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Articulation(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Syltext(this),
    m_Slurpresent(this),
    m_Tiepresent(this),
    m_Tupletpresent(this),
    m_ChordVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Relativesize(this),
    m_Stemmed(this),
    m_Visibility(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_Xy(this),
    m_ArticulationPerformed(this),
    m_DurationPerformed(this),
    m_Instrumentident(this)
{
}

/* include <chord> */

mei::Clef::Clef() :
    MeiElement("clef"),
    m_Common(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Facsimile(this),
    m_ClefLog(this),
    m_Clefshape(this),
    m_Lineloc(this),
    m_Octave(this),
    m_Octavedisplacement(this),
    m_Altsym(this),
    m_Color(this)
{
}
REGISTER_DEFINITION(mei::Clef, "clef");
mei::Clef::~Clef() {}
mei::Clef::Clef(const Clef& other) :
    MeiElement(other),
    m_Common(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Facsimile(this),
    m_ClefLog(this),
    m_Clefshape(this),
    m_Lineloc(this),
    m_Octave(this),
    m_Octavedisplacement(this),
    m_Altsym(this),
    m_Color(this)
{
}

/* include <clef> */

mei::ClefGrp::ClefGrp() :
    MeiElement("clefGrp"),
    m_Common(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::ClefGrp, "clefGrp");
mei::ClefGrp::~ClefGrp() {}
mei::ClefGrp::ClefGrp(const ClefGrp& other) :
    MeiElement(other),
    m_Common(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Facsimile(this)
{
}

/* include <clefGrp> */

mei::Composer::Composer() :
    MeiElement("composer"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Composer, "composer");
mei::Composer::~Composer() {}
mei::Composer::Composer(const Composer& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <composer> */

mei::Creation::Creation() :
    MeiElement("creation"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Creation, "creation");
mei::Creation::~Creation() {}
mei::Creation::Creation(const Creation& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <creation> */

mei::Custos::Custos() :
    MeiElement("custos"),
    m_Common(this),
    m_Facsimile(this),
    m_CustosLog(this),
    m_Pitch(this),
    m_Octave(this),
    m_Altsym(this),
    m_Color(this),
    m_Staffloc(this)
{
}
REGISTER_DEFINITION(mei::Custos, "custos");
mei::Custos::~Custos() {}
mei::Custos::Custos(const Custos& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_CustosLog(this),
    m_Pitch(this),
    m_Octave(this),
    m_Altsym(this),
    m_Color(this),
    m_Staffloc(this)
{
}

/* include <custos> */

mei::Date::Date() :
    MeiElement("date"),
    m_Bibl(this),
    m_Calendared(this),
    m_Common(this),
    m_Datable(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Date, "date");
mei::Date::~Date() {}
mei::Date::Date(const Date& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Calendared(this),
    m_Common(this),
    m_Datable(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <date> */

mei::Dir::Dir() :
    MeiElement("dir"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this)
{
}
REGISTER_DEFINITION(mei::Dir, "dir");
mei::Dir::~Dir() {}
mei::Dir::Dir(const Dir& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this)
{
}

/* include <dir> */

mei::Distributor::Distributor() :
    MeiElement("distributor"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Distributor, "distributor");
mei::Distributor::~Distributor() {}
mei::Distributor::Distributor(const Distributor& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <distributor> */

mei::Dot::Dot() :
    MeiElement("dot"),
    m_Common(this),
    m_Facsimile(this),
    m_DotLog(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Color(this),
    m_Staffloc(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Dot, "dot");
mei::Dot::~Dot() {}
mei::Dot::Dot(const Dot& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_DotLog(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Color(this),
    m_Staffloc(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}

/* include <dot> */

mei::Dynam::Dynam() :
    MeiElement("dynam"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this)
{
}
REGISTER_DEFINITION(mei::Dynam, "dynam");
mei::Dynam::~Dynam() {}
mei::Dynam::Dynam(const Dynam& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this)
{
}

/* include <dynam> */

mei::Edition::Edition() :
    MeiElement("edition"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Edition, "edition");
mei::Edition::~Edition() {}
mei::Edition::Edition(const Edition& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <edition> */

mei::Editor::Editor() :
    MeiElement("editor"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Editor, "editor");
mei::Editor::~Editor() {}
mei::Editor::Editor(const Editor& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <editor> */

mei::Ending::Ending() :
    MeiElement("ending"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Ending, "ending");
mei::Ending::~Ending() {}
mei::Ending::Ending(const Ending& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Pointing(this)
{
}

/* include <ending> */

mei::Expansion::Expansion() :
    MeiElement("expansion"),
    m_Common(this),
    m_Typed(this),
    m_Plist(this)
{
}
REGISTER_DEFINITION(mei::Expansion, "expansion");
mei::Expansion::~Expansion() {}
mei::Expansion::Expansion(const Expansion& other) :
    MeiElement(other),
    m_Common(this),
    m_Typed(this),
    m_Plist(this)
{
}

/* include <expansion> */

mei::Extent::Extent() :
    MeiElement("extent"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Extent, "extent");
mei::Extent::~Extent() {}
mei::Extent::Extent(const Extent& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Measurement(this)
{
}

/* include <extent> */

mei::Funder::Funder() :
    MeiElement("funder"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Funder, "funder");
mei::Funder::~Funder() {}
mei::Funder::Funder(const Funder& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <funder> */

mei::Fw::Fw() :
    MeiElement("fw"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Fw, "fw");
mei::Fw::~Fw() {}
mei::Fw::Fw(const Fw& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this)
{
}

/* include <fw> */

mei::Genre::Genre() :
    MeiElement("genre"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Genre, "genre");
mei::Genre::~Genre() {}
mei::Genre::Genre(const Genre& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <genre> */

mei::Group::Group() :
    MeiElement("group"),
    m_Common(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Group, "group");
mei::Group::~Group() {}
mei::Group::Group(const Group& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this)
{
}

/* include <group> */

mei::GrpSym::GrpSym() :
    MeiElement("grpSym"),
    m_Common(this),
    m_Facsimile(this),
    m_Staffgroupingsym(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::GrpSym, "grpSym");
mei::GrpSym::~GrpSym() {}
mei::GrpSym::GrpSym(const GrpSym& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Staffgroupingsym(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}

/* include <grpSym> */

mei::Identifier::Identifier() :
    MeiElement("identifier"),
    m_Authorized(this),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Identifier, "identifier");
mei::Identifier::~Identifier() {}
mei::Identifier::Identifier(const Identifier& other) :
    MeiElement(other),
    m_Authorized(this),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <identifier> */

mei::Imprint::Imprint() :
    MeiElement("imprint"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Imprint, "imprint");
mei::Imprint::~Imprint() {}
mei::Imprint::Imprint(const Imprint& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <imprint> */

mei::Incip::Incip() :
    MeiElement("incip"),
    m_Common(this),
    m_Bibl(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Incip, "incip");
mei::Incip::~Incip() {}
mei::Incip::Incip(const Incip& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Typed(this)
{
}

/* include <incip> */

mei::KeyAccid::KeyAccid() :
    MeiElement("keyAccid"),
    m_Common(this),
    m_Facsimile(this),
    m_Accidental(this),
    m_Pitch(this),
    m_Octave(this),
    m_Enclosingchars(this),
    m_Staffloc(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::KeyAccid, "keyAccid");
mei::KeyAccid::~KeyAccid() {}
mei::KeyAccid::KeyAccid(const KeyAccid& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Accidental(this),
    m_Pitch(this),
    m_Octave(this),
    m_Enclosingchars(this),
    m_Staffloc(this),
    m_Xy(this)
{
}

MeiAttribute* mei::KeyAccid::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::KeyAccid::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::KeyAccid::hasForm() {
    return hasAttribute("form");
};

void mei::KeyAccid::removeForm() {
    removeAttribute("form");
};
/* include <keyAccid> */

mei::KeySig::KeySig() :
    MeiElement("keySig"),
    m_Common(this),
    m_Facsimile(this),
    m_KeySigLog(this),
    m_Accidental(this),
    m_Pitch(this)
{
}
REGISTER_DEFINITION(mei::KeySig, "keySig");
mei::KeySig::~KeySig() {}
mei::KeySig::KeySig(const KeySig& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_KeySigLog(this),
    m_Accidental(this),
    m_Pitch(this)
{
}

/* include <keySig> */

mei::Label::Label() :
    MeiElement("label"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Label, "label");
mei::Label::~Label() {}
mei::Label::Label(const Label& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <label> */

mei::Layer::Layer() :
    MeiElement("layer"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_LayerLog(this),
    m_Meterconformance(this),
    m_Visibility(this)
{
}
REGISTER_DEFINITION(mei::Layer, "layer");
mei::Layer::~Layer() {}
mei::Layer::Layer(const Layer& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_LayerLog(this),
    m_Meterconformance(this),
    m_Visibility(this)
{
}

/* include <layer> */

mei::LayerDef::LayerDef() :
    MeiElement("layerDef"),
    m_Common(this),
    m_Declaring(this),
    m_DurationDefault(this),
    m_Octavedefault(this),
    m_LabelsAddl(this),
    m_BeamingVis(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_Instrumentident(this)
{
}
REGISTER_DEFINITION(mei::LayerDef, "layerDef");
mei::LayerDef::~LayerDef() {}
mei::LayerDef::LayerDef(const LayerDef& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_DurationDefault(this),
    m_Octavedefault(this),
    m_LabelsAddl(this),
    m_BeamingVis(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_Instrumentident(this)
{
}

/* include <layerDef> */

mei::Lb::Lb() :
    MeiElement("lb"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Lb, "lb");
mei::Lb::~Lb() {}
mei::Lb::Lb(const Lb& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Lb::getFunc() {
    if (!hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return getAttribute("func");
};

void mei::Lb::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    addAttribute(a);
};

bool mei::Lb::hasFunc() {
    return hasAttribute("func");
};

void mei::Lb::removeFunc() {
    removeAttribute("func");
};
/* include <lb> */

mei::Librettist::Librettist() :
    MeiElement("librettist"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Librettist, "librettist");
mei::Librettist::~Librettist() {}
mei::Librettist::Librettist(const Librettist& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <librettist> */

mei::Lyricist::Lyricist() :
    MeiElement("lyricist"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Lyricist, "lyricist");
mei::Lyricist::~Lyricist() {}
mei::Lyricist::Lyricist(const Lyricist& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <lyricist> */

mei::Mdiv::Mdiv() :
    MeiElement("mdiv"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Mdiv, "mdiv");
mei::Mdiv::~Mdiv() {}
mei::Mdiv::Mdiv(const Mdiv& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this)
{
}

/* include <mdiv> */

mei::Mei::Mei() :
    MeiElement("mei"),
    m_Meiversion(this)
{
}
REGISTER_DEFINITION(mei::Mei, "mei");
mei::Mei::~Mei() {}
mei::Mei::Mei(const Mei& other) :
    MeiElement(other),
    m_Meiversion(this)
{
}

/* include <mei> */

mei::Music::Music() :
    MeiElement("music"),
    m_Common(this),
    m_Declaring(this),
    m_Meiversion(this)
{
}
REGISTER_DEFINITION(mei::Music, "music");
mei::Music::~Music() {}
mei::Music::Music(const Music& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Meiversion(this)
{
}

/* include <music> */

mei::Name::Name() :
    MeiElement("name"),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Name, "name");
mei::Name::~Name() {}
mei::Name::Name(const Name& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <name> */

mei::Note::Note() :
    MeiElement("note"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Accidental(this),
    m_Articulation(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Pitch(this),
    m_Octave(this),
    m_Syltext(this),
    m_Slurpresent(this),
    m_Tiepresent(this),
    m_Tupletpresent(this),
    m_NoteVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Coloration(this),
    m_Enclosingchars(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_Stemmed(this),
    m_Visibility(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_Xy(this),
    m_NoteGes(this),
    m_AccidentalPerformed(this),
    m_ArticulationPerformed(this),
    m_DurationPerformed(this),
    m_Instrumentident(this)
{
}
REGISTER_DEFINITION(mei::Note, "note");
mei::Note::~Note() {}
mei::Note::Note(const Note& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Accidental(this),
    m_Articulation(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Pitch(this),
    m_Octave(this),
    m_Syltext(this),
    m_Slurpresent(this),
    m_Tiepresent(this),
    m_Tupletpresent(this),
    m_NoteVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Coloration(this),
    m_Enclosingchars(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_Stemmed(this),
    m_Visibility(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_Xy(this),
    m_NoteGes(this),
    m_AccidentalPerformed(this),
    m_ArticulationPerformed(this),
    m_DurationPerformed(this),
    m_Instrumentident(this)
{
}

/* include <note> */

mei::Num::Num() :
    MeiElement("num"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Num, "num");
mei::Num::~Num() {}
mei::Num::Num(const Num& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Measurement(this)
{
}

/* include <num> */

mei::P::P() :
    MeiElement("p"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::P, "p");
mei::P::~P() {}
mei::P::P(const P& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}

/* include <p> */

mei::Pad::Pad() :
    MeiElement("pad"),
    m_Common(this),
    m_PadLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this)
{
}
REGISTER_DEFINITION(mei::Pad, "pad");
mei::Pad::~Pad() {}
mei::Pad::Pad(const Pad& other) :
    MeiElement(other),
    m_Common(this),
    m_PadLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this)
{
}

/* include <pad> */

mei::Part::Part() :
    MeiElement("part"),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Part, "part");
mei::Part::~Part() {}
mei::Part::Part(const Part& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this)
{
}

/* include <part> */

mei::Parts::Parts() :
    MeiElement("parts"),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Parts, "parts");
mei::Parts::~Parts() {}
mei::Parts::Parts(const Parts& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this)
{
}

/* include <parts> */

mei::Pb::Pb() :
    MeiElement("pb"),
    m_Common(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_PbVis(this)
{
}
REGISTER_DEFINITION(mei::Pb, "pb");
mei::Pb::~Pb() {}
mei::Pb::Pb(const Pb& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_PbVis(this)
{
}

/* include <pb> */

mei::PgDesc::PgDesc() :
    MeiElement("pgDesc"),
    m_Common(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgDesc, "pgDesc");
mei::PgDesc::~PgDesc() {}
mei::PgDesc::PgDesc(const PgDesc& other) :
    MeiElement(other),
    m_Common(this),
    m_Lang(this)
{
}

/* include <pgDesc> */

mei::PgFoot::PgFoot() :
    MeiElement("pgFoot"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgFoot, "pgFoot");
mei::PgFoot::~PgFoot() {}
mei::PgFoot::PgFoot(const PgFoot& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <pgFoot> */

mei::PgFoot2::PgFoot2() :
    MeiElement("pgFoot2"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgFoot2, "pgFoot2");
mei::PgFoot2::~PgFoot2() {}
mei::PgFoot2::PgFoot2(const PgFoot2& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <pgFoot2> */

mei::PgHead::PgHead() :
    MeiElement("pgHead"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgHead, "pgHead");
mei::PgHead::~PgHead() {}
mei::PgHead::PgHead(const PgHead& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <pgHead> */

mei::PgHead2::PgHead2() :
    MeiElement("pgHead2"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgHead2, "pgHead2");
mei::PgHead2::~PgHead2() {}
mei::PgHead2::PgHead2(const PgHead2& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <pgHead2> */

mei::Phrase::Phrase() :
    MeiElement("phrase"),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_DurationPerformed(this),
    m_Joined(this)
{
}
REGISTER_DEFINITION(mei::Phrase, "phrase");
mei::Phrase::~Phrase() {}
mei::Phrase::Phrase(const Phrase& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_DurationPerformed(this),
    m_Joined(this)
{
}

/* include <phrase> */

mei::PhysLoc::PhysLoc() :
    MeiElement("physLoc"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::PhysLoc, "physLoc");
mei::PhysLoc::~PhysLoc() {}
mei::PhysLoc::PhysLoc(const PhysLoc& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <physLoc> */

mei::PubPlace::PubPlace() :
    MeiElement("pubPlace"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::PubPlace, "pubPlace");
mei::PubPlace::~PubPlace() {}
mei::PubPlace::PubPlace(const PubPlace& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <pubPlace> */

mei::Publisher::Publisher() :
    MeiElement("publisher"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Publisher, "publisher");
mei::Publisher::~Publisher() {}
mei::Publisher::Publisher(const Publisher& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <publisher> */

mei::Recipient::Recipient() :
    MeiElement("recipient"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Recipient, "recipient");
mei::Recipient::~Recipient() {}
mei::Recipient::Recipient(const Recipient& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <recipient> */

mei::RelatedItem::RelatedItem() :
    MeiElement("relatedItem"),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::RelatedItem, "relatedItem");
mei::RelatedItem::~RelatedItem() {}
mei::RelatedItem::RelatedItem(const RelatedItem& other) :
    MeiElement(other),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::RelatedItem::getRel() {
    if (!hasAttribute("rel")) {
        throw AttributeNotFoundException("rel");
    }
    return getAttribute("rel");
};

void mei::RelatedItem::setRel(std::string _rel) {
    MeiAttribute *a = new MeiAttribute("rel", _rel);
    addAttribute(a);
};

bool mei::RelatedItem::hasRel() {
    return hasAttribute("rel");
};

void mei::RelatedItem::removeRel() {
    removeAttribute("rel");
};
/* include <relatedItem> */

mei::Rend::Rend() :
    MeiElement("rend"),
    m_Color(this),
    m_Common(this),
    m_Horizontalalign(this),
    m_Lang(this),
    m_Typography(this),
    m_Whitespace(this)
{
}
REGISTER_DEFINITION(mei::Rend, "rend");
mei::Rend::~Rend() {}
mei::Rend::Rend(const Rend& other) :
    MeiElement(other),
    m_Color(this),
    m_Common(this),
    m_Horizontalalign(this),
    m_Lang(this),
    m_Typography(this),
    m_Whitespace(this)
{
}

MeiAttribute* mei::Rend::getAltrend() {
    if (!hasAttribute("altrend")) {
        throw AttributeNotFoundException("altrend");
    }
    return getAttribute("altrend");
};

void mei::Rend::setAltrend(std::string _altrend) {
    MeiAttribute *a = new MeiAttribute("altrend", _altrend);
    addAttribute(a);
};

bool mei::Rend::hasAltrend() {
    return hasAttribute("altrend");
};

void mei::Rend::removeAltrend() {
    removeAttribute("altrend");
};
MeiAttribute* mei::Rend::getRend() {
    if (!hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return getAttribute("rend");
};

void mei::Rend::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    addAttribute(a);
};

bool mei::Rend::hasRend() {
    return hasAttribute("rend");
};

void mei::Rend::removeRend() {
    removeAttribute("rend");
};
MeiAttribute* mei::Rend::getRotation() {
    if (!hasAttribute("rotation")) {
        throw AttributeNotFoundException("rotation");
    }
    return getAttribute("rotation");
};

void mei::Rend::setRotation(std::string _rotation) {
    MeiAttribute *a = new MeiAttribute("rotation", _rotation);
    addAttribute(a);
};

bool mei::Rend::hasRotation() {
    return hasAttribute("rotation");
};

void mei::Rend::removeRotation() {
    removeAttribute("rotation");
};
MeiAttribute* mei::Rend::getValign() {
    if (!hasAttribute("valign")) {
        throw AttributeNotFoundException("valign");
    }
    return getAttribute("valign");
};

void mei::Rend::setValign(std::string _valign) {
    MeiAttribute *a = new MeiAttribute("valign", _valign);
    addAttribute(a);
};

bool mei::Rend::hasValign() {
    return hasAttribute("valign");
};

void mei::Rend::removeValign() {
    removeAttribute("valign");
};
/* include <rend> */

mei::Repository::Repository() :
    MeiElement("repository"),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Repository, "repository");
mei::Repository::~Repository() {}
mei::Repository::Repository(const Repository& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <repository> */

mei::Resp::Resp() :
    MeiElement("resp"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Coded(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Resp, "resp");
mei::Resp::~Resp() {}
mei::Resp::Resp(const Resp& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this),
    m_Coded(this),
    m_Facsimile(this)
{
}

/* include <resp> */

mei::RespStmt::RespStmt() :
    MeiElement("respStmt"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::RespStmt, "respStmt");
mei::RespStmt::~RespStmt() {}
mei::RespStmt::RespStmt(const RespStmt& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <respStmt> */

mei::Rest::Rest() :
    MeiElement("rest"),
    m_Common(this),
    m_Facsimile(this),
    m_Augmentdots(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Tupletpresent(this),
    m_Altsym(this),
    m_Color(this),
    m_Enclosingchars(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_StafflocPitched(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_Instrumentident(this)
{
}
REGISTER_DEFINITION(mei::Rest, "rest");
mei::Rest::~Rest() {}
mei::Rest::Rest(const Rest& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Augmentdots(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Tupletpresent(this),
    m_Altsym(this),
    m_Color(this),
    m_Enclosingchars(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_StafflocPitched(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_Instrumentident(this)
{
}

/* include <rest> */

mei::Role::Role() :
    MeiElement("role"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Role, "role");
mei::Role::~Role() {}
mei::Role::Role(const Role& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <role> */

mei::RoleDesc::RoleDesc() :
    MeiElement("roleDesc"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::RoleDesc, "roleDesc");
mei::RoleDesc::~RoleDesc() {}
mei::RoleDesc::RoleDesc(const RoleDesc& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <roleDesc> */

mei::Sb::Sb() :
    MeiElement("sb"),
    m_Common(this),
    m_Facsimile(this),
    m_SbVis(this)
{
}
REGISTER_DEFINITION(mei::Sb, "sb");
mei::Sb::~Sb() {}
mei::Sb::Sb(const Sb& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_SbVis(this)
{
}

/* include <sb> */

mei::Score::Score() :
    MeiElement("score"),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Score, "score");
mei::Score::~Score() {}
mei::Score::Score(const Score& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this)
{
}

/* include <score> */

mei::ScoreDef::ScoreDef() :
    MeiElement("scoreDef"),
    m_Common(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeySigDefaultLog(this),
    m_MeterSigDefaultLog(this),
    m_Octavedefault(this),
    m_Transposition(this),
    m_ScoreDefVis(this),
    m_Barplacement(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Textstyle(this),
    m_ScoreDefGes(this),
    m_Mmtempo(this)
{
}
REGISTER_DEFINITION(mei::ScoreDef, "scoreDef");
mei::ScoreDef::~ScoreDef() {}
mei::ScoreDef::ScoreDef(const ScoreDef& other) :
    MeiElement(other),
    m_Common(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeySigDefaultLog(this),
    m_MeterSigDefaultLog(this),
    m_Octavedefault(this),
    m_Transposition(this),
    m_ScoreDefVis(this),
    m_Barplacement(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Textstyle(this),
    m_ScoreDefGes(this),
    m_Mmtempo(this)
{
}

/* include <scoreDef> */

mei::Section::Section() :
    MeiElement("section"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Pointing(this),
    m_SectionVis(this)
{
}
REGISTER_DEFINITION(mei::Section, "section");
mei::Section::~Section() {}
mei::Section::Section(const Section& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Pointing(this),
    m_SectionVis(this)
{
}

/* include <section> */

mei::Series::Series() :
    MeiElement("series"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Series, "series");
mei::Series::~Series() {}
mei::Series::Series(const Series& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <series> */

mei::Space::Space() :
    MeiElement("space"),
    m_Common(this),
    m_Facsimile(this),
    m_Augmentdots(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Tupletpresent(this),
    m_SpaceVis(this),
    m_DurationPerformed(this)
{
}
REGISTER_DEFINITION(mei::Space, "space");
mei::Space::~Space() {}
mei::Space::Space(const Space& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Augmentdots(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Tupletpresent(this),
    m_SpaceVis(this),
    m_DurationPerformed(this)
{
}

/* include <space> */

mei::Sponsor::Sponsor() :
    MeiElement("sponsor"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Sponsor, "sponsor");
mei::Sponsor::~Sponsor() {}
mei::Sponsor::Sponsor(const Sponsor& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <sponsor> */

mei::Stack::Stack() :
    MeiElement("stack"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Stack, "stack");
mei::Stack::~Stack() {}
mei::Stack::Stack(const Stack& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Stack::getDelim() {
    if (!hasAttribute("delim")) {
        throw AttributeNotFoundException("delim");
    }
    return getAttribute("delim");
};

void mei::Stack::setDelim(std::string _delim) {
    MeiAttribute *a = new MeiAttribute("delim", _delim);
    addAttribute(a);
};

bool mei::Stack::hasDelim() {
    return hasAttribute("delim");
};

void mei::Stack::removeDelim() {
    removeAttribute("delim");
};
MeiAttribute* mei::Stack::getAlign() {
    if (!hasAttribute("align")) {
        throw AttributeNotFoundException("align");
    }
    return getAttribute("align");
};

void mei::Stack::setAlign(std::string _align) {
    MeiAttribute *a = new MeiAttribute("align", _align);
    addAttribute(a);
};

bool mei::Stack::hasAlign() {
    return hasAttribute("align");
};

void mei::Stack::removeAlign() {
    removeAttribute("align");
};
/* include <stack> */

mei::Staff::Staff() :
    MeiElement("staff"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_StaffLog(this),
    m_Meterconformance(this),
    m_Visibility(this)
{
}
REGISTER_DEFINITION(mei::Staff, "staff");
mei::Staff::~Staff() {}
mei::Staff::Staff(const Staff& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_StaffLog(this),
    m_Meterconformance(this),
    m_Visibility(this)
{
}

/* include <staff> */

mei::StaffDef::StaffDef() :
    MeiElement("staffDef"),
    m_Common(this),
    m_Declaring(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeySigDefaultLog(this),
    m_MeterSigDefaultLog(this),
    m_Octavedefault(this),
    m_Transposition(this),
    m_StaffDefVis(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_LabelsAddl(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Scalable(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_Instrumentident(this)
{
}
REGISTER_DEFINITION(mei::StaffDef, "staffDef");
mei::StaffDef::~StaffDef() {}
mei::StaffDef::StaffDef(const StaffDef& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeySigDefaultLog(this),
    m_MeterSigDefaultLog(this),
    m_Octavedefault(this),
    m_Transposition(this),
    m_StaffDefVis(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_LabelsAddl(this),
    m_Lyricstyle(this),
    m_MeterSigDefaultVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Scalable(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_Instrumentident(this)
{
}

/* include <staffDef> */

mei::StaffGrp::StaffGrp() :
    MeiElement("staffGrp"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_StaffGrpVis(this),
    m_LabelsAddl(this),
    m_Staffgroupingsym(this),
    m_Visibility(this),
    m_Instrumentident(this)
{
}
REGISTER_DEFINITION(mei::StaffGrp, "staffGrp");
mei::StaffGrp::~StaffGrp() {}
mei::StaffGrp::StaffGrp(const StaffGrp& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_StaffGrpVis(this),
    m_LabelsAddl(this),
    m_Staffgroupingsym(this),
    m_Visibility(this),
    m_Instrumentident(this)
{
}

/* include <staffGrp> */

mei::Syl::Syl() :
    MeiElement("syl"),
    m_Common(this),
    m_Facsimile(this),
    m_SylLog(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Horizontalalign(this)
{
}
REGISTER_DEFINITION(mei::Syl, "syl");
mei::Syl::~Syl() {}
mei::Syl::Syl(const Syl& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_SylLog(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Horizontalalign(this)
{
}

/* include <syl> */

mei::Tempo::Tempo() :
    MeiElement("tempo"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startid(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_Mmtempo(this)
{
}
REGISTER_DEFINITION(mei::Tempo, "tempo");
mei::Tempo::~Tempo() {}
mei::Tempo::Tempo(const Tempo& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startid(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_Mmtempo(this)
{
}

/* include <tempo> */

mei::TextLang::TextLang() :
    MeiElement("textLang"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::TextLang, "textLang");
mei::TextLang::~TextLang() {}
mei::TextLang::TextLang(const TextLang& other) :
    MeiElement(other),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

MeiAttribute* mei::TextLang::getMainLang() {
    if (!hasAttribute("mainLang")) {
        throw AttributeNotFoundException("mainLang");
    }
    return getAttribute("mainLang");
};

void mei::TextLang::setMainLang(std::string _mainLang) {
    MeiAttribute *a = new MeiAttribute("mainLang", _mainLang);
    addAttribute(a);
};

bool mei::TextLang::hasMainLang() {
    return hasAttribute("mainLang");
};

void mei::TextLang::removeMainLang() {
    removeAttribute("mainLang");
};
MeiAttribute* mei::TextLang::getOtherLangs() {
    if (!hasAttribute("otherLangs")) {
        throw AttributeNotFoundException("otherLangs");
    }
    return getAttribute("otherLangs");
};

void mei::TextLang::setOtherLangs(std::string _otherLangs) {
    MeiAttribute *a = new MeiAttribute("otherLangs", _otherLangs);
    addAttribute(a);
};

bool mei::TextLang::hasOtherLangs() {
    return hasAttribute("otherLangs");
};

void mei::TextLang::removeOtherLangs() {
    removeAttribute("otherLangs");
};
/* include <textLang> */

mei::Title::Title() :
    MeiElement("title"),
    m_Common(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Title, "title");
mei::Title::~Title() {}
mei::Title::Title(const Title& other) :
    MeiElement(other),
    m_Common(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Title::getLevel() {
    if (!hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return getAttribute("level");
};

void mei::Title::setLevel(std::string _level) {
    MeiAttribute *a = new MeiAttribute("level", _level);
    addAttribute(a);
};

bool mei::Title::hasLevel() {
    return hasAttribute("level");
};

void mei::Title::removeLevel() {
    removeAttribute("level");
};
/* include <title> */

mei::TitlePage::TitlePage() :
    MeiElement("titlePage"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::TitlePage, "titlePage");
mei::TitlePage::~TitlePage() {}
mei::TitlePage::TitlePage(const TitlePage& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <titlePage> */



