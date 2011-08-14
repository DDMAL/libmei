#include "cmn.h"
using namespace std;

Arpeg::Arpeg() : m_Color(this), m_Common(this), m_Xy(this), m_Visualoffset(this), m_Controlevent(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("arpeg");
};
//REGISTER_DEFINITION(Arpeg, "arpeg");

string Arpeg::getOrderValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("order")) {
        throw AttributeNotFoundException("order");
    }
    return m_Base.getAttributeValue("order");
};
            
MeiAttribute* Arpeg::getOrder() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("order")) {
        throw AttributeNotFoundException("order");
    }
    return m_Base.getAttribute("order");
};
            
void Arpeg::setOrder(string _order) {
    if(!m_Base.hasAttribute("order")) {
        MeiAttribute * a = new MeiAttribute("order", _order);
        m_Base.addAttribute(a);
    }
};
            
bool Arpeg::hasOrder() {
    return m_Base.hasAttribute("order");
};
            
string Arpeg::getArrowValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("arrow")) {
        throw AttributeNotFoundException("arrow");
    }
    return m_Base.getAttributeValue("arrow");
};
            
MeiAttribute* Arpeg::getArrow() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("arrow")) {
        throw AttributeNotFoundException("arrow");
    }
    return m_Base.getAttribute("arrow");
};
            
void Arpeg::setArrow(string _arrow) {
    if(!m_Base.hasAttribute("arrow")) {
        MeiAttribute * a = new MeiAttribute("arrow", _arrow);
        m_Base.addAttribute(a);
    }
};
            
bool Arpeg::hasArrow() {
    return m_Base.hasAttribute("arrow");
};
            
Beam::Beam() : m_Common(this), m_Event(this), m_Beamedwith(this), m_Beamrend(this), m_TupletAnl(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("beam");
};
//REGISTER_DEFINITION(Beam, "beam");

BeamSpan::BeamSpan() : m_Common(this), m_DurationMusical(this), m_DurationPerformed(this), m_Startendid(this), 
m_Controlevent(this), m_Beamedwith(this), m_Beamrend(this), m_TupletAnl(this), m_TupletGes(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("beamSpan");
};
//REGISTER_DEFINITION(BeamSpan, "beamSpan");

BeatRpt::BeatRpt() : m_Altsym(this), m_Color(this), m_Common(this), m_Event(this), m_Expandable(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("beatRpt");
};
//REGISTER_DEFINITION(BeatRpt, "beatRpt");

string BeatRpt::getRendValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttributeValue("rend");
};
            
MeiAttribute* BeatRpt::getRend() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttribute("rend");
};
            
void BeatRpt::setRend(string _rend) {
    if(!m_Base.hasAttribute("rend")) {
        MeiAttribute * a = new MeiAttribute("rend", _rend);
        m_Base.addAttribute(a);
    }
};
            
bool BeatRpt::hasRend() {
    return m_Base.hasAttribute("rend");
};
            
Bend::Bend() : m_Color(this), m_Common(this), m_Curvature(this), m_Curverend(this), m_Xy(this), 
m_Xy2(this), m_Startendid(this), m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("bend");
};
//REGISTER_DEFINITION(Bend, "bend");

string Bend::getAmountValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("amount")) {
        throw AttributeNotFoundException("amount");
    }
    return m_Base.getAttributeValue("amount");
};
            
MeiAttribute* Bend::getAmount() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("amount")) {
        throw AttributeNotFoundException("amount");
    }
    return m_Base.getAttribute("amount");
};
            
void Bend::setAmount(string _amount) {
    if(!m_Base.hasAttribute("amount")) {
        MeiAttribute * a = new MeiAttribute("amount", _amount);
        m_Base.addAttribute(a);
    }
};
            
bool Bend::hasAmount() {
    return m_Base.hasAttribute("amount");
};
            
Breath::Breath() : m_Altsym(this), m_Color(this), m_Common(this), m_Placement(this), m_Xy(this), m_Startendid(this), 
m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("breath");
};
//REGISTER_DEFINITION(Breath, "breath");

BTrem::BTrem() : m_Common(this), m_Slashcount(this), m_Event(this), m_Numbered(this), m_Numberplacement(this), 
m_TupletAnl(this), m_TupletVis(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("bTrem");
};
//REGISTER_DEFINITION(BTrem, "bTrem");

string BTrem::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* BTrem::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void BTrem::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool BTrem::hasForm() {
    return m_Base.hasAttribute("form");
};
            
