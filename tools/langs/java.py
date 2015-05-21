import os
import codecs
import re
import logging
lg = logging.getLogger('schemaparser')

LANG_NAME="Java"

MODULE_TEMPLATE = """{license}

package javaMei.{package};

import javaMei.MeiElement;

{classes}
"""

MODULE_CLASS_TEMPLATE = """
/**
 * <{className}>
 */
class {className} extends MeiElement {{
    void {className}() {{
        super("{className}");
    }}
}}"""

LICENSE = """/*
    Copyright (c) 2011-2013 {authors}

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
*/"""

AUTHORS = "Andrew Hankinson, Alastair Porter, and Others"

def create(schema, outdir):
    lg.debug("Begin Java Output...")

    __create_java_classes(schema, outdir)

    lg.debug("Success!")

def __create_java_classes(schema, outdir):
    lg.debug("Creating Python Modules")

    for module, elements in sorted(schema.element_structure.iteritems()):
        if not elements:
            continue

        for element, atgroups in sorted(elements.iteritems()):
            class_name = capitalize_first_letter(element)
            # Generate the class
            methstr = {
                "className": class_name
            }
            class_output = MODULE_CLASS_TEMPLATE.format(**methstr)

            # Generate the module
            modstr = {
                "package": module,
                "classes": class_output,
                "license": LICENSE.format(authors=AUTHORS),
            }
            module_output = MODULE_TEMPLATE.format(**modstr)

            # Save to a file
            file_name = "{0}.java".format(class_name)
            path = os.path.join(outdir, module.lower())
            # Make directory if necessary
            if not os.path.exists(path):
                os.makedirs(path)
            fmi = open(os.path.join(path, file_name), "w")
            fmi.write(module_output)
            fmi.close()
            lg.debug("\tCreated {0}".format(file_name, class_name))

def __parse_codefile(methods, includes, directory, codefile):
    f = open(os.path.join(directory, codefile), 'r')
    contents = f.readlines()
    f.close()
    regmatch = re.compile(r"[\s]+# <(?P<elementName>[^>]+)>", re.MULTILINE|re.DOTALL)
    incmatch = re.compile(r"/\* #include_block \*/")
    for i,line in enumerate(contents):
        imatch = re.match(incmatch, line)
        if imatch:
            if includes:
                contents[i] = includes[0]

        match = re.match(regmatch, line)
        if match:
            if match.group("elementName") in methods.keys():
                contents[i] = methods[match.group("elementName")].lstrip("\n") + "\n"

    f = open(os.path.join(directory, codefile), 'w')
    f.writelines(contents)
    f.close()

def capitalize_first_letter(text):
    """
    Given a string, capitalize the first letter.
    """
    chars = list(text.strip())
    chars[0] = chars[0].upper()
    return "".join(chars)
