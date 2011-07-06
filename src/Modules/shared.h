/*
    Copyright (c) 2011 Mahtab Ghamsari-Esfahani, Jamie Klassen, Alastair Porter, Andrew Hankinson

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

#ifndef SHARED_H_
#define SHARED_H_

#include "meielement.h"
#include "meiattribute.h"
#include "exceptions.h"

/** \brief A generic element for a shortened form of a word, including an acronym.*/
class Abbr: public MeiElement
	{
	public:
		Abbr();
	private:
	};

/** \brief Records a temporary alteration to the pitch of a note.*/
class Accid: public MeiElement
	{
	public:
		Accid(string accid);
	private:
	};

/** \brief Contains a postal address, for example of a publisher, an organization, or an individual. */
class Address: public MeiElement
	{
	public:
		Address();
	private:
	};

/** \brief Single line of a postal address.*/
class AddrLine: public MeiElement
	{
	public:
		AddrLine();
	private:
	};

/** \brief Provides a short statement explaining the text or indicating the basis for an assertion.*/
class Annot: public MeiElement
	{
	public:
		Annot();
	private:
	};

/** \brief Groups information about applications which have acted upon the MEI file. */
class AppInfo: public MeiElement
	{
	public:
		AppInfo();
	private:
	};

/** \brief An indication of how to play a note or chord.*/
class Artic: public MeiElement
	{
	public:
		Artic();
        
        string getArticulation() throw (AttributeNotFoundException);
        void setArticulation(string artic);
        
	private:
	};

/** \brief Vertical line drawn through one or more staves that divides musical notation into metrical units.*/
class BarLine: public MeiElement
	{
	public:
		BarLine();
	private:
	};

/** \brief rovides a citation for a published work.*/
class Bibl: public MeiElement
	{
	public:
		Bibl();
	private:
	};

/** \brief This element contains the actual music data of the MEI encoding, 
 *         as opposed to the header, front, and back elements, which do not.*/
class Body: public MeiElement
	{
	public:
		Body();
	private:
	};

/** \brief A label which accompanies an illustration or a table.*/
class Caption: public MeiElement
	{
	public:
		Caption();
	private:
	};

/** \brief A simultaneous sounding of two or more notes in the same layer with the same duration.*/
class Chord: public MeiElement
	{
	public:
		Chord();
        
        string getDuration() throw (AttributeNotFoundException);
        void setDuration(string duration);
        
        string getStemDir() throw (AttributeNotFoundException);
        void setStemDir(string direction);
        
        string getNumDots() throw (AttributeNotFoundException);
        void setNumDots(string numDots);
        bool getIsDotted();
        
	private:
        string duration;
	};

/** \brief Indication of the exact location of a particular note on the staff and, therefore, the other notes as well. */
class Clef: public MeiElement 
	{
	public:
		Clef();
	private:
	};

/** \brief A temporary change of clef.*/
class ClefChange: public MeiElement
	{
	public:
		ClefChange();
	private:
	};

/** \brief Symbol placed at the end of a line of music to indicate the first note of the next line.*/
class Custos: public MeiElement
	{
	public:
		Custos();
	private:
	};

/** \brief A date in any format, including a date range.*/
class Date: public MeiElement
	{
	public:
		Date();
	private:
	};

/** \brief Directive: A text expression that is on the score but not encoded elsewhere in more specific elements, such as <tempo> or <dynam>.*/
class Dir: public MeiElement
	{
	public:
		Dir();
	private:
	};

/** \brief This element provides an alternative to the dots attribute on chord, note, rest, space, tuplet, and tupletspan elements.*/
class Dot: public MeiElement
	{
	public:
		Dot();
	private:
	};

/** \brief Indication of the volume of a note, phrase, or section of music.*/
class Dynam: public MeiElement
	{
	public:
		Dynam();
	private:
	};

/** \brief Edition Designation */
class Edition: public MeiElement
	{
	public:
		Edition();
	private:
	};

/** \brief Alternative ending for a repeated passage of music; i.e., prima volta, seconda volta, etc.*/
class Ending: public MeiElement
	{
	public:
		Ending();
	private:
	};

/** \brief Contains the expansion of an abbreviation.*/
class Expan: public MeiElement
	{
	public:
		Expan();
	private:
	};

