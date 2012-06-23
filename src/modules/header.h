/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter, and Others
    
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

#ifndef HEADER_H_
#define HEADER_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "headermixins.h"
#include "edittransmixins.h"
#include "critappmixins.h"
#include "facsimilemixins.h"
#include <string>


namespace mei {
/** \brief 
 */
class MEI_EXPORT AccessRestrict : public MeiElement {
    public:
        AccessRestrict();
        AccessRestrict(const AccessRestrict& other);
        virtual ~AccessRestrict();

/* include <accessRestrict> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(AccessRestrict);
};

/** \brief 
 */
class MEI_EXPORT AcqSource : public MeiElement {
    public:
        AcqSource();
        AcqSource(const AcqSource& other);
        virtual ~AcqSource();

/* include <acqSource> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(AcqSource);
};

/** \brief 
 */
class MEI_EXPORT AltId : public MeiElement {
    public:
        AltId();
        AltId(const AltId& other);
        virtual ~AltId();

/* include <altId> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AltId);
};

/** \brief 
 */
class MEI_EXPORT AppInfo : public MeiElement {
    public:
        AppInfo();
        AppInfo(const AppInfo& other);
        virtual ~AppInfo();

/* include <appInfo> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(AppInfo);
};

/** \brief 
 */
class MEI_EXPORT Application : public MeiElement {
    public:
        Application();
        Application(const Application& other);
        virtual ~Application();
        /** \brief 
         */
        MeiAttribute* getVersion();
        void setVersion(std::string _version);
        bool hasVersion();
        void removeVersion();

/* include <application> */

        CommonMixIn    m_Common;
        DatableMixIn    m_Datable;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Application);
};

/** \brief 
 */
class MEI_EXPORT Availability : public MeiElement {
    public:
        Availability();
        Availability(const Availability& other);
        virtual ~Availability();

/* include <availability> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        DatapointingMixIn    m_Datapointing;

    private:
        REGISTER_DECLARATION(Availability);
};

/** \brief 
 */
class MEI_EXPORT Change : public MeiElement {
    public:
        Change();
        Change(const Change& other);
        virtual ~Change();

/* include <change> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Change);
};

/** \brief 
 */
class MEI_EXPORT ChangeDesc : public MeiElement {
    public:
        ChangeDesc();
        ChangeDesc(const ChangeDesc& other);
        virtual ~ChangeDesc();

/* include <changeDesc> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ChangeDesc);
};

/** \brief 
 */
class MEI_EXPORT ClassCode : public MeiElement {
    public:
        ClassCode();
        ClassCode(const ClassCode& other);
        virtual ~ClassCode();

/* include <classCode> */

