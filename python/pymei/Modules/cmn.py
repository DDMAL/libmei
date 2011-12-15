
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


class arpeg_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "arpeg")

class bTrem_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "bTrem")

class beam_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "beam")

class beamSpan_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "beamSpan")

class beatRpt_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "beatRpt")

class bend_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "bend")

class breath_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "breath")

class fTrem_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "fTrem")

class fermata_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "fermata")

class gliss_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "gliss")

class hairpin_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "hairpin")

class halfmRpt_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "halfmRpt")

class harpPedal_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "harpPedal")

class mRest_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "mRest")

class mRpt_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "mRpt")

class mRpt2_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "mRpt2")

class mSpace_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "mSpace")

class measure_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "measure")

class multiRest_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "multiRest")

class multiRpt_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "multiRpt")

class octave_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "octave")

class ossia_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "ossia")

class pedal_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "pedal")

class reh_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "reh")

class slur_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "slur")

class tie_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "tie")

class tuplet_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "tuplet")

class tupletSpan_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "tupletSpan")

