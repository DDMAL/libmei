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

#ifndef TRANSCR_H_
#define TRANSCR_H_

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
/** \brief marks the beginning of a longer sequence of text added by an author, scribe,
 *  annotator or corrector (see also
 */
class MEI_EXPORT AddSpan : public MeiElement {
    public:
        AddSpan();
        AddSpan(const AddSpan& other);
        virtual ~AddSpan();

/* include <addSpan> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        PlacementMixIn    m_Placement;
        TypedMixIn    m_Typed;
        SpanningMixIn    m_Spanning;

    private:
        REGISTER_DECLARATION(AddSpan);
};

/** \brief contains a sequence of letters or signs present in an abbreviation which are
 *  omitted or replaced in the expanded form of the abbreviation.
 */
class MEI_EXPORT Am : public MeiElement {
    public:
        Am();
        Am(const Am& other);
        virtual ~Am();

/* include <am> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Am);
};

/** \brief contains an area of damage to the text witness.
 */
class MEI_EXPORT Damage : public MeiElement {
    public:
        Damage();
        Damage(const Damage& other);
        virtual ~Damage();

/* include <damage> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DamagedMixIn    m_Damaged;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Damage);
};

/** \brief marks the beginning of a longer sequence of text which is damaged in some way
 *  but still legible.
 */
class MEI_EXPORT DamageSpan : public MeiElement {
    public:
        DamageSpan();
        DamageSpan(const DamageSpan& other);
        virtual ~DamageSpan();

/* include <damageSpan> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DamagedMixIn    m_Damaged;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        TypedMixIn    m_Typed;
        SpanningMixIn    m_Spanning;

    private:
        REGISTER_DECLARATION(DamageSpan);
};

/** \brief marks the beginning of a longer sequence of text deleted, marked as deleted, or
 *  otherwise signaled as superfluous or spurious by an author, scribe, annotator,
 *  or corrector.
 */
class MEI_EXPORT DelSpan : public MeiElement {
    public:
        DelSpan();
        DelSpan(const DelSpan& other);
        virtual ~DelSpan();

/* include <delSpan> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        SpanningMixIn    m_Spanning;

    private:
        REGISTER_DECLARATION(DelSpan);
};

/** \brief contains a sequence of letters added by an editor or transcriber when expanding
 *  an abbreviation.
 */
class MEI_EXPORT Ex : public MeiElement {
    public:
        Ex();
        Ex(const Ex& other);
        virtual ~Ex();

/* include <ex> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Ex);
};

/** \brief contains a representation of some written source in the form of a set of images
 *  rather than as transcribed or encoded text.
 */
class MEI_EXPORT Facsimile : public MeiElement {
    public:
        Facsimile();
        Facsimile(const Facsimile& other);
        virtual ~Facsimile();

/* include <facsimile> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Facsimile);
};

/** \brief contains a running head (e.g.
 * 
 *  a header, footer), catchword, or similar material appearing on the current page.
 */
class MEI_EXPORT Fw : public MeiElement {
    public:
        Fw();
        Fw(const Fw& other);
        virtual ~Fw();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <fw> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PlacementMixIn    m_Placement;

    private:
        REGISTER_DECLARATION(Fw);
};

/** \brief contains one or more
 */
class MEI_EXPORT HandNotes : public MeiElement {
    public:
        HandNotes();
        HandNotes(const HandNotes& other);
        virtual ~HandNotes();

/* include <handNotes> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(HandNotes);
};

/** \brief marks the beginning of a sequence of text written in a new hand, or the
 *  beginning of a scribal stint.
 */
class MEI_EXPORT HandShift : public MeiElement {
    public:
        HandShift();
        HandShift(const HandShift& other);
        virtual ~HandShift();
        /** \brief specifies the new state of the paralinguistic feature specified.
         */
        MeiAttribute* getNew();
        void setNew(std::string _new);
        bool hasNew();
        void removeNew();

/* include <handShift> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        HandFeaturesMixIn    m_HandFeatures;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(HandShift);
};

/** \brief contains the transcription of a topographic line in the source document
 */
class MEI_EXPORT Line : public MeiElement {
    public:
        Line();
        Line(const Line& other);
        virtual ~Line();

/* include <line> */

