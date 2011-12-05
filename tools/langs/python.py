import os
import codecs
import logging
lg = logging.getLogger('schemaparser')

LANG_NAME="Python"

MODULE_TEMPLATE = """
{license}

from pymei import MeiElement

{classes}
"""

MODULE_CLASS_TEMPLATE = """
class {className}_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "{className}")
"""

LICENSE = """\"\"\"
    Copyright (c) 2011 {authors}
    
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
\"\"\""""

AUTHORS = "Andrew Hankinson"

def create(schema):
    lg.debug("Begin Python Output...")

    __create_python_classes(schema)

    lg.debug("Success!")

def __create_python_classes(schema):
    lg.debug("Creating Python Modules")

    for module, elements in sorted(schema.element_structure.iteritems()):
        if not elements:
            continue
        class_output = ""
        module_output = ""

        for element, atgroups in sorted(elements.iteritems()):
            methstr = {
                "className": element
            }
            class_output += MODULE_CLASS_TEMPLATE.format(**methstr)
        
        modstr = {
            "classes": class_output,
            "license": LICENSE.format(authors=AUTHORS),
        }
        module_output = MODULE_TEMPLATE.format(**modstr)

        fmi = open(os.path.join(schema.outdir, "{0}.py".format(module.lower())), "w")
        fmi.write(module_output)
        fmi.close()
        lg.debug("\tCreated {0}.py".format(module.lower()))
    
    open(os.path.join(schema.outdir, "__init__.py"), 'w').close()