        CommonMixIn    m_Common;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(ClassCode);
};

/** \brief 
 */
class MEI_EXPORT Classification : public MeiElement {
    public:
        Classification();
        Classification(const Classification& other);
        virtual ~Classification();

/* include <classification> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;

    private:
        REGISTER_DECLARATION(Classification);
};

/** \brief 
 */
class MEI_EXPORT Condition : public MeiElement {
    public:
        Condition();
        Condition(const Condition& other);
        virtual ~Condition();

/* include <condition> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Condition);
};

/** \brief 
 */
class MEI_EXPORT ContentItem : public MeiElement {
    public:
        ContentItem();
        ContentItem(const ContentItem& other);
        virtual ~ContentItem();

/* include <contentItem> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(ContentItem);
};

/** \brief 
 */
class MEI_EXPORT Contents : public MeiElement {
    public:
        Contents();
        Contents(const Contents& other);
        virtual ~Contents();

/* include <contents> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Contents);
};

/** \brief 
 */
class MEI_EXPORT Correction : public MeiElement {
    public:
        Correction();
        Correction(const Correction& other);
        virtual ~Correction();
        /** \brief 
         */
        MeiAttribute* getCorrlevel();
        void setCorrlevel(std::string _corrlevel);
        bool hasCorrlevel();
        void removeCorrlevel();

/* include <correction> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;
        RegularmethodMixIn    m_Regularmethod;

    private:
        REGISTER_DECLARATION(Correction);
};

/** \brief 
 */
class MEI_EXPORT Creation : public MeiElement {
    public:
        Creation();
        Creation(const Creation& other);
        virtual ~Creation();

/* include <creation> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Creation);
};

/** \brief 
 */
class MEI_EXPORT Dimensions : public MeiElement {
    public:
        Dimensions();
        Dimensions(const Dimensions& other);
        virtual ~Dimensions();

/* include <dimensions> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        MeasurementMixIn    m_Measurement;

    private:
        REGISTER_DECLARATION(Dimensions);
};

/** \brief 
 */
class MEI_EXPORT EditionStmt : public MeiElement {
    public:
        EditionStmt();
        EditionStmt(const EditionStmt& other);
        virtual ~EditionStmt();

/* include <editionStmt> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(EditionStmt);
};

/** \brief 
 */
class MEI_EXPORT EditorialDecl : public MeiElement {
    public:
        EditorialDecl();
        EditorialDecl(const EditorialDecl& other);
        virtual ~EditorialDecl();

/* include <editorialDecl> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(EditorialDecl);
};

/** \brief 
 */
class MEI_EXPORT EncodingDesc : public MeiElement {
    public:
        EncodingDesc();
        EncodingDesc(const EncodingDesc& other);
        virtual ~EncodingDesc();

/* include <encodingDesc> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(EncodingDesc);
};

/** \brief 
 */
class MEI_EXPORT Ensemble : public MeiElement {
    public:
        Ensemble();
        Ensemble(const Ensemble& other);
        virtual ~Ensemble();

/* include <ensemble> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Ensemble);
};

/** \brief 
 */
class MEI_EXPORT Event : public MeiElement {
    public:
        Event();
        Event(const Event& other);
        virtual ~Event();
        /** \brief 
         */
        MeiAttribute* getReg();
        void setReg(std::string _reg);
        bool hasReg();
        void removeReg();

/* include <event> */

        BiblMixIn    m_Bibl;
        CalendaredMixIn    m_Calendared;
        CommonMixIn    m_Common;
        DatableMixIn    m_Datable;
        EditMixIn    m_Edit;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Event);
};

/** \brief 
 */
class MEI_EXPORT EventList : public MeiElement {
    public:
        EventList();
        EventList(const EventList& other);
        virtual ~EventList();

/* include <eventList> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(EventList);
};

/** \brief 
 */
class MEI_EXPORT ExhibHist : public MeiElement {
    public:
        ExhibHist();
        ExhibHist(const ExhibHist& other);
        virtual ~ExhibHist();

/* include <exhibHist> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ExhibHist);
};

/** \brief 
 */
class MEI_EXPORT Extent : public MeiElement {
    public:
        Extent();
        Extent(const Extent& other);
        virtual ~Extent();

/* include <extent> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        MeasurementMixIn    m_Measurement;

    private:
        REGISTER_DECLARATION(Extent);
};

/** \brief 
 */
class MEI_EXPORT FileDesc : public MeiElement {
    public:
        FileDesc();
        FileDesc(const FileDesc& other);
        virtual ~FileDesc();

/* include <fileDesc> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(FileDesc);
};

/** \brief 
 */
class MEI_EXPORT Fingerprint : public MeiElement {
    public:
        Fingerprint();
        Fingerprint(const Fingerprint& other);
        virtual ~Fingerprint();

/* include <fingerprint> */

