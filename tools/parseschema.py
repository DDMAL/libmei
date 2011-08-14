from lxml import etree
import os
import sys
import textwrap
import string
from optparse import OptionParser

import pdb


tei_ns = {"tei":"http://www.tei-c.org/ns/1.0"}
tei_rng_ns = {"tei":"http://www.tei-c.org/ns/1.0","rng":"http://relaxng.org/ns/structure/1.0"}

LICENSE = """/*
    Copyright (c) 2011 Jamie Klassen, Alastair Porter, Mahtab Ghamsari-Esfahani, Andrew Hankinson

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
    """


def modules(file):
    tree = etree.parse(file)
    modules = []
    for element in tree.xpath('//tei:moduleSpec',namespaces=tei_ns):
        modules.append(element.get("ident"))
    
    for m in modules:
        print m
        for element in tree.xpath('//tei:elementSpec[@module=$name]',name=m,namespaces=tei_ns):
            print " ", element.get("ident")

def attributes(file):
    tree = etree.parse(file)
    attributes = []
    for element in tree.xpath('//tei:classSpec[@type=$name]',name="atts",namespaces=tei_ns):
        attributes.append(element)
    
    for a in attributes:
        print a.get("ident")
        for result in a.xpath('.//tei:memberOf',namespaces=tei_ns):
            print " ", result.get("key")
        
def elements(file):
    tree = etree.parse(file)
    elements = []
    for element in tree.xpath('//tei:elementSpec',namespaces=tei_ns):
        elements.append(element)
    
    for e in elements:
        print e.get("ident")
        for result in e.xpath('.//tei:memberOf',namespaces=tei_ns):
            print " ", result.get("key")

def cleanup(attrs,elems):
    found = False
    for a in attrs:
        a[-1] = list(set(a[-1]))
        if len(a[-1])==1:
            found = True
            for att in attrs:
                for i in att[-1]:
                    if i==a[0].get("ident"):
                        for attr in attrs:
                            if attr[0].get("ident")==a[-1][0]:
                                #subsume the element, keep track of this
                                attr[len(attr)-2].append(i)
                                for attribute in attrs:
                                    if attribute[0].get("ident")==i:
                                        for x in attribute[len(attribute)-2]:
                                            attr[len(attr)-2].append(x)
                        att[-1].remove(i)
                        if att[-1].count(a[-1][0])==0:
                            att[-1].append(a[-1][0])                
            attrs.remove(a)
        elif len(a[-1])==0:
            linkedto = False
            for att in attrs:
                for i in att[-1]:
                    if i==a[0].get("ident"):
                        linkedto = True
            if not linkedto:
                found = True
                attrs.remove(a)
        for at in attrs:
            if set(sorted(at[-1]))==set(sorted(a[-1])) and at[0].get("ident") != a[0].get("ident"):
                found = True
                print at[0].get("ident"), "same as", a[0].get("ident")
                a[len(a)-2].append(at[0].get("ident"))
                attrs.remove(at)
    if found:
        cleanup(attrs,elems)
        
    #if the sets of children of two classes are identical, merge them!

class module_(object):
    name = None
    elements = []
    attrclasses = []
    datatypes = []
    models = []
    def __init__(self,nname):
        self.name = nname
        self.attrclasses = []
        self.elements = []
        self.datatypes = []
        self.models = []

class datatype(object):
    name = None
    desc = None
    values = []
    def __init__(self,nname):
        self.name = nname
        self.desc = None
        self.values = []
    
class attrclass(object):
    name = None
    desc = None
    attrclasses = []
    attributes = []
    elements = []
    parents = None
    def __init__(self,nname):
        self.name = nname
        self.elements = []
        self.attributes = []
        self.attrclasses = []
        self.parents = 0
    
class model(object):
    name = None
    models = []
    elements = []
    def __init__(self,nname):
        self.name = nname
        self.elements = []
    
class macro(object):
    pass
    
class attribute(object):
    name = None
    desc = None
    usage = None
    datatype = None
    values = []
    def __init__(self,nname):
        self.name = nname
        self.datatype = None
        self.values = []
    
class element(object):
    name = None
    desc = None
    attributes = []
    constructargs = []
    def __init__(self,nname):
        self.name = nname
        self.attributes = []
        self.constructargs = []

