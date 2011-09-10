/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani
    
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

#ifndef CRITAPP_H_
#define CRITAPP_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
#include "mei.h"
#include "sharedmixins.h"
#include "critappmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
/** \brief apparatus ― Contains one or more alternative encodings.
 * 
 *  The alternatives may be thought of as exclusive or as parallel. The type
 *  attribute may contain any convenient descriptive word, describing the extent of
 *  the variation (e.g. note, phrase, measure, etc.), its text-critical significance
 *  (e.g. significant, accidental, unclear), or the nature of the variation or the
 *  principles required to understand it (e.g. lectio difficilior, usus auctoris,
 *  etc.). This element is modelled on an element in the Text Encoding Initiative
 *  (TEI).
 */
class MEI_EXPORT App : public MeiElement {
    public:
        App();
        virtual ~App();

        CommonMixIn    m_Common;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(App);
};

/** \brief lemma ― Contains the lemma, or base text, of a textual variation.
 * 
 *  The lem element may also be used, under some circumstances, to record the base
 *  text of the source edition, to mark the readings of a base witness, to indicate
 *  the preference of an editor or encoder for a particular reading, or to make
 *  clear, in cases of ambiguity, precisely which portion of the main text the
 *  variation applies to. Those who prefer to work without the notion of a base text
 *  may prefer not to use it at all. An integer indicating the position of this
 *  reading in a sequence, when there is reason to presume a sequence of the variant
 *  readings, may be captured in the seq attribute. This element is modelled on an
 *  element in the Text Encoding Initiative (TEI).
 */
class MEI_EXPORT Lem : public MeiElement {
    public:
        Lem();
        virtual ~Lem();

        CommonMixIn    m_Common;
        CritMixIn    m_Crit;
        HandidentMixIn    m_Handident;
        ResponsibilityMixIn    m_Responsibility;
        SequenceMixIn    m_Sequence;
        SourceMixIn    m_Source;
        TypedMixIn    m_Typed;
        PointingMixIn    m_Pointing;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Lem);
};

/** \brief reading ― Since a reading can be a multi-measure section, the scoreDef element
 *  is allowed so that a reading may have its own meta-data without incurring the
 *  overhead of child <section> elements.
 * 
 *  The app sub-element is permitted in order to allow nested sub-variants. This
 *  element is modelled on an element in the Text Encoding Initiative (TEI).
 */
class MEI_EXPORT Rdg : public MeiElement {
    public:
        Rdg();
        virtual ~Rdg();

        CommonMixIn    m_Common;
        CritMixIn    m_Crit;
        HandidentMixIn    m_Handident;
        ResponsibilityMixIn    m_Responsibility;
        SequenceMixIn    m_Sequence;
        SourceMixIn    m_Source;
        TypedMixIn    m_Typed;
        PointingMixIn    m_Pointing;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Rdg);
};
}
#endif  // CRITAPP_H_
