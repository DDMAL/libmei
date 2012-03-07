
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


class back_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "back")
    # <back>

class div_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "div")
    # <div>

class front_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "front")
    # <front>

class head_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "head")
    # <head>

class item_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "item")
    # <item>

class l_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "l")
    # <l>

class lg_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "lg")
    # <lg>

class list_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "list")
    # <list>

class quote_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "quote")
    # <quote>