Fermata::Fermata() : m_Altsym(this), m_Color(this), m_Common(this), m_DurationPerformed(this), m_Placement(this), 
m_Xy(this), m_Startendid(this), m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), 
m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("fermata");
};
//REGISTER_DEFINITION(Fermata, "fermata");

string Fermata::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Fermata::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Fermata::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Fermata::hasForm() {
    return m_Base.hasAttribute("form");
};
            
string Fermata::getShapeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return m_Base.getAttributeValue("shape");
};
            
MeiAttribute* Fermata::getShape() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return m_Base.getAttribute("shape");
};
            
void Fermata::setShape(string _shape) {
    if(!m_Base.hasAttribute("shape")) {
        MeiAttribute * a = new MeiAttribute("shape", _shape);
        m_Base.addAttribute(a);
    }
};
            
bool Fermata::hasShape() {
    return m_Base.hasAttribute("shape");
};
            
FTrem::FTrem() : m_Common(this), m_Slashcount(this), m_Event(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("fTrem");
};
//REGISTER_DEFINITION(FTrem, "fTrem");

string FTrem::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* FTrem::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void FTrem::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool FTrem::hasForm() {
    return m_Base.hasAttribute("form");
};
            
Hairpin::Hairpin() : m_Color(this), m_Common(this), m_DurationPerformed(this), m_DurationTimestamp(this), 
m_Placement(this), m_Xy(this), m_Xy2(this), m_Startendid(this), m_Visualoffset2(this), 
m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), m_TupletGes(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("hairpin");
};
//REGISTER_DEFINITION(Hairpin, "hairpin");

string Hairpin::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Hairpin::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Hairpin::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Hairpin::hasForm() {
    return m_Base.hasAttribute("form");
};
            
string Hairpin::getOpeningValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("opening")) {
        throw AttributeNotFoundException("opening");
    }
    return m_Base.getAttributeValue("opening");
};
            
MeiAttribute* Hairpin::getOpening() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("opening")) {
        throw AttributeNotFoundException("opening");
    }
    return m_Base.getAttribute("opening");
};
            
void Hairpin::setOpening(string _opening) {
    if(!m_Base.hasAttribute("opening")) {
        MeiAttribute * a = new MeiAttribute("opening", _opening);
        m_Base.addAttribute(a);
    }
};
            
bool Hairpin::hasOpening() {
    return m_Base.hasAttribute("opening");
};
            
HarpPedal::HarpPedal() : m_Color(this), m_Common(this), m_DurationPerformed(this), m_Placement(this), m_Xy(this), 
m_Startendid(this), m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), 
m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("harpPedal");
};
//REGISTER_DEFINITION(HarpPedal, "harpPedal");

string HarpPedal::getCValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("c")) {
        throw AttributeNotFoundException("c");
    }
    return m_Base.getAttributeValue("c");
};
            
MeiAttribute* HarpPedal::getC() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("c")) {
        throw AttributeNotFoundException("c");
    }
    return m_Base.getAttribute("c");
};
            
void HarpPedal::setC(string _c) {
    if(!m_Base.hasAttribute("c")) {
        MeiAttribute * a = new MeiAttribute("c", _c);
        m_Base.addAttribute(a);
    }
};
            
bool HarpPedal::hasC() {
    return m_Base.hasAttribute("c");
};
            
string HarpPedal::getDValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("d")) {
        throw AttributeNotFoundException("d");
    }
    return m_Base.getAttributeValue("d");
};
            
MeiAttribute* HarpPedal::getD() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("d")) {
        throw AttributeNotFoundException("d");
    }
    return m_Base.getAttribute("d");
};
            
void HarpPedal::setD(string _d) {
    if(!m_Base.hasAttribute("d")) {
        MeiAttribute * a = new MeiAttribute("d", _d);
        m_Base.addAttribute(a);
    }
};
            
bool HarpPedal::hasD() {
    return m_Base.hasAttribute("d");
};
            
string HarpPedal::getEValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("e")) {
        throw AttributeNotFoundException("e");
    }
    return m_Base.getAttributeValue("e");
};
            
MeiAttribute* HarpPedal::getE() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("e")) {
        throw AttributeNotFoundException("e");
    }
    return m_Base.getAttribute("e");
};
            
void HarpPedal::setE(string _e) {
    if(!m_Base.hasAttribute("e")) {
        MeiAttribute * a = new MeiAttribute("e", _e);
        m_Base.addAttribute(a);
    }
};
            
bool HarpPedal::hasE() {
    return m_Base.hasAttribute("e");
};
            