def trivial_elements(a,attrclasses,elements):
    if len(a[1].elements)==1 and len(a[1].attrclasses)==0:
        print "found trivial attribute class", a[1].name+". Merging with child element", a[1].elements[0][1].name
        el = None
        for e in elements:
            if e == a[1].elements[0]:
                el = e
        el[1].attributes.extend(list(a[1].attributes))
        for at in attrclasses:
            if a in at[1].attrclasses:
                at[1].attrclasses.remove(a)
                if el not in at[1].elements:
                    at[1].elements.append(el)
        attrclasses.remove(a)
        return True
    else:
        return False
            
def trivial_classes(a,attrclasses):
    if len(a[1].attrclasses)==1 and len(a[1].elements)==0:
        print "found trivial attribute class", a[1].name+". Merging with child class", a[1].attrclasses[0][1].name
        att = None
        for at in attrclasses:
            if at == a[1].attrclasses[0]:
                att = at
        att[1].attributes.extend(list(a[1].attributes))
        for attr in attrclasses:
            if a in attr[1].attrclasses:
                attr[1].attrclasses.remove(a)
                if att not in attr[1].attrclasses:
                    attr[1].attrclasses.append(att)
        attrclasses.remove(a)
        return True
    else:
        return False

def identical_classes(a,attrclasses):
    for at in attrclasses:
        if set([att[1].name for att in a[1].attrclasses])==set([att[1].name for att in at[1].attrclasses]) and a != at and len(a[1].attrclasses) != 0:
            print at[1].name, "same as", a[1].name
            aname = ""
            for i in a[1].name.split("."):
                if i != a[1].name.split(".")[0]:
                    aname += "."+i
            at[1].name += aname
            at[1].elements.extend(a[1].elements)
            at[1].attributes.extend(a[1].attributes)
            for att in attrclasses:
                for index, item in enumerate(att[1].attrclasses):
                    if item[1].name==a[1].name:
                        att[1].attrclasses[index] = at
            attrclasses.remove(a)
            return True
        elif set([el[1].name for el in a[1].elements])==set([el[1].name for el in at[1].elements]) and a != at and len(a[1].elements) != 0:
            print at[1].name, "same as", a[1].name
            aname = ""
            for i in a[1].name.split("."):
                if i != a[1].name.split(".")[0]:
                    aname += "."+i
            at[1].name += aname
            at[1].attributes.extend(a[1].attributes)
            at[1].elements.extend(a[1].elements)
            for att in attrclasses:
                for index, item in enumerate(att[1].attrclasses):
                    if item[1].name==a[1].name:
                        att[1].attrclasses[index] = at
            attrclasses.remove(a)
            return True
        else:
            return False

def passdown(attribute):
    for at in attribute:
        for a in at[1].attrclasses:
            a[1].attributes.extend(list(at[1].attributes))
            a[1].elements.extend(list(at[1].elements))
            passdown(a[1].attrclasses)
        for e in at[1].elements:
            e[1].constructargs.extend(list(at[1].attributes))

def classcleanup(attrclasses,elements):
    for a in attrclasses:
        if trivial_elements(a,attrclasses,elements):
            classcleanup(attrclasses,elements)
        elif trivial_classes(a,attrclasses):
            classcleanup(attrclasses,elements)
        elif identical_classes(a,attrclasses):
            classcleanup(attrclasses,elements)

