
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


class fig_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "fig")
    # <fig>

class figDesc_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "figDesc")
    # <figDesc>

class graphic_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "graphic")
    # <graphic>

class table_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "table")
    # <table>

class td_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "td")
    # <td>

class th_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "th")
    # <th>

class tr_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "tr")
    # <tr>

