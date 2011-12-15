    # Copyright (c) 2011 Raffaele Viglianti, Andrew Hankinson
    
    # Permission is hereby granted, free of charge, to any person obtaining
    # a copy of this software and associated documentation files (the
    # "Software"), to deal in the Software without restriction, including
    # without limitation the rights to use, copy, modify, merge, publish,
    # distribute, sublicense, and/or sell copies of the Software, and to
    # permit persons to whom the Software is furnished to do so, subject to
    # the following conditions:
    
    # The above copyright notice and this permission notice shall be
    # included in all copies or substantial portions of the Software.
    
    # THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    # EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    # MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    # NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    # LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    # OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    # WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

from pymei import MeiElement, MeiAttributeList, MeiAttribute
from pymei.Helpers import time, generate_mei_id


def switch_tie(meifile, tstamp = False, keep_id = False):
    ''' Changes all ties expressed with attributes into elements. 
    If tstamp is set, it will attempt to generate tstamps instead of startid/endid pairs.
    
    @TODO
    At some point search() will support
    passing in args will narrow down the search by only retrieving objects with that attribute.
    Make sure to update this function when that happens 
    '''
    
    meifile_flat = meifile.getFlattenedTree()
    
    for n in meifile_flat:
        if n.hasAttribute('tie'):
            if n.getAttribute("tie").value =='i' or n.getAttribute("tie").value == 'm': #one tie element for each tie!
                #get ancestor measure
                measure = n.getAncestor('measure')
                #create a tie element
                tie = MeiElement("tie")
                
                #determine attributes according to args
                # atts = {'xml:id': generate_mei_id()}
                atts = MeiAttributeList()
                if tstamp:
                    atts.append(MeiAttribute("tstamp", str(time.id_to_tstamp(n))))
                    # atts['tstamp'] =  time.id_to_tstamp(n)
                if keep_id or (not keep_id and not tstamp):
                    atts.append(MeiAttribute("startid", n.id)) 
                    # atts['startid'] = n.id
                    
                #add attributes to tie
                tie.attributes = atts
                
                #add tie to measure
                measure.addChild(tie)
        #remove tie attribute
        n.removeAttribute('tie')