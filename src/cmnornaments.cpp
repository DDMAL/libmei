

#include "cmnornaments.h"
using std::string;


Mordent::Mordent() : m_Common(this), m_Facsimile(this), m_MordentLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_Ornamentaccid(this), m_Color(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("mordent");
};



Trill::Trill() : m_Common(this), m_Facsimile(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_Ornamentaccid(this), m_DurationTimestamp(this), m_Color(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("trill");
};



Turn::Turn() : m_Common(this), m_Facsimile(this), m_TurnLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Ornamentaccid(this), m_Startid(this), m_Color(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("turn");
};




