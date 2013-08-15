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

#ifndef SPOKEN_H_
#define SPOKEN_H_

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
/** \brief describes a broadcast used as the source of a spoken text.
 */
class MEI_EXPORT Broadcast : public MeiElement {
    public:
        Broadcast();
        Broadcast(const Broadcast& other);
        virtual ~Broadcast();

/* include <broadcast> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(Broadcast);
};

/** \brief provides technical details of the equipment and media used for an audio or video
 *  recording used as the source for a spoken text.
 */
class MEI_EXPORT Equipment : public MeiElement {
    public:
        Equipment();
        Equipment(const Equipment& other);
        virtual ~Equipment();

/* include <equipment> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(Equipment);
};

/** \brief marks any phenomenon or occurrence, not necessarily vocalized or communicative,
 *  for example incidental noises or other events affecting communication.
 */
class MEI_EXPORT Incident : public MeiElement {
    public:
        Incident();
        Incident(const Incident& other);
        virtual ~Incident();

/* include <incident> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TimedMixIn    m_Timed;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        TypedMixIn    m_Typed;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(Incident);
};

/** \brief marks any communicative phenomenon, not necessarily vocalized, for example a
 *  gesture, frown, etc.
 */
class MEI_EXPORT Kinesic : public MeiElement {
    public:
        Kinesic();
        Kinesic(const Kinesic& other);
        virtual ~Kinesic();
        /** \brief indicates whether or not the phenomenon is repeated.
         */
        MeiAttribute* getIterated();
        void setIterated(std::string _iterated);
        bool hasIterated();
        void removeIterated();

/* include <kinesic> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TimedMixIn    m_Timed;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        TypedMixIn    m_Typed;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(Kinesic);
};

/** \brief marks a pause either between or within utterances.
 */
class MEI_EXPORT Pause : public MeiElement {
    public:
        Pause();
        Pause(const Pause& other);
        virtual ~Pause();

/* include <pause> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TimedMixIn    m_Timed;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        TypedMixIn    m_Typed;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(Pause);
};

/** \brief provides details of an audio or video recording event used as the source of a
 *  spoken text, either directly or from a public broadcast.
 */
class MEI_EXPORT Recording : public MeiElement {
    public:
        Recording();
        Recording(const Recording& other);
        virtual ~Recording();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <recording> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;

    private:
        REGISTER_DECLARATION(Recording);
};

/** \brief describes a set of recordings used as the basis for transcription of a spoken
 *  text.
 */
class MEI_EXPORT RecordingStmt : public MeiElement {
    public:
        RecordingStmt();
        RecordingStmt(const RecordingStmt& other);
        virtual ~RecordingStmt();

/* include <recordingStmt> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(RecordingStmt);
};

/** \brief contains a citation giving details of the script used for a spoken text.
 */
class MEI_EXPORT ScriptStmt : public MeiElement {
    public:
        ScriptStmt();
        ScriptStmt(const ScriptStmt& other);
        virtual ~ScriptStmt();

/* include <scriptStmt> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(ScriptStmt);
};

/** \brief marks the point at which some paralinguistic feature of a series of utterances
 *  by any one speaker changes.
 */
class MEI_EXPORT Shift : public MeiElement {
    public:
        Shift();
        Shift(const Shift& other);
        virtual ~Shift();
        /** \brief a paralinguistic feature.
         */
        MeiAttribute* getFeature();
        void setFeature(std::string _feature);
        bool hasFeature();
        void removeFeature();
        /** \brief specifies the new state of the paralinguistic feature specified.
         */
        MeiAttribute* getNew();
        void setNew(std::string _new);
        bool hasNew();
        void removeNew();

/* include <shift> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(Shift);
};

/** \brief contains a stretch of speech usually preceded and followed by silence or by a
 *  change of speaker.
 */
class MEI_EXPORT U : public MeiElement {
    public:
        U();
        U(const U& other);
        virtual ~U();
        /** \brief indicates the nature of the transition between this utterance and the previous
         *  one.
         */
        MeiAttribute* getTrans();
        void setTrans(std::string _trans);
        bool hasTrans();
        void removeTrans();

/* include <u> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TimedMixIn    m_Timed;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        DeclaringMixIn    m_Declaring;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(U);
};

/** \brief marks any vocalized but not necessarily lexical phenomenon, for example voiced
 *  pauses, non-lexical backchannels, etc.
 */
class MEI_EXPORT Vocal : public MeiElement {
    public:
        Vocal();
        Vocal(const Vocal& other);
        virtual ~Vocal();
        /** \brief indicates whether or not the phenomenon is repeated.
         */
        MeiAttribute* getIterated();
        void setIterated(std::string _iterated);
        bool hasIterated();
        void removeIterated();

/* include <vocal> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TimedMixIn    m_Timed;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        AscribedMixIn    m_Ascribed;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Vocal);
};

/** \brief contains a passage of written text revealed to participants in the course of a
 *  spoken text.
 */
class MEI_EXPORT Writing : public MeiElement {
    public:
        Writing();
        Writing(const Writing& other);
        virtual ~Writing();
        /** \brief indicates whether the writing is revealed all at once or gradually.
         */
        MeiAttribute* getGradual();
        void setGradual(std::string _gradual);
        bool hasGradual();
        void removeGradual();

/* include <writing> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        AscribedMixIn    m_Ascribed;
        TypedMixIn    m_Typed;
        TimedMixIn    m_Timed;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(Writing);
};
}
#endif  // SPOKEN_H_