/** \brief Indicates how a section may be programmatically expanded into its 'through-composed' form.*/
class Expansion: public MeiElement
	{
	public:
		Expansion();
	private:
	};

/** \brief This element is intended for capture of header/footer material that is non-repeating.*/
class Fw: public MeiElement
	{
	public:
		Fw();
	private:
	};

/** \brief Enables the gathering of multiple documents into a single file.*/
class Group: public MeiElement
	{
	public:
		Group();
	private:
	};

/** \brief A brace or bracket used to group two or more staves of a score or part. */
class Grpsym: public MeiElement
	{
	public:
		Grpsym();
	private:
	};

/** \brief An alpha-numeric string that establishes the identity of the described material, such as a Standard Book Number*/
class Identifier: public MeiElement
	{
	public:
		Identifier();
	private:
	};

/** \brief MIDI instrument declaration.*/
class Instrdef: public MeiElement
	{
	public:
		Instrdef();
	private:
	};

/** \brief Collects MIDI instrument definitions.*/
class Instrgrp: public MeiElement
	{
	public:
		Instrgrp();
	private:
	};

/** \brief Accidental in a key signature.*/
class KeyAccid: public MeiElement
	{
	public:
		KeyAccid();
	private:
	};

/** \brief */
class KeyChange: public MeiElement
	{
	public:
		KeyChange();
	private:
	};

/** \brief This element may be used as an alternative to the key attribute */
class KeySig: public MeiElement 
	{
	public:
		KeySig();
	private:
	};

/** \brief A text string that identifies a staff or staff group.*/
class Label: public MeiElement
	{
	public:
		Label();
	private:
	};

/** \brief An independent stream of events on a staff.*/
class Layer: public MeiElement
	{
	public:
		Layer();
	private:
	};

/** \brief Container for layer meta-information.*/
class LayerDef: public MeiElement
	{
	public:
		LayerDef();
	private:
	};

/** \brief An empty formatting element that forces text to begin on a new line.*/
class Lb: public MeiElement
	{
	public:
		Lb();
	private:
	};

/** \brief The mdiv element may contain one or both of 2 possible views of the music.*/
class Mdiv: public MeiElement
	{
	public:
		Mdiv();
	private:
	};

/** \brief Defines a particular instance of a document encoded with the MEI schema*/
class Mei: public MeiElement
	{
	public:
		Mei();
	private:
	};

/** \brief Container for everything else in the document apart from the header.*/
class Music: public MeiElement
	{
	public:
		Music();
	private:
	};

/** \brief Contains the name of an entity that is difficult to tag.*/
class Name: public MeiElement
	{
	public:
		Name();
	private:
	};

/** \brief A single pitched event.*/
class Note: public MeiElement 
	{
	public:
        Note();

        void addAccidental(Accid accidental);
        vector<Accid> getAccidentals() throw (AttributeNotFoundException);
        void setAccidentals(vector<Accid> accidentals);
        
        string getPitchName() throw (AttributeNotFoundException);
        void setPitchName(string pitchname);
		
        string getOctave() throw (AttributeNotFoundException);
        void setOctave(string octave);
        
        string getDuration() throw (AttributeNotFoundException);
        void setDuration(string duration);
        
        string getStemDir() throw (AttributeNotFoundException);
        void setStemDir(string direction);
        
        bool getIsDotted();
        
        string getNumDots() throw (AttributeNotFoundException);
        void setNumDots(string numDots);
        
        bool getIsTied();
        
        string getTie() throw (AttributeNotFoundException);
        void setTie(string tie);
        
        bool getIsTuplet();
        
        string getTuplet() throw (AttributeNotFoundException);
        void setTuplet(string tuplet);
		
	private:        
        vector<Accid> accidentals;
	};

/** \brief Numeric information in any form. */
class Num: public MeiElement
	{
	public:
		Num();
	private:
	};

/** \brief One or more text phrases that form a logical prose passage.*/
class P: public MeiElement
	{
	public:
		P();
	private:
	};

/** \brief An indication of extra visual space between notational elements.*/
class Pad: public MeiElement
	{
	public:
		Pad();
	private:
	};

/** \brief An alternative visual rendition of the score from a particular performer's point of view.*/
class Part: public MeiElement
	{
	public:
		Part();
	private:
	};

/** \brief Gathers performers' parts.*/
class Parts: public MeiElement
	{
	public:
		Parts();
	private:
	};