        CommonMixIn    m_Common;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Fingerprint);
};

/** \brief 
 */
class MEI_EXPORT Hand : public MeiElement {
    public:
        Hand();
        Hand(const Hand& other);
        virtual ~Hand();
        /** \brief 
         */
        MeiAttribute* getInitial();
        void setInitial(std::string _initial);
        bool hasInitial();
        void removeInitial();

/* include <hand> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        MediumMixIn    m_Medium;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Hand);
};

/** \brief 
 */
class MEI_EXPORT HandList : public MeiElement {
    public:
        HandList();
        HandList(const HandList& other);
        virtual ~HandList();

/* include <handList> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(HandList);
};

/** \brief 
 */
class MEI_EXPORT History : public MeiElement {
    public:
        History();
        History(const History& other);
        virtual ~History();

/* include <history> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(History);
};

/** \brief 
 */
class MEI_EXPORT IncipCode : public MeiElement {
    public:
        IncipCode();
        IncipCode(const IncipCode& other);
        virtual ~IncipCode();
        /** \brief 
         */
        MeiAttribute* getSpace();
        void setSpace(std::string _space);
        bool hasSpace();
        void removeSpace();
        /** \brief 
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <incipCode> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        InternetmediaMixIn    m_Internetmedia;

    private:
        REGISTER_DECLARATION(IncipCode);
};

/** \brief 
 */
class MEI_EXPORT IncipText : public MeiElement {
    public:
        IncipText();
        IncipText(const IncipText& other);
        virtual ~IncipText();

/* include <incipText> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        PointingMixIn    m_Pointing;
        InternetmediaMixIn    m_Internetmedia;

    private:
        REGISTER_DECLARATION(IncipText);
};

/** \brief 
 */
class MEI_EXPORT Inscription : public MeiElement {
    public:
        Inscription();
        Inscription(const Inscription& other);
        virtual ~Inscription();

/* include <inscription> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Inscription);
};

/** \brief 
 */
class MEI_EXPORT InstrVoice : public MeiElement {
    public:
        InstrVoice();
        InstrVoice(const InstrVoice& other);
        virtual ~InstrVoice();
        /** \brief 
         */
        MeiAttribute* getCount();
        void setCount(std::string _count);
        bool hasCount();
        void removeCount();
        /** \brief 
         */
        MeiAttribute* getSolo();
        void setSolo(std::string _solo);
        bool hasSolo();
        void removeSolo();

/* include <instrVoice> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        AuthorizedMixIn    m_Authorized;
        RegularizedMixIn    m_Regularized;

    private:
        REGISTER_DECLARATION(InstrVoice);
};

/** \brief 
 */
class MEI_EXPORT Interpretation : public MeiElement {
    public:
        Interpretation();
        Interpretation(const Interpretation& other);
        virtual ~Interpretation();

/* include <interpretation> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Interpretation);
};

/** \brief 
 */
class MEI_EXPORT Key : public MeiElement {
    public:
        Key();
        Key(const Key& other);
        virtual ~Key();
        /** \brief 
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <key> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        AccidentalMixIn    m_Accidental;
        PitchMixIn    m_Pitch;

    private:
        REGISTER_DECLARATION(Key);
};

/** \brief 
 */
class MEI_EXPORT LangUsage : public MeiElement {
    public:
        LangUsage();
        LangUsage(const LangUsage& other);
        virtual ~LangUsage();

/* include <langUsage> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;

    private:
        REGISTER_DECLARATION(LangUsage);
};

/** \brief 
 */
class MEI_EXPORT Language : public MeiElement {
    public:
        Language();
        Language(const Language& other);
        virtual ~Language();

/* include <language> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        AuthorizedMixIn    m_Authorized;

    private:
        REGISTER_DECLARATION(Language);
};

/** \brief 
 */
class MEI_EXPORT MeiHead : public MeiElement {
    public:
        MeiHead();
        MeiHead(const MeiHead& other);
        virtual ~MeiHead();
        /** \brief 
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <meiHead> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        LangMixIn    m_Lang;
        MeiversionMixIn    m_Meiversion;

    private:
        REGISTER_DECLARATION(MeiHead);
};

/** \brief 
 */
class MEI_EXPORT Meter : public MeiElement {
    public:
        Meter();
        Meter(const Meter& other);
        virtual ~Meter();

/* include <meter> */

        MetersLogMixIn    m_MetersLog;
        MetersVisMixIn    m_MetersVis;

