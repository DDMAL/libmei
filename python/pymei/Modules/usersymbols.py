
"""
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
"""

from pymei import MeiElement


class anchoredText_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "anchoredText")
    # <anchoredText>

class curve_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "curve")
    # <curve>

class line_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "line")
    # <line>

class mapping_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "mapping")
    # <mapping>

class propName_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "propName")
    # <propName>

class propValue_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "propValue")
    # <propValue>

class symName_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "symName")
    # <symName>

class symProp_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "symProp")
    # <symProp>

class symbol_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "symbol")
    # <symbol>

class symbolDef_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "symbolDef")
    # <symbolDef>

class symbolTable_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "symbolTable")
    # <symbolTable>