def classes(file, outputdir):
    modules = []
    models = []
    attrclasses = []
    elements = []
    datatypes = []
    
    mei_things = {
        'modules': modules,
        'models': models,
        'attrclasses': attrclasses,
        'elements': elements,
        'datatypes': datatypes
    }
    
    tree = etree.parse(file)
    
    #find datatypes
    for dt in tree.xpath('//tei:macroSpec[@type=$data]',data="dt",namespaces=tei_ns):
        #print "parsing", dt.get("ident")
        dtype = datatype(dt.get("ident"))
        #dtype.content = dt.xpath('.//rng:data',namespaces=tei_rng_ns)[0]
        dtype.desc = dt.xpath('.//tei:desc',namespaces=tei_ns)[0]
        datatypes.append([dt,dtype])
    
    #find models
    for modl in tree.xpath('//tei:classSpec[@type=$model]',model="model",namespaces=tei_ns):
        mod = model(modl.get("ident"))
        models.append([modl,mod])

    #link together models
    for modl in models:
        for memberof in modl[0].xpath('./tei:classes/tei:memberOf',namespaces=tei_ns):
            for mod in attrclasses:
                if mod[1].name==memberof.get("key"):
                    at[1].models.append(attr)

    #find attrclasses and their attributes, assigning datatypes
    for attr in tree.xpath('//tei:classSpec[@type=$name2]',name2="atts",namespaces=tei_ns):
        #print "parsing", attr.get("ident")
        at = attrclass(attr.get("ident"))
        at.desc = attr.xpath('.//tei:desc/text()',namespaces=tei_ns)[0]
        if len(attr.xpath('.//tei:desc/text()',namespaces=tei_ns)) > 0:
            at.desc = attr.xpath('.//tei:desc/text()',namespaces=tei_ns)[0]
        for attdef in attr.xpath('./tei:attList/tei:attDef',namespaces=tei_ns):
            #print "    has attribute", attdef.get("ident")
            att = attribute(attdef.get("ident"))
            att.usage = attdef.get("usage")
            att.desc = attdef.xpath('.//tei:desc/text()',namespaces=tei_ns)[0]
            dt = ""
            if len(attdef.xpath('./tei:datatype/rng:ref',namespaces=tei_rng_ns)) > 0:
                dt = attdef.xpath('./tei:datatype/rng:ref',namespaces=tei_rng_ns)[0].get("name")
                dt = "".join(dt.split(".")[1:])
            elif len(attdef.xpath('./tei:datatype/rng:data',namespaces=tei_rng_ns)) > 0:
                dt = attdef.xpath('./tei:datatype/rng:data',namespaces=tei_rng_ns)[0].get("type")
            dtype = datatype(dt)
            att.datatype = dtype
            if len(attdef.xpath('./tei:valList',namespaces=tei_ns)) > 0:
                vallist = attdef.xpath('./tei:valList',namespaces=tei_ns)[0]
                for valitem in vallist.xpath('./tei:valItem',namespaces=tei_ns):
                    att.values.append(valitem.get("ident"))
            at.attributes.append([attdef,att])
        attrclasses.append([attr,at])
        
    #find elements and their attributes, put them into attrclasses and models
    for elem in tree.xpath('//tei:elementSpec',namespaces=tei_ns):
        #print "parsing", elem.get("ident")
        el = element(elem.get("ident"))
        if len(elem.xpath('.//tei:desc/text()',namespaces=tei_ns)) > 0:
            el.desc = elem.xpath('.//tei:desc/text()',namespaces=tei_ns)[0]
        for attdef in elem.xpath('./tei:attList/tei:attDef',namespaces=tei_ns):
            att = attribute(attdef.get("ident"))
            att.usage = attdef.get("usage")
            att.desc = attdef.xpath('.//tei:desc/text()',namespaces=tei_ns)[0]
            dt = ""
            if len(attdef.xpath('./tei:datatype/rng:ref',namespaces=tei_rng_ns)) > 0:
                dt = attdef.xpath('./tei:datatype/rng:ref',namespaces=tei_rng_ns)[0].get("name")
                dt = "".join(dt.split(".")[1:])
            elif len(attdef.xpath('./tei:datatype/rng:data',namespaces=tei_rng_ns)) > 0:
                dt = attdef.xpath('./tei:datatype/rng:data',namespaces=tei_rng_ns)[0].get("type")
            dtype = datatype(dt)
            att.datatype = dtype
            if len(attdef.xpath('./tei:valList',namespaces=tei_ns)) > 0:
                vallist = attdef.xpath('./tei:valList',namespaces=tei_ns)[0]
                for valitem in vallist.xpath('./tei:valItem',namespaces=tei_ns):
                    att.values.append(valitem.get("ident"))
            el.attributes.append([attdef,att])
        elements.append([elem,el])
        index = elements.index([elem,el])
        for memberof in elem.xpath('.//tei:memberOf',namespaces=tei_ns):
            for at in attrclasses:
                if at[1].name==memberof.get("key"):
                    at[1].elements.append(elements[index])
            for md in models:
                if md[1].name==memberof.get("key"):
                    md[1].elements.append([elem,el])
    
    #link together attrclasses
    for attr in attrclasses:
        #print "linking", attr[1].name
        for memberof in attr[0].xpath('./tei:classes/tei:memberOf',namespaces=tei_ns):
            #print "memberOf", memberof.get("key")
            for at in attrclasses:
                if at[1].name==memberof.get("key"):
                    #print "    linked to", at[1].name
                    at[1].attrclasses.append(attr)
    
    #clean up the attrclass/element relationship
    classcleanup(attrclasses,elements)
    
    #find modules
    for mod in tree.xpath('//tei:moduleSpec',namespaces=tei_ns):
        modul = module_(mod.get("ident"))
        modules.append(modul)

    #put attrclasses, their elements, attributes and datatypes into modules
    for a in attrclasses:
        for m in modules:
            if m.name==a[0].get("module"):
                m.attrclasses.append(a[1])
    
    for e in elements:
        for m in modules:
            if m.name==e[0].get("module"):
                m.elements.append(e[1])
    
    for mdl in tree.xpath('//tei:classSpec[@type=$name2]',name2="model",namespaces=tei_ns):
        #print "parsing", mdl.get("ident")
        modl = model(mdl.get("ident"))
        modl.desc = mdl.xpath('.//tei:desc',namespaces=tei_ns)[0]
        models.append([mdl,modl])
        for m in modules:
            if m.name==mdl.get("module"):
                m.models.append(modl)
                
    for mdl in models:
        #print "linking", mdl[1].name
        for memberof in mdl[0].xpath('./tei:classes/tei:memberOf',namespaces=tei_ns):
            for m in models:
                if m[1].name==memberof.get("key"):
                    m[1].models.append(mdl[1])
    
    #won't bother about macros for the time being
    
    passdown(attrclasses)
    for m in modules:
        _create_mixins_module(m, mei_things, outputdir)
        _create_classes_module(m, mei_things, outputdir)