    private:
        REGISTER_DECLARATION(Meter);
};

/** \brief 
 */
class MEI_EXPORT Normalization : public MeiElement {
    public:
        Normalization();
        Normalization(const Normalization& other);
        virtual ~Normalization();

/* include <normalization> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;
        RegularmethodMixIn    m_Regularmethod;

    private:
        REGISTER_DECLARATION(Normalization);
};

/** \brief 
 */
class MEI_EXPORT NotesStmt : public MeiElement {
    public:
        NotesStmt();
        NotesStmt(const NotesStmt& other);
        virtual ~NotesStmt();

/* include <notesStmt> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(NotesStmt);
};

/** \brief 
 */
class MEI_EXPORT PerfMedium : public MeiElement {
    public:
        PerfMedium();
        PerfMedium(const PerfMedium& other);
        virtual ~PerfMedium();

/* include <perfMedium> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        AuthorizedMixIn    m_Authorized;

    private:
        REGISTER_DECLARATION(PerfMedium);
};

/** \brief 
 */
class MEI_EXPORT Performer : public MeiElement {
    public:
        Performer();
        Performer(const Performer& other);
        virtual ~Performer();

/* include <performer> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Performer);
};

/** \brief 
 */
class MEI_EXPORT PhysDesc : public MeiElement {
    public:
        PhysDesc();
        PhysDesc(const PhysDesc& other);
        virtual ~PhysDesc();

/* include <physDesc> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(PhysDesc);
};

/** \brief 
 */
class MEI_EXPORT PhysLoc : public MeiElement {
    public:
        PhysLoc();
        PhysLoc(const PhysLoc& other);
        virtual ~PhysLoc();

/* include <physLoc> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(PhysLoc);
};

/** \brief 
 */
class MEI_EXPORT PhysMedium : public MeiElement {
    public:
        PhysMedium();
        PhysMedium(const PhysMedium& other);
        virtual ~PhysMedium();

/* include <physMedium> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        AuthorizedMixIn    m_Authorized;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PhysMedium);
};

/** \brief 
 */
class MEI_EXPORT PlateNum : public MeiElement {
    public:
        PlateNum();
        PlateNum(const PlateNum& other);
        virtual ~PlateNum();

/* include <plateNum> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(PlateNum);
};

/** \brief 
 */
class MEI_EXPORT Price : public MeiElement {
    public:
        Price();
        Price(const Price& other);
        virtual ~Price();

/* include <price> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        MeasurementMixIn    m_Measurement;

    private:
        REGISTER_DECLARATION(Price);
};

/** \brief 
 */
class MEI_EXPORT ProjectDesc : public MeiElement {
    public:
        ProjectDesc();
        ProjectDesc(const ProjectDesc& other);
        virtual ~ProjectDesc();

/* include <projectDesc> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ProjectDesc);
};

/** \brief 
 */
class MEI_EXPORT Provenance : public MeiElement {
    public:
        Provenance();
        Provenance(const Provenance& other);
        virtual ~Provenance();

/* include <provenance> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Provenance);
};

/** \brief 
 */
class MEI_EXPORT PubStmt : public MeiElement {
    public:
        PubStmt();
        PubStmt(const PubStmt& other);
        virtual ~PubStmt();

/* include <pubStmt> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(PubStmt);
};

/** \brief 
 */
class MEI_EXPORT RelatedItem : public MeiElement {
    public:
        RelatedItem();
        RelatedItem(const RelatedItem& other);
        virtual ~RelatedItem();
        /** \brief 
         */
        MeiAttribute* getRel();
        void setRel(std::string _rel);
        bool hasRel();
        void removeRel();

/* include <relatedItem> */

        DatapointingMixIn    m_Datapointing;
        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(RelatedItem);
};

/** \brief 
 */
class MEI_EXPORT Resp : public MeiElement {
    public:
        Resp();
        Resp(const Resp& other);
        virtual ~Resp();

/* include <resp> */

        AuthorizedMixIn    m_Authorized;

    private:
        REGISTER_DECLARATION(Resp);
};

/** \brief 
 */
class MEI_EXPORT RespStmt : public MeiElement {
    public:
        RespStmt();
        RespStmt(const RespStmt& other);
        virtual ~RespStmt();

/* include <respStmt> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(RespStmt);
};

/** \brief 
 */
class MEI_EXPORT RevisionDesc : public MeiElement {
    public:
        RevisionDesc();
        RevisionDesc(const RevisionDesc& other);
        virtual ~RevisionDesc();

/* include <revisionDesc> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(RevisionDesc);
};

/** \brief 
 */
class MEI_EXPORT SamplingDecl : public MeiElement {
    public:
        SamplingDecl();
        SamplingDecl(const SamplingDecl& other);
        virtual ~SamplingDecl();

/* include <samplingDecl> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(SamplingDecl);
};

/** \brief 
 */
class MEI_EXPORT Segmentation : public MeiElement {
    public:
        Segmentation();
        Segmentation(const Segmentation& other);
        virtual ~Segmentation();

/* include <segmentation> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Segmentation);
};

/** \brief 
 */
class MEI_EXPORT SeriesStmt : public MeiElement {
    public:
        SeriesStmt();
        SeriesStmt(const SeriesStmt& other);
        virtual ~SeriesStmt();

/* include <seriesStmt> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(SeriesStmt);
};

/** \brief 
 */
class MEI_EXPORT Source : public MeiElement {
    public:
        Source();
        Source(const Source& other);
        virtual ~Source();

/* include <source> */

