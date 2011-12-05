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

from pymei.exceptions import MeiException

def id_to_tstamp(event, base=None): 
    ''' Returns the tstamp of one event. 
    NB: the event needs to be in a layer; the layer is supposed to start at beginning of measure
    '''
    
    def __add_dot(total, dur):
        '''given a total number of dots and a dotted event's duration, calculates the relative duration'''
        rel_dur = 0.0000
        dur = float(dur)
        while total != 1:
            rel_dur += 1 / (dur * 2) 
            dur = dur*2
            total -= 1
        return rel_dur
        
    context = event.getAncestor('layer')
    if context == None:
        raise MeiException('The current event must be in a mei:layer.')
    
    top = event.getAncestor('music') # is there a better way to go up to the top? (say, root, without using MEIDocument?)

    #if base is not provided, get it from scoredef
    if base==None:
            
        scoredef = -1
        # get the preceding::scoreDef[0]
        for e in top.getDescendants():
            if e.name == 'scoreDef':
                scoredef = e
            if e.id == event.id:
                break
    
        if scoredef != -1:
            base = float(scoredef.getAttribute('meter.unit').value)
        else:
            raise MeiException('Could not find a score definition.')
            
    #get all events in context (notes + rests. Other events that should be considered?)
    notes = context.getDescendantsByName('note') 
    rests = context.getDescendantsByName('rest')
    events = []
    
    if notes:
        events += notes
    if rests:
        events += rests
    
    durations = 0.0000
    
    # sum up the durations of events preceding the current event
    for ev in events:
        # stop when reaching the current event
        if ev.id == event.id:
            break
        
        # add current duration
        durations += 1 /  float(event.getAttribute('dur').value)
        
        # add dots if present (either as attribute or element)
        # this assumes that dots are encoded either with attribute OR with element - duplication sums up
        if event.getAttribute('dots') != None:
            total = float(event.getAttribute('dots').value)
            dur = float(event.getAttribute('dur').value)
            durations += __add_dot(total, dur)
            
        elif event.getDescendantsByName('dot') != None:
            total = float(len(event.getDescendantsByName('dot')))
            dur = float(event.getAttribute('dur').value)
            durations += __add_dot(total, dur)
            
    # Finally calculate the current timestamp given the sum of preceding durations and the base.
    tstamp = (durations / ( 1 / base)) + 1
    return tstamp