def _create_mixins_module(m, mt, outdir):
    name = m.name.split(".")[-1]
    
    modules = mt['modules']
    models = mt['models']
    attrclasses = mt['attrclasses']
    elements = mt['elements']
    datatypes = mt['datatypes']
    
    if not m.attrclasses:
        return
    
    output = ""
    
    output += "{0}\n".format(LICENSE)
    output += "#ifndef {0}MIXINS_H_\n".format(name.upper())
    output += "#define {0}MIXINS_H_\n\n".format(name.upper())
    output += "#include \"meielement.h\"\n"
    output += "#include \"exceptions.h\"\n"
    
    includes = []
    
    for a in m.attrclasses:
        for mod in modules:
            for at in mod.attrclasses:
                if a in [el[1] for el in at.attrclasses]:
                    if mod != m:
                        includes.append(mod.name.split(".")[-1]+"mixins.h")
                    a.parents += 1
    for i in set(includes):
        output += "#include \"{0}\"\n".format(i)
    output += "using namespace std;\n\n"
    
    #still need to figure out a mapping between datatypes and c++ types for module MEI... which also needs to be renamed
    m.attrclasses.sort(key=lambda attrclass: attrclass.parents)         
    for a in m.attrclasses:
        aname = "{0}MixIn".format("".join(string.capwords(a.name,".").split(".")[1:]))
        if a.desc != None:
            output += "/** \\brief   "+"\n *           ".join(textwrap.wrap(((a.desc).encode('utf-8')),80))+"\n */\n"
        output += "struct {0}".format(aname)
        # linkedto = False
        # for at in m.attrclasses:
        #     if a in [att[1] for att in at.attrclasses]:
        #         linkedto = True
        #         break
        # if linkedto:
        #     memberof = []
        #     output += ": "
        #     for at in m.attrclasses:
        #         if a in [att[1] for att in at.attrclasses]:
        #             atname = "".join(string.capwords(at.name,".").split(".")[1:])+"MixIn"
        #             memberof.append(atname)
        #     for cl in memberof:
        #         if cl == memberof[-1]:
        #             output += "public virtual {0} ".format(cl)
        #         else:
        #             output += "public virtual {0}, ".format(cl)
        # else:
        #     output += ": public virtual MeiElement "
        
        output += " {\n"
        
        output += """
    {an}(BaseMeiElement *b);\n\n""".format(an = aname)
        
        for attr in [at[1] for at in a.attributes]:
            funcname = string.capwords(attr.name,".").replace(".","").replace(":","")
            typename = "string"
            t2name = "MeiAttribute*"
            
            # get value
            getter = "get{0}Value".format(funcname)
            output += "    {0} {1}() throw (AttributeNotFoundException);\n".format(typename, getter)
            
            # get attr
            getter = "get{0}".format(funcname)
            output += "    {0} {1}() throw (AttributeNotFoundException);\n".format(t2name, getter)
            
            # set
            setter = "set{0}".format(funcname)
            output += "    void {0}({1} _{2});\n".format(setter, typename, funcname.lower())
            
            # has
            has = "has{0}".format(funcname)
            output += "    bool {0}();\n".format(has, )
            output += "\n"
        # output += "\n    protected:\n"
        # output += "        {0}();\n".format(aname)
        # output += "        virtual ~{0}() {{}};\n".format(aname)
        
        output += "\n    private:\n"
        output += "         BaseMeiElement *b;\n"
        output += "};\n\n"
        
    output += "#endif // {0}MIXINS_H_".format(name.upper())
    
    # write the file
    fh = open(os.path.join(outdir, "{0}mixins.h".format(name)),"w")
    fh.write(output)
    fh.close()
    
    output = ""
    
    output += "#include \"{0}mixins.h\"\n".format(name)
    output += "using namespace std;\n"
    
    for a in m.attrclasses:
        aname = "".join(string.capwords(a.name,".").split(".")[1:])+"MixIn"
        output += "\n{0}::{0}(BaseMeiElement *b) ".format(aname)
        output += "{\n"
        output += "    this->b = b;\n"
        output += "};"
        
        #getters & setters
        for attr in [at[1] for at in a.attributes]:
            attrname = attr.name.replace(".","").replace(":","")
            funcname = string.capwords(attr.name,".").replace(".","").replace(":","")
            typename = "string"
            
            #getter
            t_args = {
                "tn": "string",
                "t2": "MeiAttribute*",
                "an": aname,
                "fn": funcname,
                "at": attrname, # attribute name with no periods
                "al": attr.name # raw attribute name
            }
            
            #value getter
            output += """
{tn} {an}::get{fn}Value() throw(AttributeNotFoundException) {{
    if (!b->m_Base.hasAttribute("{al}")) {{
        throw AttributeNotFoundException("{al}");
    }}
    return b->m_Base.getAttributeValue("{al}");
}};
            """.format(**t_args)

            #attr getter
            output += """
{t2} {an}::get{fn}() throw(AttributeNotFoundException) {{
    if (!b->m_Base.hasAttribute("{al}")) {{
        throw AttributeNotFoundException("{al}");
    }}
    return b->m_Base.getAttribute("{al}");
}};
            """.format(**t_args)

            
            #setter
            output += """
void {an}::set{fn}({tn} _{at}) {{
    if(!b->m_Base.hasAttribute("{al}")) {{
        MeiAttribute * a = new MeiAttribute("{al}", _{at});
        b->m_Base.addAttribute(a);
    }}
}};
            """.format(**t_args)
            
            #has
            output += """
bool {an}::has{fn}() {{
    return b->m_Base.hasAttribute("{al}");
}};
            """.format(**t_args)
            
    
    fc = open(os.path.join(outdir, "{0}mixins.cpp".format(name)),"w")
    fc.write(output)
    fc.close()
        
