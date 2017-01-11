import os
import logging
lg = logging.getLogger('schemaparser')

LANG_NAME = "ManuScript"

METHOD_TEMPLATE = """
{className} "() {{
    CreateElement('{elementName}', null);
}}"
"""
LICENSE = """
    _License "() {{
    return 'Copyright (c) 2011-2015 {authors}

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
Initialize "() {
        tree_doc = CreateSparseArray();
        flat_doc = CreateDictionary();
        id_incr = 0;

        Self._property:MEIDocument = tree_doc;
        Self._property:MEIFlattened = flat_doc;
        Self._property:MEIID = id_incr;
}"

    XMLComment "(comment) {
    commentObj = Create('<!--', null);
    commentObj.text = comment;
    return commentObj;
}"
CreateElement "(tagname, orig_id) {
    element = CreateDictionary(
        'name', tagname,
        'attrs', CreateDictionary(),
        'children', CreateSparseArray(),
        'text', '',
        'tail', '',
        '_id', '',
        '_parent', null);

    if (orig_id = null)
    {
        element._id = generateRandomID();
    }
    else
    {
        element._id = orig_id;
    }

    f = Self._property:MEIFlattened;
    f[element._id] = element;

    return element;
}"
GetChildren "(element) {
        c = CreateSparseArray();
        for each child_id in element.children {
            child = Self.MEIFlattened[child_id];
            c.Push(child);
        }
        return c;
}"
SetChildren "(element, childarr) {
        element.children = childarr;
}"
AddChildAtPosition "(element, child, position) {
        c = element.children;
        r = CreateSparseArray();
        // copy the children to the new array. Add two
        // beyond the length since we'll be adding a new element.
        for i = c.Length + 2 {
            if (i = position) {
                r[i] = child;
                i = i + 1;
            } else {
                r[i] = c[i];
            }
        }
        element.children = r;
}"
AddChild "(element, child) {
        cid = child._id;
        child._parent = element._id;
        element.children.Push(cid);
}"
GetAttributes "(element) {
    return element.attrs;
}"
AddAttribute "(element, attrname, attrval) {
    a = element.attrs;
    // check and replace any newlines
    val = _encodeEntities(attrval);
    a[attrname] = val;
}"
AddAttributeValue "(element, attrname, attrval) {
    // appends a value to an existing attribute. Used, for example,
    // in appending multiple articulations to @artic on note.
    a = element.attrs;

    if (a.PropertyExists(attrname))
    {
        origval = a[attrname];
        newval = _encodeEntities(attrval);
        val = origval & ' ' & newval;
    }
    else
    {
        val = attrval;
    }

    element.attrs[attrname] = val;
}"
GetAttribute "(element, attrname) {
        attrs = element.attrs;
        if (attrs.PropertyExists(attrname))
        {
            return attrs[attrname];
        }
        else
        {
            return False;
        }
}"
SetAttributes "(element, new_attrs) {
    //sets all attributes, wiping out any previous ones
    element.attrs = CreateDictionary();

    // this will provide character encoding
    for each Pair a in new_attrs
    {
        libmei.AddAttribute(element, a.Name, a.Value);
    }
}"
GetId "(element) {
        return element._id;
}"
SetId "(element, value) {
        element._id = value;
}"
RemoveAttribute "(element, attrname) {
    // since there are no delete functions
    // for dictionaries, we set the attribute
    // to a blank space and this will get
    // removed when converted to XML.
    element.attrs[attrname] = ' ';
}"
GetName "(element) {
    return element.name;
}"
SetText "(element, val) {
    element.text = _encodeEntities(val);
}"
GetText "(element) {
    return element.text;
}"
SetTail "(element, val) {
    element.tail = _encodeEntities(val);
}"
GetTail "(element) {
    return element.tail;
}"

    destroy "() {
        // cleans up 
        Self._property:MEIFlattened = CreateDictionary();
        Self._property:MEIDocument = CreateSparseArray();
        Self._property:MEIID = 0;
    }"

    setDocumentRoot "(el) {
        d = Self._property:MEIDocument;
        d.Push(el);
    }"

    getDocumentRoot "() {
        d = Self._property:MEIDocument;
        return d[0];
    }"

    getDocument "() {
        return Self._property:MEIDocument;
    }"

    getElementById "(id) {
        d = Self._property:MEIFlattened;
        if (d.PropertyExists(id))
        {
            return d[id];
        }
        else
        {
            return null;
        }
    }"

    getElementsByName "(name) {
    if (not Self.MEIFlattened) {
        return false;
    }
    res = CreateSparseArray();
    for each e in Self.MEIFlattened {
        if (getName(e) = name) {
            res.Push(e);
        }
    }
    return res;
}"
    getPositionInDocument "(obj) {
    if (not Self.MEIFlattened) {
        return false;
    }
    for i = 0 to Length(Self.MEIFlattened) {
        if (Self.MEIFlattened[i] = obj) {
            return i;
        }
    }
    return false;
}"
    lookBack "(from, name) {
    if (not Self.MEIFlattened) {
        return false;
    }
    pos = getPositionInDocument(from);
    for i = pos to 0 step -1 {
        if (getName(Self.MEIFlattened[i]) = name) {
            return Self.MEIFlattened[i];
        }
    }
}"
    createXmlTag "(name, id, attributesList, isTerminal) {
    if (name = '<!--')
    {
        // handle XML comments
        return name;
    }

    attrstring = '';
    spacer = '';

    if (id != null)
    {
        attrstring = 'xml:id=' & Chr(34) & id & Chr(34);
    }

    if (attributesList != null)
    {
        spacer = ' ';
        for each Pair attr in attributesList
        {
            if (attr.Value != ' ')
            {
                if (attrstring = '')
                {
                    // Don't add initial space
                    attrstring = attr.Name & '=' & Chr(34) & attr.Value & Chr(34);
                }
                else
                {
                    attrstring = attrstring & spacer & attr.Name & '=' & Chr(34) & attr.Value & Chr(34);
                }
            }
        }
    }

    if (isTerminal)
    {
        return '<' & name & spacer & attrstring & '/>';
    }
    else
    {
        return '<' & name & spacer & attrstring & '>';
    }
}"
    convertDictToXml "(meiel, indent) {
    xmlout = '';
    terminalTag = true;
    trace('convert: ');
    trace(meiel);

    nm = libmei.GetName(meiel);
    at = libmei.GetAttributes(meiel);
    ch = libmei.GetChildren(meiel);
    tx = libmei.GetText(meiel);
    tl = libmei.GetTail(meiel);
    id = libmei.GetId(meiel);

    tabs = '';
    if (indent > 0)
    {
        // add four spaces for every indent level.
        arr = utils.CreateArrayBlanket('    ', indent);
        tabs = JoinStrings(arr, '');
    }

    // comments are simple so they're handled specially.
    if (nm = '<!--')
    {
        xmlout = nm & ' ' & tx & ' -->
';
        return xmlout;
    }

    if (ch or Length(tx) > 0)
    {
        terminalTag = false;
    }

    xmlout = createXmlTag(nm, id, at, terminalTag);

    if (Length(tx) > 0)
    {
        endchar = '';
        xmlout = xmlout & tx;
    }
    else
    {
        xmlout = xmlout & '
';
    }

    trace(ch);

    if (ch.Length > 0)
    {
        indent = indent + 1;
        for each child in ch
        {
            if (child = null)
            {
                trace('child is null!');
            }
            else
            {
                trace(child);
            }
            xmlout = xmlout & tabs & convertDictToXml(child, indent);
        }
        indent = indent - 1;
    }

    if (Length(tl) > 0)
    {
        xmlout = xmlout & tl;
    }

    // convertDictToXml takes care of adding the />
    // for tags that do not have children. We'll
    // take care of the terminal tag here for those
    // that do.
    if (not terminalTag)
    {
        if (Length(tx) > 0)
        {
            xmlout = xmlout & '</' & nm & '>
';
        }
        else
        {
            tabs = Substring(tabs, 0, Length(tabs) - 4);
            xmlout = xmlout & tabs & '</' & nm & '>
';
        }
    }

    return xmlout;
}"

    _exportMeiDocument "(meidoc) {
        xdecl = '<?xml version=' & Chr(34) & '1.0' & Chr(34) & ' encoding=' & Chr(34) & 'UTF-16' & Chr(34) & ' ?>
';
        indent = 0;
        meiout = xdecl & convertDictToXml(meidoc[0], indent);

        return meiout;
    }"

    meiDocumentToFile "(meidoc, filename) {
        meiout = _exportMeiDocument(meidoc);
        Sibelius.CreateTextFile(filename);
        Sibelius.AppendTextFile(filename, meiout, 1);

        return true;
}"

    meiDocumentToString "(meidoc) {
        return _exportMeiDocument(meidoc);
    }"
    documentFromFile "(filename) {
    res = _xmlImport(filename);

    return res;
}"
    popMode "(arr) {
    if (arr.Length > 0) {
        return arr.Pop();
    } else {
        // return PRE
        return 15;
    }
}"
    _encodeEntities "(string)
    {
        /*
            Returns an entity-encoded version of the string.
        */
        if (string = '')
        {
            return string;
        }

        nc = Chr(10);
        quote = Chr(34);
        apos = Chr(39);
        lthan = Chr(60);
        gthan = Chr(62);
        amp = Chr(38);

        // &amp; must go first so it doesn't replace it in the character encoding
        string = utils.Replace(string, amp, '&amp;', true);
        string = utils.Replace(string, nc, '&#10;', true);
        string = utils.Replace(string, quote, '&quot;', true);
        string = utils.Replace(string, apos, '&apos;', true);
        string = utils.Replace(string, lthan, '&lt;', true);
        string = utils.Replace(string, gthan, '&gt;', true);

        return string;
    }"
    _xmlImport "(filename) {
    /*
        Based on the Quick-n-Dirty XML parser at
        http://www.javaworld.com/javatips/jw-javatip128.html
    */
    xmlinput = Sibelius.ReadTextFile(filename, true);
    meidoc = CreateSparseArray();
    TEXT = 1;
    ENTITY = 2;
    OPEN_TAG = 3;
    CLOSE_TAG = 4;
    START_TAG = 5;
    ATTRIBUTE_LVALUE = 6;
    ATTRIBUTE_EQUAL = 9;
    ATTRIBUTE_RVALUE = 10;
    QUOTE = 7;
    IN_TAG = 8;
    SINGLE_TAG = 12;
    COMMENT = 13;
    DONE = 11;
    DOCTYPE = 14;
    PRE = 15;
    CDATA = 16;

    mode = PRE;
    depth = 0;
    c = 0;
    quotec = Chr(34);
    sb = CreateSparseArray();
    etag = CreateSparseArray();
    tagName = '';
    lvalue = false;
    rvalue = false;
    attrs = CreateDictionary();
    st = CreateSparseArray();
    lnum = 1;
    col = 0;
    eol = false;
    parentTag = CreateSparseArray();

    for each line in xmlinput {
        for col = 0 to Length(line) {
            // col will be the character at that position in the line.
            c = CharAt(line, col);
            switch(mode) {
                case(DONE) {
                    //trace('done!');
                    return true;
                }
                // We are between tags collecting text.
                case(TEXT) {
                    //trace('text');
                    switch(c) {
                        case ('<') {
                            st.Push(mode);
                            mode = START_TAG;
                            if (sb.Length > 0) {
                                // something important goes on here...
                                // doc.text(sb.toString());
                                sb.Length = 0;
                            }
                        }
                        case ('&') {
                            st.Push(mode);
                            mode = ENTITY;
                            etag.Length = 0;
                        }
                        default {
                            sb.Push(c);
                        }
                    }
                }
                // we are processing a closing tag: e.g. </foo>
                case (CLOSE_TAG) {
                    //trace('close tag');
                    if (c = '>') {
                        mode = popMode(st);
                        tagName = sb.Join('');
                        sb.Length = 0;
                        depth = depth - 1;
                        p = parentTag.Pop();
                        if (depth = 0) {
                            meidoc.Push(p);
                            mode = DONE;
                            // doc.endElement(tagName);
                        }
                    } else {
                        sb.Push(c);
                    }
                }
                // we are processing CDATA
                case (CDATA) {
                    //trace('cdata');
                    checktag = sb.Join('');
                    if (c = '>' and CharAt(checktag, -1) = ']]') {
                        sb.Length = sb.Length - 2;
                        // doc.text(sb.toString);
                        sb.Length = 0;
                        mode = popMode(st);
                    } else {
                        sb.Push(c);
                    }
                }
                // we are processing a comment.  We are inside
                // the <!-- .... --> looking for the -->.
                case (COMMENT) {
                    //trace('comment');
                    checktag = sb.Join('');
                    if (c = '>' and Substring(checktag, -2) = '--') {
                        sb.Length = 0;
                        mode = popMode(st);
                    } else {
                        sb.Push(c);
                    }
                }
                // We are outside the root tag element
                case (PRE) {
                    //trace('pre');
                    if (c = '<') {
                        mode = TEXT;
                        st.Push(mode);
                        mode = START_TAG;
                    }
                }
                // We are inside one of these <? ... ?>
                // or one of these <!DOCTYPE ... >
                case (DOCTYPE) {
                    //trace('doctype');
                    if (c = '>') {
                        mode = popMode(st);
                        if (mode = TEXT) {
                            mode = PRE;
                        }
                    }
                }
                // we have just seen a < and
                // are wondering what we are looking at
                // <foo>, </foo>, <!-- ... --->, etc.
                case (START_TAG) {
                    //trace('start tag');
                    mode = popMode(st);
                    switch(c) {
                        case ('/') {
                            st.Push(mode);
                            mode = CLOSE_TAG;
                        }
                        case ('?') {
                            mode = DOCTYPE;
                        }
                        default {
                            st.Push(mode);
                            mode = OPEN_TAG;
                            tagName = '';
                            attrs = CreateDictionary();
                            sb.Push(c);
                        }
                    }
                }
                // we are processing an entity, e.g. &lt;, &#187;, etc.
                case (ENTITY) {
                    //trace('entity');
                    if (c = ';') {
                        mode = popMode(st);
                        cent = etag.Join('');
                        etag.Length = 0;
                        switch (cent) {
                            case ('lt') {
                                sb.Push('<');
                            }
                            case ('gt') {
                                sb.Push('>');
                            }
                            case ('amp') {
                                sb.Push('&');
                            }
                            case ('quot') {
                                sb.Push(Chr(34));
                            }
                            case ('apos') {
                                sb.Push(Chr(39));
                            }
                            default {
                                if (CharAt(cent, 0) = '#') {
                                    sb.Push(Substring(cent, 1));
                                } else {
                                    trace('Unknown entity ' & cent & ' at line ' & lnum & ' and col ' & col);
                                }
                            }
                        }
                    } else {
                        etag.Push(c);
                    }
                }
                // we have just seen something like this:
                // <foo a='b '/
                // and are looking for the final >.
                case (SINGLE_TAG) {
                    //trace('single tag');
                    if (tagName = '') {
                        tagName = sb.Join('');
                    }
                    if (c != '>') {
                        trace('Expected > for tag: <' & tagName & '/> at line ' & lnum & ' and col ' & col);
                    }
                    // doc.startElement(tagName, attrs);
                    ent = createEntry(tagName);
                    libmei.setAttributes(ent, attrs);
                    libmei.addChild(parentTag[-1], ent);
                    Self.MEIFlattened.Push(ent);

                    // doc.endElement(tagName);
                    if (depth = 0) {
                        // doc.endDocument();
                        return true;
                    }
                    sb.Length = 0;
                    attrs = CreateDictionary();
                    tagName = '';
                    mode = popMode(st);
                }
                // we are processing something
                // like this <foo ... >.  It could
                // still be a <!-- ... --> or something.
                case (OPEN_TAG) {
                    //trace('open tag');
                    checktag = sb.Join('');
                    switch (c) {
                        case ('>') {
                            if (tagName = '') {
                                tagName = sb.Join('');
                            }
                            ent = createEntry(tagName);
                            libmei.setAttributes(ent, attrs);
                            libmei.addChild(parentTag[-1], ent);
                            parentTag.Push(ent);
                            Self.MEIFlattened.Push(ent);

                            sb.Length = 0;
                            depth = depth + 1;
                            tagName = '';
                            attrs = CreateDictionary();
                            mode = popMode(st);
                        }
                        case ('/') {
                            mode = SINGLE_TAG;
                        }
                        case ('-') {
                            if (checktag = '!-') {
                                //trace('checktag');
                                //trace(checktag);
                                mode = COMMENT;
                            }
                        }
                        case ('[') {
                            if (checktag = '![CDATA') {
                                mode = CDATA;
                                sb.Length = 0;
                            }
                        }
                        case ('E') {
                            if (checktag = '!DOCTYP') {
                                sb.Length = 0;
                                mode = DOCTYPE;
                            }
                        }
                        case (' ') {
                            tagName = sb.Join('');
                            sb.Length = 0;
                            mode = IN_TAG;
                        }
                        default {
                            sb.Push(c);
                        }
                    }
                }
                // We are processing the quoted right-hand side
                // of an element's attribute.
                case (QUOTE) {
                    //trace('quote');
                    switch(c) {
                        case (quotec) {
                            rvalue = sb.Join('');
                            sb.Length = 0;
                            attrs[lvalue] = rvalue;
                            mode = IN_TAG;
                        }
                        // not sure what this does
                        case ('     ') {
                            sb.Push(' ');
                        }
                        case ('&') {
                            st.Push(mode);
                            mode = ENTITY;
                            etag.Length = 0;
                        }
                        default {
                            sb.Push(c);
                        }
                    }
                }
                case (ATTRIBUTE_RVALUE) {
                    //trace('rvalue');
                    switch(c) {
                        case (Chr(34) or Chr(39)) {
                            quotec = c;
                            mode = QUOTE;
                        }
                        case (' ') {
                            ;
                        }
                        default {
                            trace('Error in attribute processing at line ' & lnum & ' col' & col);
                        }
                    }
                }
                case (ATTRIBUTE_LVALUE) {
                    //trace('lvalue');
                    switch (c) {
                        case (' ') {
                            lvalue = sb.Join('');
                            sb.Length = 0;
                            mode = ATTRIBUTE_EQUAL;
                        }
                        case ('=') {
                            lvalue = sb.Join('');
                            sb.Length = 0;
                            mode = ATTRIBUTE_RVALUE;
                        }
                        default {
                            sb.Push(c);
                        }
                    }
                }
                case (ATTRIBUTE_EQUAL) {
                    //trace('equal');
                    switch (c) {
                        case ('=') {
                            mode = ATTRIBUTE_RVALUE;
                        }
                        case (' ') {
                            ;
                        }
                        default {
                            trace('Error in attribute processing at line ' & lnum & ' col' & col);
                        }
                    }
                }
                case (IN_TAG) {
                    //trace(parentTag);
                    //trace('in tag');
                    switch(c) {
                        case ('>') {
                            mode = popMode(st);
                            // doc.startElement(tagname, attrs);
                            ent = createEntry(tagName);
                            libmei.setAttributes(ent, attrs);
                            if (parentTag.Length > 0) {
                                libmei.addChild(parentTag[-1], ent);
                            }
                            parentTag.Push(ent);
                            Self.MEIFlattened.Push(ent);

                            depth = depth + 1;
                            tagName = '';
                            attrs = CreateDictionary();
                        }
                        case ('/') {
                            mode = SINGLE_TAG;
                        }
                        case (' ') {
                            ;
                        }
                        default {
                            mode = ATTRIBUTE_LVALUE;
                            sb.Push(c);
                        }
                    }
                }
            }
        }
        lnum = lnum + 1;
    }
    return meidoc;
}"

generateRandomID "() {
//$module(ExportGenerators.mss)
    id = Self._property:MEIID + 1;
    Self._property:MEIID = id;
    id = 'm-' & id;
    return id;
}"
}
"""

AUTHORS = "Andrew Hankinson, Alastair Porter, and Others"

FILE_TEMPLATE = """
{{
    {license}
    {classes}
    {extras}
}}
"""


def create(schema, outdir):
    lg.debug("Begin ManuScript Output")
    __create_manuscript_classes(schema, outdir)

    lg.debug("Success!")


def __create_manuscript_classes(schema, outdir):
    output = ""
    for module, elements in sorted(schema.element_structure.items()):
        if not elements:
            continue

        for element, atgroups in sorted(elements.items()):
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

    fmi = open(os.path.join(outdir, 'libmei.plg'), 'w')
    fmi.write(fileoutput)
    fmi.close()
    return True
