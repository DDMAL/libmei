
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

#ifndef TEXT_H_
#define TEXT_H_

#include "meielement.h"
#include "exceptions.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"


namespace mei {
    
/** \brief   back ― Back matter such as indexes, advertisements, etc. following the main
    * part of a text. This element is modelled on an element in the Text Encoding
    * Initiative (TEI).
    */

class Back : public MeiElement {
    public:
        Back();
        virtual ~Back() {};
        
        
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    private:
        REGISTER_DECLARATION(Back);
};


/** \brief   division ― Major structural division of text, such as a preface, chapter or
    * section. Often, the <head> sub-element identifies the <div>'s purpose. This
    * element is modelled on an element in the Text Encoding Initiative (TEI).
    */

class Div : public MeiElement {
    public:
        Div();
        virtual ~Div() {};
        
        
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    private:
        REGISTER_DECLARATION(Div);
};


/** \brief   front ― Bundles prefatory text found before the start of the musical text.
    * <titlePage> may be used to transcribe the item's title page. Other front matter
    * structures, such as a preface, dedication, or table of contents, may be encoded
    * as textual divisions; that is, as <div>s, with an optional <head> sub-element
    * describing the nature of the division. The <pb> element is allowed here in order
    * to accommodate page images, e.g. cover, endpapers, etc. before and after the
    * actual textual matter. This element is modelled on an element in the Text
    * Encoding Initiative (TEI).
    */

class Front : public MeiElement {
    public:
        Front();
        virtual ~Front() {};
        
        
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    private:
        REGISTER_DECLARATION(Front);
};


/** \brief   heading ― Contains any heading, for example, the title of a section of text,
    * or the heading of a list. When <head> is used, it should be the first sub-
    * element, followed by one or more other elements. This element is modelled on
    * elements in Encoded Archival Description (EAD), Text Encoding Initiative (TEI),
    * and HTML.
    */

class Head : public MeiElement {
    public:
        Head();
        virtual ~Head() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    private:
        REGISTER_DECLARATION(Head);
};


/** \brief   item ― Single item in a <list>. This element is modelled on elements in
    * Encoded Archival Description (EAD), Text Encoding Initiative (TEI), and HTML.
    */

class Item : public MeiElement {
    public:
        Item();
        virtual ~Item() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    private:
        REGISTER_DECLARATION(Item);
};


/** \brief   line of text ― Contains a single line of text within a line group. The n
    * attribute should be used to record a label for the line, i.e., most likely a
    * line number. Do not confuse this element with the <line> element, which is used
    * for graphical lines that occur in music notation. This element is modelled on
    * elements in the Text Encoding Initiative (TEI).
    */

class L : public MeiElement {
    public:
        L();
        virtual ~L() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    private:
        REGISTER_DECLARATION(L);
};


/** \brief   line group ― May be used for any section of text that is organized as a group
    * of lines. This element is modelled on an element in the Text Encoding Initiative
    * (TEI).
    */

class Lg : public MeiElement {
    public:
        Lg();
        virtual ~Lg() {};
        
        
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    private:
        REGISTER_DECLARATION(Lg);
};


/** \brief   list ― A formatting element that contains a series of items separated from one
    * another and arranged in a linear, often vertical, sequence. This element is
    * modelled on elements in Encoded Archival Description (EAD), Text Encoding
    * Initiative (TEI), and HTML.
    */

class List : public MeiElement {
    public:
        List();
        virtual ~List() {};
        
    /** \brief   records the function of the dot.
    */
    MeiAttribute* getForm();
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    private:
        REGISTER_DECLARATION(List);
};


/** \brief   quote ― A formatting element that designates an extended quotation; that is, a
    * passage attributed to a source external to the text. The quotation is normally
    * set off from the text by spacing or other typographic distinction. The source
    * for the quote may be included in the optional <bibl> sub-element. Use <rend> for
    * words that are enclosed in quotation marks for emphasis or for a short quoted
    * phrase that occurs within a line of text. This element is modelled on elements
    * found in HTML, TEI, and EAD.
    */

class Quote : public MeiElement {
    public:
        Quote();
        virtual ~Quote() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    private:
        REGISTER_DECLARATION(Quote);
};


}
#endif // TEXT_H_
