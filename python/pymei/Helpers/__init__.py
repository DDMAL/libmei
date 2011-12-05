# Copyright (c) 2011 Andrew Hankinson

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

import uuid

def generate_mei_id():
    return "{0}-{1}".format('m', str(uuid.uuid4()))

# from pymei import NS_TO_PREFIX, PREFIX_TO_NS

# import logging
# lg = logging.getLogger('pymei')

# def ns_to_prefix(att):
#     """ Helper function to convert a full namespace into its prefix."""
#     if att.startswith("{"):
#         full = att.split("}")
#         a = full[-1]
#         n = NS_TO_PREFIX[full[0].strip("{")]
#         return "{0}:{1}".format(n,a)
#     else:
#         return att

# def prefix_to_ns(att):
#     if len(att.split(":")) > 1:
#         p = PREFIX_TO_NS[att.split(":")[0]]
#         a = "{{{0}}}{1}".format(p, att.split(":")[-1])
#         return a
#     else:
#         return att
        
# def generate_mei_id():
#     return "{0}-{1}".format('m', str(uuid.uuid4()))

# def flatten(mei_obj):
#     """ 
#         Flattens the nested descendant elements into a single list.
#     """
#     def __fl(ls):
#         for ch in ls.children:
#             if ch.children:
#                 for cd in __fl(ch):
#                     yield cd
#             yield ch
#     return tuple(__fl(mei_obj))