        TypedMixIn    m_Typed;
        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CoordinatedMixIn    m_Coordinated;

    private:
        REGISTER_DECLARATION(Line);
};

/** \brief supplies a list of transpositions, each of which is indicated at some point in a
 *  document typically by means of metamarks.
 */
class MEI_EXPORT ListTranspose : public MeiElement {
    public:
        ListTranspose();
        ListTranspose(const ListTranspose& other);
        virtual ~ListTranspose();

/* include <listTranspose> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(ListTranspose);
};

/** \brief contains or describes any kind of graphic or written signal within a document
 *  the function of which is to determine how it should be read rather than forming
 *  part of the actual content of the document.
 */
class MEI_EXPORT Metamark : public MeiElement {
    public:
        Metamark();
        Metamark(const Metamark& other);
        virtual ~Metamark();
        /** \brief characterizes the function of the segment.
         */
        MeiAttribute* getFunction();
        void setFunction(std::string _function);
        bool hasFunction();
        void removeFunction();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <metamark> */

        SpanningMixIn    m_Spanning;
        PlacementMixIn    m_Placement;
        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Metamark);
};

/** \brief represents any kind of modification identified within a single document.
 */
class MEI_EXPORT Mod : public MeiElement {
    public:
        Mod();
        Mod(const Mod& other);
        virtual ~Mod();

/* include <mod> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        SpanningMixIn    m_Spanning;

    private:
        REGISTER_DECLARATION(Mod);
};

/** \brief indicates one or more cancelled interventions in a document which have
 *  subsequently been marked as reaffirmed or repeated.
 */
class MEI_EXPORT Redo : public MeiElement {
    public:
        Redo();
        Redo(const Redo& other);
        virtual ~Redo();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <redo> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SpanningMixIn    m_Spanning;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Redo);
};

/** \brief indicates restoration of text to an earlier state by cancellation of an
 *  editorial or authorial marking or instruction.
 */
class MEI_EXPORT Restore : public MeiElement {
    public:
        Restore();
        Restore(const Restore& other);
        virtual ~Restore();

/* include <restore> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Restore);
};

/** \brief contains a sequence of writing which has been retraced, for example by over-
 *  inking, to clarify or fix it.
 */
class MEI_EXPORT Retrace : public MeiElement {
    public:
        Retrace();
        Retrace(const Retrace& other);
        virtual ~Retrace();

/* include <retrace> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SpanningMixIn    m_Spanning;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Retrace);
};

/** \brief contains a transcription or other representation of a single source document
 *  potentially forming part of a
 */
class MEI_EXPORT SourceDoc : public MeiElement {
    public:
        SourceDoc();
        SourceDoc(const SourceDoc& other);
        virtual ~SourceDoc();

/* include <sourceDoc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(SourceDoc);
};

/** \brief indicates the location of a significant space in the copy text.
 */
class MEI_EXPORT Space : public MeiElement {
    public:
        Space();
        Space(const Space& other);
        virtual ~Space();
        /** \brief indicates whether the space is horizontal or vertical.
         */
        MeiAttribute* getDim();
        void setDim(std::string _dim);
        bool hasDim();
        void removeDim();
        /** \brief indicates the agency responsible for the intervention or interpretation, for
         *  example an editor or transcriber.
         */
        MeiAttribute* getResp();
        void setResp(std::string _resp);
        bool hasResp();
        void removeResp();

/* include <space> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Space);
};

/** \brief groups one or more deletions with one or more additions when the combination is
 *  to be regarded as a single intervention in the text.
 */
class MEI_EXPORT Subst : public MeiElement {
    public:
        Subst();
        Subst(const Subst& other);
        virtual ~Subst();

/* include <subst> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Subst);
};

/** \brief identifies a series of possibly fragmented additions, deletions or other
 *  revisions on a manuscript that combine to make up a single intervention in the
 *  text
 */
class MEI_EXPORT SubstJoin : public MeiElement {
    public:
        SubstJoin();
        SubstJoin(const SubstJoin& other);
        virtual ~SubstJoin();

/* include <substJoin> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(SubstJoin);
};

/** \brief signifies text supplied by the transcriber or editor for any reason, typically
 *  because the original cannot be read because of physical damage or loss to the
 *  original.
 */
class MEI_EXPORT Supplied : public MeiElement {
    public:
        Supplied();
        Supplied(const Supplied& other);
        virtual ~Supplied();
        /** \brief gives the reason for omission.
         * 
         *  Sample values include
         */
        MeiAttribute* getReason();
        void setReason(std::string _reason);
        bool hasReason();
        void removeReason();

/* include <supplied> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Supplied);
};

/** \brief defines a written surface as a two-dimensional coordinate space, optionally
 *  grouping one or more graphic representations of that space, zones of interest
 *  within that space, and transcriptions of the writing within them.
 */
class MEI_EXPORT Surface : public MeiElement {
    public:
        Surface();
        Surface(const Surface& other);
        virtual ~Surface();
        /** \brief describes the method by which this surface is or was connected to the main
         *  surface
         */
        MeiAttribute* getAttachment();
        void setAttachment(std::string _attachment);
        bool hasAttachment();
        void removeAttachment();
        /** \brief indicates whether the surface is attached and folded in such a way as to provide
         *  two writing surfaces
         */
        MeiAttribute* getFlipping();
        void setFlipping(std::string _flipping);
        bool hasFlipping();
        void removeFlipping();

/* include <surface> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CoordinatedMixIn    m_Coordinated;
        DeclaringMixIn    m_Declaring;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Surface);
};

/** \brief defines any kind of useful grouping of written surfaces, for example the recto
 *  and verso of a single leaf, which the encoder wishes to treat as a single unit.
 */
class MEI_EXPORT SurfaceGrp : public MeiElement {
    public:
        SurfaceGrp();
        SurfaceGrp(const SurfaceGrp& other);
        virtual ~SurfaceGrp();

/* include <surfaceGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CoordinatedMixIn    m_Coordinated;
        DeclaringMixIn    m_Declaring;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(SurfaceGrp);
};

/** \brief marks text present in the source which the editor believes to be superfluous or
 *  redundant.
 */
class MEI_EXPORT Surplus : public MeiElement {
    public:
        Surplus();
        Surplus(const Surplus& other);
        virtual ~Surplus();
        /** \brief gives the reason for omission.
         * 
         *  Sample values include
         */
        MeiAttribute* getReason();
        void setReason(std::string _reason);
        bool hasReason();
        void removeReason();

/* include <surplus> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Surplus);
};

/** \brief describes a single textual transposition as an ordered list of at least two
 *  pointers specifying the order in which the elements indicated should be re-
 *  combined.
 */
class MEI_EXPORT Transpose : public MeiElement {
    public:
        Transpose();
        Transpose(const Transpose& other);
        virtual ~Transpose();

/* include <transpose> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Transpose);
};

/** \brief indicates one or more marked-up interventions in a document which have
 *  subsequently been marked for cancellation.
 */
class MEI_EXPORT Undo : public MeiElement {
    public:
        Undo();
        Undo(const Undo& other);
        virtual ~Undo();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <undo> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SpanningMixIn    m_Spanning;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Undo);
};

/** \brief defines any two-dimensional area within a
 */
class MEI_EXPORT Zone : public MeiElement {
    public:
        Zone();
        Zone(const Zone& other);
        virtual ~Zone();
        /** \brief identifies a two dimensional area within the bounding box specified by the other
         *  attributes by means of a series of pairs of numbers, each of which gives the x,y
         *  coordinates of a point on a line enclosing the area.
         */
        MeiAttribute* getPoints();
        void setPoints(std::string _points);
        bool hasPoints();
        void removePoints();
        /** \brief indicates the amount by which this zone has been rotated clockwise, with respect
         *  to the normal orientation of the parent
         */
        MeiAttribute* getRotate();
        void setRotate(std::string _rotate);
        bool hasRotate();
        void removeRotate();

/* include <zone> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CoordinatedMixIn    m_Coordinated;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Zone);
};
}
#endif  // TRANSCR_H_
