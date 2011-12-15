
"""
    Copyright (c) 2011 Andrew Hankinson
    
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


class cc_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "cc")

class chan_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "chan")

class chanPr_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "chanPr")

class cue_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "cue")

class hex_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "hex")

class marker_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "marker")

class metaText_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "metaText")

class midi_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "midi")

class noteOff_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "noteOff")

class noteOn_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "noteOn")

class port_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "port")

class prog_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "prog")

class seqNum_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "seqNum")

class trkName_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "trkName")

class vel_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "vel")