string HarpPedal::getFValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("f")) {
        throw AttributeNotFoundException("f");
    }
    return m_Base.getAttributeValue("f");
};
            
MeiAttribute* HarpPedal::getF() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("f")) {
        throw AttributeNotFoundException("f");
    }
    return m_Base.getAttribute("f");
};
            
void HarpPedal::setF(string _f) {
    if(!m_Base.hasAttribute("f")) {
        MeiAttribute * a = new MeiAttribute("f", _f);
        m_Base.addAttribute(a);
    }
};
            
bool HarpPedal::hasF() {
    return m_Base.hasAttribute("f");
};
            
string HarpPedal::getGValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("g")) {
        throw AttributeNotFoundException("g");
    }
    return m_Base.getAttributeValue("g");
};
            
MeiAttribute* HarpPedal::getG() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("g")) {
        throw AttributeNotFoundException("g");
    }
    return m_Base.getAttribute("g");
};
            
void HarpPedal::setG(string _g) {
    if(!m_Base.hasAttribute("g")) {
        MeiAttribute * a = new MeiAttribute("g", _g);
        m_Base.addAttribute(a);
    }
};
            
bool HarpPedal::hasG() {
    return m_Base.hasAttribute("g");
};
            
string HarpPedal::getAValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("a")) {
        throw AttributeNotFoundException("a");
    }
    return m_Base.getAttributeValue("a");
};
            
MeiAttribute* HarpPedal::getA() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("a")) {
        throw AttributeNotFoundException("a");
    }
    return m_Base.getAttribute("a");
};
            
void HarpPedal::setA(string _a) {
    if(!m_Base.hasAttribute("a")) {
        MeiAttribute * a = new MeiAttribute("a", _a);
        m_Base.addAttribute(a);
    }
};
            
bool HarpPedal::hasA() {
    return m_Base.hasAttribute("a");
};
            
string HarpPedal::getBValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("b")) {
        throw AttributeNotFoundException("b");
    }
    return m_Base.getAttributeValue("b");
};
            
MeiAttribute* HarpPedal::getB() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("b")) {
        throw AttributeNotFoundException("b");
    }
    return m_Base.getAttribute("b");
};
            
void HarpPedal::setB(string _b) {
    if(!m_Base.hasAttribute("b")) {
        MeiAttribute * a = new MeiAttribute("b", _b);
        m_Base.addAttribute(a);
    }
};
            
bool HarpPedal::hasB() {
    return m_Base.hasAttribute("b");
};
            
Gliss::Gliss() : m_Color(this), m_Common(this), m_Linerend(this), m_Xy(this), m_Xy2(this), m_Startendid(this), 
m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("gliss");
};
//REGISTER_DEFINITION(Gliss, "gliss");

string Gliss::getTextValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("text")) {
        throw AttributeNotFoundException("text");
    }
    return m_Base.getAttributeValue("text");
};
            
MeiAttribute* Gliss::getText() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("text")) {
        throw AttributeNotFoundException("text");
    }
    return m_Base.getAttribute("text");
};
            
void Gliss::setText(string _text) {
    if(!m_Base.hasAttribute("text")) {
        MeiAttribute * a = new MeiAttribute("text", _text);
        m_Base.addAttribute(a);
    }
};
            
bool Gliss::hasText() {
    return m_Base.hasAttribute("text");
};
            
HalfmRpt::HalfmRpt() : m_Altsym(this), m_Color(this), m_Common(this), m_DurationMusical(this), m_Visualoffset(this), 
m_Event(this), m_Expandable(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), 
m_Facsimile(this){
    m_Base.setName("halfmRpt");
};
//REGISTER_DEFINITION(HalfmRpt, "halfmRpt");

Measure::Measure() : m_Barplacement(this), m_Common(this), m_Declaring(this), m_Joined(this), m_LinkCommon(this), 
m_LinkExternal(this), m_Measurement(this), m_Width(this), m_MeterconformanceBar(this), 
m_TimestampPerformed(this), m_Typed(this), m_LinkInternal(this), m_Event(this), 
m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("measure");
};
//REGISTER_DEFINITION(Measure, "measure");

string Measure::getLeftValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("left")) {
        throw AttributeNotFoundException("left");
    }
    return m_Base.getAttributeValue("left");
};
            
MeiAttribute* Measure::getLeft() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("left")) {
        throw AttributeNotFoundException("left");
    }
    return m_Base.getAttribute("left");
};
            
