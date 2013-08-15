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

#ifndef CORPUS_H_
#define CORPUS_H_

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
/** \brief contains a brief informal description of what a participant in a language
 *  interaction is doing other than speaking, if anything.
 */
class MEI_EXPORT Activity : public MeiElement {
    public:
        Activity();
        Activity(const Activity& other);
        virtual ~Activity();

/* include <activity> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Activity);
};

/** \brief describes the medium or channel by which a text is delivered or experienced.
 * 
 *  For a written text, this might be print, manuscript, e-mail, etc.; for a spoken
 *  one, radio, telephone, face-to-face, etc.
 */
class MEI_EXPORT Channel : public MeiElement {
    public:
        Channel();
        Channel(const Channel& other);
        virtual ~Channel();
        /** \brief specifies the mode of this channel with respect to speech and writing.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <channel> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Channel);
};

/** \brief describes the internal composition of a text or text sample, for example as
 *  fragmentary, complete, etc.
 */
class MEI_EXPORT Constitution : public MeiElement {
    public:
        Constitution();
        Constitution(const Constitution& other);
        virtual ~Constitution();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <constitution> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Constitution);
};

/** \brief describes the nature and extent of originality of this text.
 */
class MEI_EXPORT Derivation : public MeiElement {
    public:
        Derivation();
        Derivation(const Derivation& other);
        virtual ~Derivation();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <derivation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Derivation);
};

/** \brief describes the most important social context in which the text was realized or
 *  for which it is intended, for example private vs.
 * 
 *  public, education, religion, etc.
 */
class MEI_EXPORT Domain : public MeiElement {
    public:
        Domain();
        Domain(const Domain& other);
        virtual ~Domain();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <domain> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Domain);
};

/** \brief describes the extent to which the text may be regarded as imaginative or non-
 *  imaginative, that is, as describing a fictional or a non-fictional world.
 */
class MEI_EXPORT Factuality : public MeiElement {
    public:
        Factuality();
        Factuality(const Factuality& other);
        virtual ~Factuality();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <factuality> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Factuality);
};

/** \brief describes the extent, cardinality and nature of any interaction among those
 *  producing and experiencing the text, for example in the form of response or
 *  interjection, commentary, etc.
 */
class MEI_EXPORT Interaction : public MeiElement {
    public:
        Interaction();
        Interaction(const Interaction& other);
        virtual ~Interaction();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief specifies the number of active participants (or
         */
        MeiAttribute* getActive();
        void setActive(std::string _active);
        bool hasActive();
        void removeActive();
        /** \brief specifies the number of passive participants (or
         */
        MeiAttribute* getPassive();
        void setPassive(std::string _passive);
        bool hasPassive();
        void removePassive();

/* include <interaction> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Interaction);
};

/** \brief contains a brief informal description of the kind of place concerned, for
 *  example: a room, a restaurant, a park bench, etc.
 */
class MEI_EXPORT Locale : public MeiElement {
    public:
        Locale();
        Locale(const Locale& other);
        virtual ~Locale();

/* include <locale> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Locale);
};

/** \brief (MEI corpus) – A group of related MEI documents, consisting of a header for
 *  the group, and one or more <mei> elements, each with its own complete header.
 */
class MEI_EXPORT MeiCorpus : public MeiElement {
    public:
        MeiCorpus();
        MeiCorpus(const MeiCorpus& other);
        virtual ~MeiCorpus();

/* include <meiCorpus> */


    private:
        REGISTER_DECLARATION(MeiCorpus);
};

/** \brief describes the identifiable speakers, voices, or other participants in any kind
 *  of text.
 */
class MEI_EXPORT ParticDesc : public MeiElement {
    public:
        ParticDesc();
        ParticDesc(const ParticDesc& other);
        virtual ~ParticDesc();

/* include <particDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(ParticDesc);
};

/** \brief describes the extent to which a text may be regarded as prepared or spontaneous.
 */
class MEI_EXPORT Preparedness : public MeiElement {
    public:
        Preparedness();
        Preparedness(const Preparedness& other);
        virtual ~Preparedness();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <preparedness> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Preparedness);
};

/** \brief characterizes a single purpose or communicative function of the text.
 */
class MEI_EXPORT Purpose : public MeiElement {
    public:
        Purpose();
        Purpose(const Purpose& other);
        virtual ~Purpose();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief signifies the degree of damage according to a convenient scale.
         * 
         *  The
         */
        MeiAttribute* getDegree();
        void setDegree(std::string _degree);
        bool hasDegree();
        void removeDegree();

/* include <purpose> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Purpose);
};

/** \brief describes one particular setting in which a language interaction takes place.
 */
class MEI_EXPORT Setting : public MeiElement {
    public:
        Setting();
        Setting(const Setting& other);
        virtual ~Setting();

/* include <setting> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(Setting);
};

/** \brief describes the setting or settings within which a language interaction takes
 *  place, either as a prose description or as a series of setting elements.
 */
class MEI_EXPORT SettingDesc : public MeiElement {
    public:
        SettingDesc();
        SettingDesc(const SettingDesc& other);
        virtual ~SettingDesc();

/* include <settingDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(SettingDesc);
};

/** \brief provides a description of a text in terms of its situational parameters.
 */
class MEI_EXPORT TextDesc : public MeiElement {
    public:
        TextDesc();
        TextDesc(const TextDesc& other);
        virtual ~TextDesc();

/* include <textDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(TextDesc);
};
}
#endif  // CORPUS_H_