        DatapointingMixIn    m_Datapointing;
        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Source);
};

/** \brief 
 */
class MEI_EXPORT SourceDesc : public MeiElement {
    public:
        SourceDesc();
        SourceDesc(const SourceDesc& other);
        virtual ~SourceDesc();

/* include <sourceDesc> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(SourceDesc);
};

/** \brief 
 */
class MEI_EXPORT StdVals : public MeiElement {
    public:
        StdVals();
        StdVals(const StdVals& other);
        virtual ~StdVals();

/* include <stdVals> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(StdVals);
};

/** \brief 
 */
class MEI_EXPORT SysReq : public MeiElement {
    public:
        SysReq();
        SysReq(const SysReq& other);
        virtual ~SysReq();

/* include <sysReq> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(SysReq);
};

/** \brief 
 */
class MEI_EXPORT Term : public MeiElement {
    public:
        Term();
        Term(const Term& other);
        virtual ~Term();
        /** \brief 
         */
        MeiAttribute* getClasscode();
        void setClasscode(std::string _classcode);
        bool hasClasscode();
        void removeClasscode();

/* include <term> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Term);
};

/** \brief 
 */
class MEI_EXPORT TermList : public MeiElement {
    public:
        TermList();
        TermList(const TermList& other);
        virtual ~TermList();
        /** \brief 
         */
        MeiAttribute* getClasscode();
        void setClasscode(std::string _classcode);
        bool hasClasscode();
        void removeClasscode();

/* include <termList> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(TermList);
};

/** \brief 
 */
class MEI_EXPORT TitleStmt : public MeiElement {
    public:
        TitleStmt();
        TitleStmt(const TitleStmt& other);
        virtual ~TitleStmt();

/* include <titleStmt> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(TitleStmt);
};

/** \brief 
 */
class MEI_EXPORT TreatHist : public MeiElement {
    public:
        TreatHist();
        TreatHist(const TreatHist& other);
        virtual ~TreatHist();

/* include <treatHist> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(TreatHist);
};

/** \brief 
 */
class MEI_EXPORT TreatSched : public MeiElement {
    public:
        TreatSched();
        TreatSched(const TreatSched& other);
        virtual ~TreatSched();

/* include <treatSched> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(TreatSched);
};

/** \brief 
 */
class MEI_EXPORT Unpub : public MeiElement {
    public:
        Unpub();
        Unpub(const Unpub& other);
        virtual ~Unpub();

/* include <unpub> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Unpub);
};

/** \brief 
 */
class MEI_EXPORT UseRestrict : public MeiElement {
    public:
        UseRestrict();
        UseRestrict(const UseRestrict& other);
        virtual ~UseRestrict();

/* include <useRestrict> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(UseRestrict);
};

/** \brief 
 */
class MEI_EXPORT Watermark : public MeiElement {
    public:
        Watermark();
        Watermark(const Watermark& other);
        virtual ~Watermark();

/* include <watermark> */

        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Watermark);
};

/** \brief 
 */
class MEI_EXPORT Work : public MeiElement {
    public:
        Work();
        Work(const Work& other);
        virtual ~Work();

/* include <work> */

        DatapointingMixIn    m_Datapointing;
        CommonMixIn    m_Common;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Work);
};

/** \brief 
 */
class MEI_EXPORT WorkDesc : public MeiElement {
    public:
        WorkDesc();
        WorkDesc(const WorkDesc& other);
        virtual ~WorkDesc();

/* include <workDesc> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(WorkDesc);
};
}
#endif  // HEADER_H_