void Measure::setLeft(string _left) {
    if(!m_Base.hasAttribute("left")) {
        MeiAttribute * a = new MeiAttribute("left", _left);
        m_Base.addAttribute(a);
    }
};
            
bool Measure::hasLeft() {
    return m_Base.hasAttribute("left");
};
            
string Measure::getRightValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("right")) {
        throw AttributeNotFoundException("right");
    }
    return m_Base.getAttributeValue("right");
};
            
MeiAttribute* Measure::getRight() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("right")) {
        throw AttributeNotFoundException("right");
    }
    return m_Base.getAttribute("right");
};
            
void Measure::setRight(string _right) {
    if(!m_Base.hasAttribute("right")) {
        MeiAttribute * a = new MeiAttribute("right", _right);
        m_Base.addAttribute(a);
    }
};
            
bool Measure::hasRight() {
    return m_Base.hasAttribute("right");
};
            
MRest::MRest() : m_Altsym(this), m_Common(this), m_DurationMusical(this), m_DurationPerformed(this), 
m_Fermatapresent(this), m_Instrumentident(this), m_Relativesize(this), m_Visibility(this), 
m_Xy(this), m_Visualoffset(this), m_Event(this), m_Cutout(this), m_TupletAnl(this), 
m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("mRest");
};
//REGISTER_DEFINITION(MRest, "mRest");

MRpt::MRpt() : m_Altsym(this), m_Color(this), m_Common(this), m_Event(this), m_Expandable(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("mRpt");
};
//REGISTER_DEFINITION(MRpt, "mRpt");

MRpt2::MRpt2() : m_Altsym(this), m_Color(this), m_Common(this), m_Event(this), m_Expandable(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("mRpt2");
};
//REGISTER_DEFINITION(MRpt2, "mRpt2");

MSpace::MSpace() : m_Altsym(this), m_Common(this), m_DurationMusical(this), m_DurationPerformed(this), 
m_Fermatapresent(this), m_Instrumentident(this), m_Visibility(this), m_Xy(this), 
m_Event(this), m_Cutout(this), m_TupletAnl(this), m_TupletGes(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("mSpace");
};
//REGISTER_DEFINITION(MSpace, "mSpace");

MultiRest::MultiRest() : m_Altsym(this), m_Common(this), m_DurationPerformed(this), m_Instrumentident(this), 
m_Event(this), m_Numbered(this), m_TupletAnl(this), m_TupletGes(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("multiRest");
};
//REGISTER_DEFINITION(MultiRest, "multiRest");

string MultiRest::getBlockValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("block")) {
        throw AttributeNotFoundException("block");
    }
    return m_Base.getAttributeValue("block");
};
            
MeiAttribute* MultiRest::getBlock() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("block")) {
        throw AttributeNotFoundException("block");
    }
    return m_Base.getAttribute("block");
};
            
void MultiRest::setBlock(string _block) {
    if(!m_Base.hasAttribute("block")) {
        MeiAttribute * a = new MeiAttribute("block", _block);
        m_Base.addAttribute(a);
    }
};
            
bool MultiRest::hasBlock() {
    return m_Base.hasAttribute("block");
};
            
MultiRpt::MultiRpt() : m_Altsym(this), m_Common(this), m_Event(this), m_Expandable(this), m_Numbered(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("multiRpt");
};
//REGISTER_DEFINITION(MultiRpt, "multiRpt");

Octave::Octave() : m_Common(this), m_DurationPerformed(this), m_DurationTimestamp(this), m_Linerend(this), 
m_Octavedisplacement(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), 
m_Startendid(this), m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), 
m_TupletAnl(this), m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("octave");
};
//REGISTER_DEFINITION(Octave, "octave");

string Octave::getCollValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("coll")) {
        throw AttributeNotFoundException("coll");
    }
    return m_Base.getAttributeValue("coll");
};
            
MeiAttribute* Octave::getColl() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("coll")) {
        throw AttributeNotFoundException("coll");
    }
    return m_Base.getAttribute("coll");
};
            
void Octave::setColl(string _coll) {
    if(!m_Base.hasAttribute("coll")) {
        MeiAttribute * a = new MeiAttribute("coll", _coll);
        m_Base.addAttribute(a);
    }
};
            
bool Octave::hasColl() {
    return m_Base.hasAttribute("coll");
};
            
Ossia::Ossia() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("ossia");
};
//REGISTER_DEFINITION(Ossia, "ossia");

Pedal::Pedal() : m_Color(this), m_Common(this), m_Placement(this), m_Xy(this), m_Startendid(this), 
m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("pedal");
};
//REGISTER_DEFINITION(Pedal, "pedal");

