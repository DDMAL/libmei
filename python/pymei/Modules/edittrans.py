
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


class abbr_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "abbr")
    # <abbr>

class add_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "add")
    # <add>

class choice_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "choice")
    # <choice>

class corr_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "corr")
    # <corr>

class cpMark_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "cpMark")
    # <cpMark>

class damage_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "damage")
    # <damage>

class del_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "del")
    # <del>

class expan_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "expan")
    # <expan>

class gap_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "gap")
    # <gap>

class handShift_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "handShift")
    # <handShift>

class orig_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "orig")
    # <orig>

class reg_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "reg")
    # <reg>

class restore_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "restore")
    # <restore>

class sic_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "sic")
    # <sic>

class subst_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "subst")
    # <subst>

class supplied_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "supplied")
    # <supplied>

class unclear_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "unclear")
    # <unclear>

