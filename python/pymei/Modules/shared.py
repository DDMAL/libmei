
"""
    Copyright (c) 2012 Andrew Hankinson
    
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
"""

from pymei import MeiElement


class abbr_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "abbr")
    # <abbr>

class accid_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "accid")
    # <accid>

class actor_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "actor")
    # <actor>

class addrLine_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "addrLine")
    # <addrLine>

class address_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "address")
    # <address>

class annot_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "annot")
    # <annot>

class artic_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "artic")
    # <artic>

class barLine_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "barLine")
    # <barLine>

class bibl_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "bibl")
    # <bibl>

class body_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "body")
    # <body>

class caption_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "caption")
    # <caption>

class castGrp_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "castGrp")
    # <castGrp>

class castItem_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "castItem")
    # <castItem>

class castList_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "castList")
    # <castList>

class chord_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "chord")
    # <chord>

class clef_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "clef")
    # <clef>

class clefGrp_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "clefGrp")
    # <clefGrp>

class custos_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "custos")
    # <custos>

class date_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "date")
    # <date>

class dir_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "dir")
    # <dir>

class dot_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "dot")
    # <dot>

class dynam_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "dynam")
    # <dynam>

class edition_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "edition")
    # <edition>

class ending_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "ending")
    # <ending>

class expan_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "expan")
    # <expan>

class expansion_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "expansion")
    # <expansion>

class fw_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "fw")
    # <fw>

class group_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "group")
    # <group>

class grpSym_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "grpSym")
    # <grpSym>

class identifier_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "identifier")
    # <identifier>

class incip_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "incip")
    # <incip>

class instrDef_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "instrDef")
    # <instrDef>

class instrGrp_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "instrGrp")
    # <instrGrp>

class keyAccid_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "keyAccid")
    # <keyAccid>

class keySig_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "keySig")
    # <keySig>

class label_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "label")
    # <label>

class layer_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "layer")
    # <layer>

class layerDef_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "layerDef")
    # <layerDef>

class lb_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "lb")
    # <lb>

class mdiv_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "mdiv")
    # <mdiv>

class mei_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "mei")
    # <mei>

class music_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "music")
    # <music>

class name_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "name")
    # <name>

class note_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "note")
    def foo(self):
        print "bar"


class num_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "num")
    # <num>

class p_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "p")
    # <p>

class pad_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "pad")
    # <pad>

class part_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "part")
    # <part>

class parts_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "parts")
    # <parts>

class pb_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "pb")
    # <pb>

class pgDesc_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "pgDesc")
    # <pgDesc>

class pgFoot_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "pgFoot")
    # <pgFoot>

class pgFoot2_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "pgFoot2")
    # <pgFoot2>

class pgHead_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "pgHead")
    # <pgHead>

class pgHead2_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "pgHead2")
    # <pgHead2>

class phrase_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "phrase")
    # <phrase>

class rend_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "rend")
    # <rend>

class repository_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "repository")
    # <repository>

class rest_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "rest")
    # <rest>

class role_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "role")
    # <role>

class roleDesc_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "roleDesc")
    # <roleDesc>

class sb_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "sb")
    # <sb>

class score_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "score")
    # <score>

class scoreDef_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "scoreDef")
    # <scoreDef>

class section_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "section")
    # <section>

class space_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "space")
    # <space>

class stack_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "stack")
    # <stack>

class staff_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "staff")
    # <staff>

class staffDef_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "staffDef")
    # <staffDef>

class staffGrp_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "staffGrp")
    # <staffGrp>

class syl_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "syl")
    # <syl>

class tempo_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "tempo")
    # <tempo>

class title_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "title")
    # <title>

class titlePage_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "titlePage")
    # <titlePage>