def _create_classes_module(m, mt, outdir):
    name = m.name.split(".")[-1]
    
    modules = mt['modules']
    models = mt['models']
    attrclasses = mt['attrclasses']
    elements = mt['elements']
    datatypes = mt['datatypes']
    
    output = ""
    
    # break out early. Avoids having to check this later.
    if not m.elements:
        return
    
    includes = []
    for e in m.elements:
        for mod in modules:
            for at in mod.attrclasses:
                if e in [el[1] for el in at.elements]:
                    includes.append(mod.name.split(".")[-1]+"mixins.h")
                    
    #
    #   Create the header file
    #
    output += "{0}\n".format(LICENSE)
    output += "#ifndef {0}_H_\n".format(name.upper())
    output += "#define {0}_H_\n\n".format(name.upper())
    
    for i in set(includes):
        output += "#include \"{0}\"\n".format(i)
        
    output += "using namespace std;\n"
    
    for e in m.elements:
        memberof = []
        if e.desc:
            output += "/** \\brief  " + "\n *          ".join(textwrap.wrap((e.desc).encode('utf-8').split(".")[0],80)) + "."
            if len(e.desc.encode('utf-8').split('.')) > 1:
                if len(e.desc.encode('utf-8').split('.')[1]) > 0:
                    output += "\n *\n * " + "          \n *          ".join(textwrap.wrap(textwrap.dedent(" ".join(".".join(e.desc.encode('utf-8').split('.')[1:]).split())+"."),80))
            output += "\n */\n"
        
        # element name
        ename = e.name[0].upper() + e.name[1:]
        
        classdetail = []
        
        linkedto = False
        
        for mod in modules:
            for at in mod.attrclasses:
                if e in [el[1] for el in at.elements]:
                    linkedto = True
                    break
                    
        for mod in modules:
            for at in mod.attrclasses:
                if e in [el[1] for el in at.elements]:
                    atname = "".join(string.capwords(at.name,".").split(".")[1:]) + "MixIn"
                    memberof.append([atname,at])
        for cl in memberof:
            classdetail.append("{0}".format(cl[0]))
        
        output += "struct {0} : public BaseMeiElement".format(ename)
        output += "{\n"
        output += "    {0}();\n".format(ename)
        output += "    virtual ~{0}() {{}};".format(ename)
        output += "\n"
        
        for attr in [at[1] for at in e.attributes]:
            funcname = string.capwords(attr.name,".").replace(".","").replace(":","")
            typename = "string"
            t2name = "MeiAttribute*"
            
            getter = "get{0}Value".format(funcname)
            output += "\n    {0} {1}() throw (AttributeNotFoundException);\n".format(typename, getter)
            
            g2 = "get{0}".format(funcname)
            output += "\n    {0} {1}() throw (AttributeNotFoundException);\n".format(t2name, g2)
            
            setter = "set{0}".format(funcname)
            output += "    void {0}({1} _{2});\n".format(setter, typename, funcname.lower())
            
            has = "has{0}".format(funcname)
            output += "    bool {0}();\n".format(has, typename, funcname.lower())
            
        
        for mixin in classdetail:
            output += "\n    {0}    m_{1};".format(mixin, mixin.replace("MixIn", ""))
        
        output += "\n    private:\n"
        output += "        //REGISTER_DECLARATION({0});\n".format(ename)
        output += "};\n\n"
        
    output += "#endif // {0}_H_".format(name.upper())
    
    # write the file
    fh = open(os.path.join(outdir, "{0}.h".format(name)),"w")
    fh.write(output)
    fh.close()
    
    #
    #  Create the implementation file
    #
    
    output = ""
    output += "#include \"{0}.h\"\n".format(name)
    output += "using namespace std;\n"
    
    for e in m.elements:
        ename = e.name[0].upper() + e.name[1:]
        
        constructorstuff = []
        memberof = []
        # for i in e.constructargs:
        #     if i[1].usage=="req":
        #         constructorstuff.append(i)
        # 
        # for j in constructorstuff:
        #     if j == constructorstuff[-1]:
        #         output += "string _{0}".format(j[1].name.replace(".","").replace(":",""))
        #     else:
        #         output += "string _{0}, ".format(j[1].name.replace(".","").replace(":",""))
        
        classdetail = []
        
        linkedto = False
        
        for mod in modules:
            for at in mod.attrclasses:
                if e in [el[1] for el in at.elements]:
                    linkedto = True
                    break
                    
        for mod in modules:
            for at in mod.attrclasses:
                if e in [el[1] for el in at.elements]:
                    atname = "".join(string.capwords(at.name,".").split(".")[1:]) + "MixIn"
                    memberof.append([atname,at])
        for cl in memberof:
            if cl[0] not in classdetail:
                classdetail.append("{0}".format(cl[0]))
        
        # pdb.set_trace()
        #default constructor
        output += "\n{0}::{0}() : ".format(ename)
        
        column_line = ""
        for c in classdetail:
            column_line += "m_{0}(this)".format(c.replace("MixIn", ""))
            if c != classdetail[-1]:
                column_line += ", "
            print len(column_line)
            if len(column_line) >= 80:
                column_line += "\n"
                output += column_line
                column_line = ""
                
        output += column_line
        output += "{\n"
        output += "    m_Base.setName(\"{0}\");\n".format(e.name)
        output += "};\n"
        
        # if len(constructorstuff) > 0:
        #     output += "throw (AttributeNotFoundException) "
        
        # output += ": MeiElement(node) {\n"
        
        # for attr in constructorstuff:
        #     attrname = attr[1].name.replace(".","").replace(":","")
        #     funcname = string.capwords(attr[1].name,".").replace(".","").replace(":","")
        #     output += "    const xmlChar* {0}attr = xmlGetProp(node, (const xmlChar*)\"{1}\");\n".format(attrname,attr[1].name)
        #     output += "    if ({0}attr) ".format(attrname)
        #     output += "    {\n"
        #     output += "        set{0}((const char*){1}attr);\n".format(funcname,attrname)
        #     output += "    } else {\n"
        #     output += "        throw AttributeNotFoundException(\"{0}\");\n".format(attr[1].name)
        #     output += "    }\n"
        # output += "}\n"
        
        output += "//REGISTER_DEFINITION({0}, \"{1}\");\n".format(ename,e.name)
        
        #getters & setters
        for attr in [at[1] for at in e.attributes]:
            attrname = attr.name.replace(".","").replace(":","")
            funcname = string.capwords(attr.name,".").replace(".","").replace(":","")
            
            t_args = {
                "tn": "string",
                "t2": "MeiAttribute*",
                "an": ename,
                "fn": funcname,
                "at": attrname, # attribute name with no periods
                "al": attr.name # raw attribute name
            }
            
            #value getter
            output += """
{tn} {an}::get{fn}Value() throw(AttributeNotFoundException) {{
    if (!m_Base.hasAttribute("{al}")) {{
        throw AttributeNotFoundException("{al}");
    }}
    return m_Base.getAttributeValue("{al}");
}};
            """.format(**t_args)

            #attr getter
            output += """
{t2} {an}::get{fn}() throw(AttributeNotFoundException) {{
    if (!m_Base.hasAttribute("{al}")) {{
        throw AttributeNotFoundException("{al}");
    }}
    return m_Base.getAttribute("{al}");
}};
            """.format(**t_args)

            
            #setter
            output += """
void {an}::set{fn}({tn} _{at}) {{
    if(!m_Base.hasAttribute("{al}")) {{
        MeiAttribute * a = new MeiAttribute("{al}", _{at});
        m_Base.addAttribute(a);
    }}
}};
            """.format(**t_args)
            
            #has
            output += """
bool {an}::has{fn}() {{
    return m_Base.hasAttribute("{al}");
}};
            """.format(**t_args)
            
    fc = open(os.path.join(outdir, "{0}.cpp".format(name)),"w")
    fc.write(output)
    fc.close()

def cleanupdir(o):
    for dp, dn, fn in os.walk(o):
        for f in fn:
            os.remove(os.path.join(dp, f))
    print "Cleaned!"
    
def main(*args, **kw):
    m = kw['m']
    f = kw['f']
    o = kw['o']
    print args
    if m=="modules":
        modules(f)
    elif m=="attributes":
        attributes(f)
    elif m=="elements":
        elements(f)
    elif m=="graph":
        graph(f)
    elif m=="elemgraph":
        elemgraph(f)
    elif m=="classes":
        classes(f, o)
    elif m=="cleanup":
        cleanupdir(o)

if __name__=="__main__":
    usage = "%prog odd_schema method"
    p = OptionParser()
    (options, args) = p.parse_args()
    
    # output_dir = os.path.join(os.getcwd(), "autogen")
    output_dir = "/Volumes/Eomer/ahankins/Documents/code/git/libmei/src"
    if not os.path.exists(output_dir):
        os.mkdir(output_dir)
    
    a = {
        'f': args[0],
        'm': args[1],
        'o': output_dir
    }
    
    main(**a)