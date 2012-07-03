import os
import codecs
import re
import logging
lg = logging.getLogger('schemaparser')

LANG_NAME="ManuScript"

METHOD_TEMPLATE = """
{className} "() {{
    createEntry('{elementName}');
}}"
"""
LICENSE = """
    _License "() {{
    return 'Copyright (c) 2011-2012 {authors}
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    Software), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:
    
    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.';
    }}"
"""

EXTRAS = """
createEntry "(tagname) {
    return CreateDictionary(tagname, CreateDictionary('attrs', CreateDictionary(), 'children', CreateSparseArray(), 'text', '', 'tail', ''));
}"

getChildren "(obj) {
    c = '';
    for each Value v in obj {
        c = v['children'];
    }
    return c;
}"

getAttrs "(obj) {
    a = '';
    for each Value v in obj {
        a = v['attrs'];
    }
    return a;
}"

getName "(obj) {
    for each Name n in obj {
        return n;
    }
}"

setText "(obj, val) {
    for each Value v in obj {
        v['text'] = val;
    }
}"
getText "(obj) {
    t = '';
    for each Value v in obj {
        t = v['text'];
    }
    return t;
}"

setTail "(obj, val) {
    for each Value v in obj {
        v['tail'] = val;
    }
}"

getTail "(obj) {
    t = '';
    for each Value v in obj {
        t = v['tail'];
    }
    return t;
}"

createXmlTag "(name, attributesList, isTerminal) {
    attrstring = '';
    spacer = '';
    if (attributesList) {
        spacer = ' ';
        for each Pair attr in attributesList {
            if (attr.Value != ' ') {
                attrstring = attrstring & attr.Name & '=' & Chr(34) & attr.Value & Chr(34) & ' ';
            }
        }
    }
    if (isTerminal) {
        return '<' & name & spacer & attrstring & '/>';
    } else {
        return '<' & name & spacer & attrstring & '>';
    }
}"

convertDictToXml "(meiel) {
    xmlout = '';
    terminalTag = true;
    nm = libmei.getName(meiel);
    at = libmei.getAttrs(meiel);
    ch = libmei.getChildren(meiel);
    tx = libmei.getText(meiel);
    tl = libmei.getTail(meiel);
    
    if (ch or Length(tx) > 0) {
        terminalTag = false;
    }

    xmlout = createXmlTag(nm, at, terminalTag);

    if (Length(tx) > 0) {
        xmlout = xmlout & tx;
    }

    if (ch) {
        for each child in ch {
            xmlout = xmlout & convertDictToXml(child);
        }
    }

    if (Length(tl) > 0) {
        xmlout = xmlout & tl;
    }

    // convertDictToXml takes care of adding the />
    // for tags that do not have children. We'll 
    // take care of the terminal tag here for those 
    // that do.
    if (not terminalTag) {
        xmlout = xmlout & '</' & nm & '>';
    }

    return xmlout;
}"

meiDocumentToFile "(meidoc, filename) {
    xdecl = '<?xml version=' & Chr(34) & '1.0' & Chr(34) & ' encoding=' & Chr(34) & 'UTF-8' & Chr(34) & ' ?>\n';
    meiout = xdecl & convertDictToXml(meidoc[0]);

    dir = Sibelius.GetDocumentsFolder();
    fname = dir & filename;

    Sibelius.CreateTextFile(fname);
    Sibelius.AppendTextFile(fname, meiout, 0);

    return true;
}"

"""

AUTHORS = "Andrew Hankinson, Alastair Porter, and Others"

FILE_TEMPLATE="""
{{
    {license}
    {classes}
    {extras}
}}
"""
def create(schema):
    lg.debug("Begin ManuScript Output")
    __create_manuscript_classes(schema)

    lg.debug("Success!")

def __create_manuscript_classes(schema):
    output = ""
    for module,elements in sorted(schema.element_structure.iteritems()):
        if not elements:
            continue

        for element, atgroups in sorted(elements.iteritems()):
            methstr = {
                'className': element[0].upper() + element[1:],
                'elementName': element
            }
            output += METHOD_TEMPLATE.format(**methstr)

    filestr = {
        'license': LICENSE.format(authors=AUTHORS),
        'classes': output,
        'extras': EXTRAS
    }
    fileoutput = FILE_TEMPLATE.format(**filestr)

    fmi = open(os.path.join(schema.outdir, 'libmei.plg'), 'w')
    fmi.write(fileoutput)
    fmi.close()
    return True