/** \brief The n attribute records the page number in the source.*/
class Pb: public MeiElement
	{
	public:
		Pb();
	private:
	};

/** \brief Contains a brief prose description of the appearance or description of the content of a physical page.*/
class PgDesc: public MeiElement
	{
	public:
		PgDesc();
	private:
	};

/** \brief A running footer on the first page.*/
class PgFoot: public MeiElement
	{
	public:
		PgFoot();
	private:
	};

/** \brief A running header on the pages following the first.*/
class PgFoot2: public MeiElement
	{
	public:
		PgFoot2();
	private:
	};

/** \brief A running header on the first page.*/
class PgHead: public MeiElement
	{
	public:
		PgHead();
	private:
	};

/** \brief A running header on the pages following the first.*/
class PgHead2: public MeiElement
	{
	public:
		PgHead2();
	private:
	};

/** \brief A phrase marking indicating a "unified melodic idea" in terms of the musical flow*/
class Phrase: public MeiElement
	{
	public:
		Phrase();
	private:
	};

/** \brief A formatting element indicating special visual rendering.*/
class Rend: public MeiElement
	{
	public:
		Rend();
	private:
	};

/** \brief Institution or agency which holds a bibliographic item.*/
class Repository: public MeiElement
	{
	public:
		Repository();
	private:
	};

/** \brief A non-sounding event found in the source being transcribed*/
class Rest: public MeiElement
	{
	public:
		Rest();
        
        string getDuration() throw (AttributeNotFoundException);
        void setDuration(string duration);
        
        string getStemDir() throw (AttributeNotFoundException);
        void setStemDir(string direction);
        
        string getNumDots() throw (AttributeNotFoundException);
        void setNumDots(string numDots);
        bool getIsDotted();
        
	private:
	};

/** \brief An empty formatting element that forces notation to begin on a new line.*/
class Sb: public MeiElement
	{
	public:
		Sb();
	private:
	};

/** \brief Full score view of the mdiv*/
class Score: public MeiElement
	{
	public:
		Score();
	private:
	};

/** \brief Container for score meta-information.*/
class ScoreDef: public MeiElement
	{
	public:
		ScoreDef();
	private:
	};

/** \brief Container for actual music data.*/
class Section: public MeiElement
	{
	public:
		Section();
	private:
	};

/** \brief A placeholder used to fill an incomplete measure, layer, etc. so that the combined duration of events equals the number of beats in the measure.*/
class Space: public MeiElement
	{
	public:
		Space();
	private:
	};

/** \brief An inline table with a single column.*/
class Stack: public MeiElement
	{
	public:
		Stack();
	private:
	};

/** \brief A group of equidistant horizontal lines on which notes are placed in order to represent pitch.*/
class Staff: public MeiElement
	{
	public:
		Staff();
	private:
	};

/** \brief Container for staff meta-information.*/
class StaffDef: public MeiElement
	{
	public:
		StaffDef();
        
        string getClefArray() throw(AttributeNotFoundException);
        string getPPQ() throw(AttributeNotFoundException);
        
	private:
	};

/** \brief A group of bracketed or braced staves.*/
class StaffGrp: public MeiElement
	{
	public:
		StaffGrp();
	private:
	};

/** \brief Individual lyric syllable.*/
class Syl: public MeiElement
	{
	public:
		Syl();
	private:
	};

/** \brief Text and symbols descriptive of tempo, mood, or style.*/
class Tempo: public MeiElement
	{
	public:
		Tempo();
	private:
	};

/** \brief Title of a bibliographic entity.*/
class Title: public MeiElement
	{
	public:
		Title();
	private:
	};

/** \brief Contains a transcription of the title page of a text.*/
class TitlePage: public MeiElement
	{
	public:
		TitlePage();
	private:
	};

// added in MEI 2011
/** \brief */
class CastItem: public MeiElement
{
    public:
        CastItem();
    private:
};

/** \brief */
class RoleDesc: public MeiElement
{
public:
    RoleDesc();
private:
};

/** \brief */
class Actor: public MeiElement
{
public:
    Actor();
private:
};

/** \brief */
class Role: public MeiElement
{
public:
    Role();
private:
};

/** \brief */
class CastList: public MeiElement
{
public:
    CastList();
private:
};

/** \brief */
class CastGrp: public MeiElement
{
public:
    CastGrp();
private:
};

#endif // SHARED_H_
