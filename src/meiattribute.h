/*
    Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter and Others

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


#ifndef MEIATTRIBUTE_H_
#define MEIATTRIBUTE_H_

#include <string>

#include "meicommon.h"

namespace mei {

    /** \brief  A representation of an attribute associated to an element in the MEI schema,
     *          attributes describe the properties of the Mei Element.
     *
     * MeiAttributes are descriptors associated with MeiElements and are stored on the element.
     * Each MeiAttribute needs a name and a value to be created and read.
     * An MeiElement can have more than one attribute;
     * all attributes are stored in the order they are created on the element.
     *
     */
    class MeiElement;

    class MEI_EXPORT MeiAttribute
        {
        public:
            /** \brief The MeiAttribute Constructor, requires the attribute name and value*/
            MeiAttribute(std::string attrname, std::string attrvalue);

            virtual ~MeiAttribute() {}

            bool operator==(const MeiAttribute &other) const;

            /** \brief Get the name of the attribute.
             *
             *  Each attribute is created with a name and value, the attribute cannot exist without a name
             *  \return string containing the attribute name.
             */
            std::string getName() const;

            /** \brief Get the value of the attribute.
             *  \return A string indicating the attribute value
             */
            std::string getValue() const;

            /** \brief Set/change the value of an attribute*/
            void setValue(std::string attrvalue);

            MeiElement* getElement() const;
            void setElement(MeiElement* el);

        private:
            std::string name;
            std::string value;
            MeiElement* element;
        };
}

#endif  // MEIATTRIBUTE_H_
