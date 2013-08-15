/*
    Copyright (c) 2011-2013 Andrew Hankinson, Alastair Porter, and Others
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:
    
    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef DRAMA_H_
#define DRAMA_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include <string>


namespace mei {
/** \brief contains the name of an actor appearing within a cast list.
 */
class MEI_EXPORT Actor : public MeiElement {
    public:
        Actor();
        Actor(const Actor& other);
        virtual ~Actor();

/* include <actor> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Actor);
};

/** \brief describes a particular camera angle or viewpoint in a screen play.
 */
class MEI_EXPORT Camera : public MeiElement {
    public:
        Camera();
        Camera(const Camera& other);
        virtual ~Camera();

/* include <camera> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Camera);
};

/** \brief contains the text of a caption or other text displayed as part of a film script
 *  or screenplay.
 */
class MEI_EXPORT Caption : public MeiElement {
    public:
        Caption();
        Caption(const Caption& other);
        virtual ~Caption();

/* include <caption> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Caption);
};

/** \brief groups one or more individual castItem elements within a cast list.
 */
class MEI_EXPORT CastGroup : public MeiElement {
    public:
        CastGroup();
        CastGroup(const CastGroup& other);
        virtual ~CastGroup();

/* include <castGroup> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(CastGroup);
};

/** \brief contains a single entry within a cast list, describing either a single role or a
 *  list of non-speaking roles.
 */
class MEI_EXPORT CastItem : public MeiElement {
    public:
        CastItem();
        CastItem(const CastItem& other);
        virtual ~CastItem();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <castItem> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(CastItem);
};

/** \brief contains a single cast list or dramatis personae.
 */
class MEI_EXPORT CastList : public MeiElement {
    public:
        CastList();
        CastList(const CastList& other);
        virtual ~CastList();

/* include <castList> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(CastList);
};

/** \brief contains the epilogue to a drama, typically spoken by an actor out of character,
 *  possibly in association with a particular performance or venue.
 */
class MEI_EXPORT Epilogue : public MeiElement {
    public:
        Epilogue();
        Epilogue(const Epilogue& other);
        virtual ~Epilogue();

/* include <epilogue> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Epilogue);
};

/** \brief marks the actual entrance or exit of one or more characters on stage.
 */
class MEI_EXPORT Move : public MeiElement {
    public:
        Move();
        Move(const Move& other);
        virtual ~Move();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief specifies the direction of a stage movement.
         */
        MeiAttribute* getWhere();
        void setWhere(std::string _where);
        bool hasWhere();
        void removeWhere();
        /** \brief identifies the performance or performances in which this movement occurred as
         *  specified.
         */
        MeiAttribute* getPerf();
        void setPerf(std::string _perf);
        bool hasPerf();
        void removePerf();

/* include <move> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(Move);
};

/** \brief contains a section of front or back matter describing how a dramatic piece is to
 *  be performed in general or how it was performed on some specific occasion.
 */
class MEI_EXPORT Performance : public MeiElement {
    public:
        Performance();
        Performance(const Performance& other);
        virtual ~Performance();

/* include <performance> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Performance);
};

/** \brief contains the prologue to a drama, typically spoken by an actor out of character,
 *  possibly in association with a particular performance or venue.
 */
class MEI_EXPORT Prologue : public MeiElement {
    public:
        Prologue();
        Prologue(const Prologue& other);
        virtual ~Prologue();

/* include <prologue> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Prologue);
};

/** \brief contains the name of a dramatic role, as given in a cast list.
 */
class MEI_EXPORT Role : public MeiElement {
    public:
        Role();
        Role(const Role& other);
        virtual ~Role();

/* include <role> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Role);
};

/** \brief describes a character's role in a drama.
 */
class MEI_EXPORT RoleDesc : public MeiElement {
    public:
        RoleDesc();
        RoleDesc(const RoleDesc& other);
        virtual ~RoleDesc();

/* include <roleDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(RoleDesc);
};

/** \brief contains a description of the setting, time, locale, appearance, etc., of the
 *  action of a play, typically found in the front matter of a printed performance
 *  text (not a stage direction).
 */
class MEI_EXPORT Set : public MeiElement {
    public:
        Set();
        Set(const Set& other);
        virtual ~Set();

/* include <set> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Set);
};

/** \brief describes a sound effect or musical sequence specified within a screen play or
 *  radio script.
 */
class MEI_EXPORT Sound : public MeiElement {
    public:
        Sound();
        Sound(const Sound& other);
        virtual ~Sound();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief indicates whether the sound overlaps the surrounding speeches or interrupts
         *  them.
         */
        MeiAttribute* getDiscrete();
        void setDiscrete(std::string _discrete);
        bool hasDiscrete();
        void removeDiscrete();

/* include <sound> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Sound);
};

/** \brief contains a group of speeches or songs in a performance text presented in a
 *  source as constituting a single unit or
 */
class MEI_EXPORT SpGrp : public MeiElement {
    public:
        SpGrp();
        SpGrp(const SpGrp& other);
        virtual ~SpGrp();

/* include <spGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(SpGrp);
};

/** \brief describes a special-purpose stage direction that is not meant for the actors.
 */
class MEI_EXPORT Tech : public MeiElement {
    public:
        Tech();
        Tech(const Tech& other);
        virtual ~Tech();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief identifies the performance or performances in which this movement occurred as
         *  specified.
         */
        MeiAttribute* getPerf();
        void setPerf(std::string _perf);
        bool hasPerf();
        void removePerf();

/* include <tech> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Tech);
};

/** \brief describes the visual context of some part of a screen play in terms of what the
 *  spectator sees, generally independent of any dialogue.
 */
class MEI_EXPORT View : public MeiElement {
    public:
        View();
        View(const View& other);
        virtual ~View();

/* include <view> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(View);
};
}
#endif  // DRAMA_H_