string Pedal::getDirValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("dir")) {
        throw AttributeNotFoundException("dir");
    }
    return m_Base.getAttributeValue("dir");
};
            
MeiAttribute* Pedal::getDir() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("dir")) {
        throw AttributeNotFoundException("dir");
    }
    return m_Base.getAttribute("dir");
};
            
void Pedal::setDir(string _dir) {
    if(!m_Base.hasAttribute("dir")) {
        MeiAttribute * a = new MeiAttribute("dir", _dir);
        m_Base.addAttribute(a);
    }
};
            
bool Pedal::hasDir() {
    return m_Base.hasAttribute("dir");
};
            
string Pedal::getStyleValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("style")) {
        throw AttributeNotFoundException("style");
    }
    return m_Base.getAttributeValue("style");
};
            
MeiAttribute* Pedal::getStyle() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("style")) {
        throw AttributeNotFoundException("style");
    }
    return m_Base.getAttribute("style");
};
            
void Pedal::setStyle(string _style) {
    if(!m_Base.hasAttribute("style")) {
        MeiAttribute * a = new MeiAttribute("style", _style);
        m_Base.addAttribute(a);
    }
};
            
bool Pedal::hasStyle() {
    return m_Base.hasAttribute("style");
};
            
Reh::Reh() : m_Color(this), m_Common(this), m_Placement(this), m_Staffident(this), m_Startid(this), 
m_TimestampMusical(this), m_TimestampPerformed(this), m_Typography(this), m_Xy(this), 
m_Startendid(this), m_Visualoffset(this), m_Event(this), m_Controlevent(this), m_TupletAnl(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this), m_MidiEvent(this){
    m_Base.setName("reh");
};
//REGISTER_DEFINITION(Reh, "reh");

Slur::Slur() : m_Color(this), m_Common(this), m_Curvature(this), m_Curverend(this), m_DurationPerformed(this), 
m_DurationTimestamp(this), m_Joined(this), m_Typed(this), m_Xy(this), m_Xy2(this), 
m_Startendid(this), m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), 
m_TupletAnl(this), m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("slur");
};
//REGISTER_DEFINITION(Slur, "slur");

Tie::Tie() : m_Color(this), m_Common(this), m_Curvature(this), m_Curverend(this), m_DurationTimestamp(this), 
m_Typed(this), m_Xy(this), m_Xy2(this), m_Startendid(this), m_Visualoffset2(this), 
m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("tie");
};
//REGISTER_DEFINITION(Tie, "tie");

Tuplet::Tuplet() : m_Augmentdots(this), m_Common(this), m_DurationRatio(this), m_Startendid(this), 
m_Event(this), m_Beamedwith(this), m_TupletAnl(this), m_TupletGes(this), m_TupletVis(this), 
m_MensurLog(this), m_MensurationLog(this), m_Facsimile(this){
    m_Base.setName("tuplet");
};
//REGISTER_DEFINITION(Tuplet, "tuplet");

string Tuplet::getDurValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return m_Base.getAttributeValue("dur");
};
            
MeiAttribute* Tuplet::getDur() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return m_Base.getAttribute("dur");
};
            
void Tuplet::setDur(string _dur) {
    if(!m_Base.hasAttribute("dur")) {
        MeiAttribute * a = new MeiAttribute("dur", _dur);
        m_Base.addAttribute(a);
    }
};
            
bool Tuplet::hasDur() {
    return m_Base.hasAttribute("dur");
};
            
TupletSpan::TupletSpan() : m_Augmentdots(this), m_Common(this), m_DurationRatio(this), m_Startendid(this), 
m_Controlevent(this), m_Beamedwith(this), m_TupletAnl(this), m_TupletGes(this), 
m_TupletVis(this), m_MensurLog(this), m_MensurationLog(this), m_Facsimile(this){
    m_Base.setName("tupletSpan");
};
//REGISTER_DEFINITION(TupletSpan, "tupletSpan");

string TupletSpan::getDurValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return m_Base.getAttributeValue("dur");
};
            
MeiAttribute* TupletSpan::getDur() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return m_Base.getAttribute("dur");
};
            
void TupletSpan::setDur(string _dur) {
    if(!m_Base.hasAttribute("dur")) {
        MeiAttribute * a = new MeiAttribute("dur", _dur);
        m_Base.addAttribute(a);
    }
};
            
bool TupletSpan::hasDur() {
    return m_Base.hasAttribute("dur");
};
            