# testing suite
import unittest
from pymei import MeiElement, MeiAttribute, MeiElementList, MeiDocument

class MeiElementTest(unittest.TestCase):

    def setUp(self):
        pass

    def test_copy_constructor(self):
        note = MeiElement("note")
        note2 = note

        # check that regular pointer referencing in Python works on MeiElements
        self.assertEqual(note2, note)
        note.addAttribute('pname', 'c')
        note3 = MeiElement(note)

        # check that they have been properly copied
        self.assertNotEqual(note3, note)

        # check that the attributes copied are not the same
        self.assertNotEqual(note3.getAttribute('pname'), note.getAttribute('pname'))

        # check that the attribute values copied are the same
        self.assertEqual(note3.getAttribute('pname').value, note.getAttribute('pname').value)

    def test_name(self):
        note = MeiElement("note")
        self.assertEqual(note.name, "note")
    
    def test_value(self):
        para = MeiElement("p")
        para.value = "I am text"
        self.assertEqual(para.value, "I am text")
    
    def test_tail(self):
        para = MeiElement("p")
        para.tail = "I am tail"
        self.assertEqual(para.tail, "I am tail")
    
    def test_id(self):
        el = MeiElement("mei")
        self.assertEqual(38, len(el.id))
    
    def test_nullattr(self):
        el = MeiElement("mei")
        self.assertEqual(0, len(el.attributes))
    
    def test_noattr(self):
        el = MeiElement("mei")
        el.addAttribute("color", "red")
        self.assertFalse(el.hasAttribute("meiversion"))
    
    def test_newattrobj(self):
        el = MeiElement("mei")
        at = MeiAttribute("meiversion", "2012")
        el.addAttribute(at)
        self.assertTrue(el.hasAttribute("meiversion"))
    
    def test_newattrstr(self):
        el = MeiElement("mei")
        el.addAttribute("meiversion", "2012")
        self.assertTrue(el.hasAttribute("meiversion"))
    
    def test_removeattr(self):
        el = MeiElement("mei")
        el.addAttribute("meiversion", "2012")
        self.assertTrue(el.hasAttribute("meiversion"))

        el.removeAttribute("meiversion")
        self.assertFalse(el.hasAttribute("meiversion"))
    
    def test_changeattr(self):
        el = MeiElement("mei")
        el.addAttribute("meiversion", "2011-05")
        self.assertTrue(el.hasAttribute("meiversion"))
        self.assertEqual("2011-05", el.getAttribute("meiversion").value)
    
        at = el.getAttribute("meiversion")
        at.value = "2012"

        self.assertEqual("2012", el.getAttribute("meiversion").value)

    def test_parent(self):
        el1 = MeiElement("mei")
        el2 = MeiElement("meiHead")
        el3 = MeiElement("music")

        el2.parent = el1
        el3.parent = el1

        self.assertEqual("mei", el2.parent.name)
        self.assertEqual("mei", el3.parent.name)
    
    def test_children(self):
        el1 = MeiElement("mei")
        el2 = MeiElement("meiHead")
        el3 = MeiElement("music")

        self.assertEqual(0, len(el1.children))

        el1.addChild(el2)
        el1.addChild(el3)

        self.assertEqual("mei", el2.parent.name)
        self.assertTrue(el1.hasChildren("music"))
    
    def test_object_equality(self):
        el1 = MeiElement("note")
        el2 = MeiElement("accid")

        el1.addChild(el2)

        self.assertEqual(el1, el2.parent)

    def test_addchildbefore(self):
        p = MeiElement("note")
        el1 = MeiElement("accid")
        el2 = MeiElement("accid")
        el3 = MeiElement("accid")
        el4 = MeiElement("accid")
        
        p.addChild(el1)
        p.addChild(el2)

        self.assertEqual(2, len(p.children))

        p.addChildBefore(el2, el3)

        self.assertEqual(3, len(p.children))

        p.addChildBefore(el1, el4)

        self.assertEqual(4, len(p.children))
        self.assertEqual(el4, p.children[0])
    
    def test_setchildren(self):
        p = MeiElement("note")
        el1 = MeiElement("accid")
        el2 = MeiElement("dot")
        el3 = MeiElement("artic")

        p.addChild(el1)
        self.assertEqual(1, len(p.children))

        children = MeiElementList()
        children.append(el2)
        children.append(el3)

        p.children = children

        # setting the children will REPLACE any previously
        # set children!!!
        self.assertEqual(2, len(p.children))
        
        # can't affect children by changing the initial list
        children.append(MeiElement("accid"))
        self.assertEqual(2, len(p.children))

    def test_getchildrenbyname(self):
        p = MeiElement("note")
        el1 = MeiElement("accid")
        el2 = MeiElement("accid")
        el3 = MeiElement("dot")

        children = MeiElementList()
        children.append(el1)
        children.append(el2)
        children.append(el3)
        p.children = children

        # this should return a new list
        accid_children = p.getChildrenByName("accid")
        self.assertEqual(2, len(accid_children))

    def test_changechildvalue(self):
        """ Check if we can replace an attribute value in-place"""
        p = MeiElement("layer")
        el1 = MeiElement("note")
        el2 = MeiElement("note")

        p.addChild(el1)
        p.addChild(el2)

        el1.addAttribute("pname", "c")

        self.assertEqual("c", p.children[0].getAttribute("pname").value)
        el1.getAttribute("pname").value = "d"
        self.assertEqual("d", p.children[0].getAttribute("pname").value)

    def test_removechild(self):
        p = MeiElement("layer")
        el1 = MeiElement("note")
        el2 = MeiElement("note")
        
        p.addChild(el1)
        p.addChild(el2)
        
        self.assertEqual(2, len(p.children))
        p.removeChild(el1)
        self.assertEqual(1, len(p.children))
    
    def test_removechildrenbyname(self):
        p = MeiElement("layer")
        el1 = MeiElement("note")
        el2 = MeiElement("note")
        el3 = MeiElement("chord")

        p.addChild(el1)
        p.addChild(el2)
        p.addChild(el3)

        self.assertEqual(3, len(p.children))
        p.removeChildrenWithName("note")
        self.assertEqual(1, len(p.children))

        # check that el1 was not actually deleted
        self.assertTrue(el1)
    
    def test_deleteallchildren(self):
        p = MeiElement("layer")
        el1 = MeiElement("note")
        el2 = MeiElement("note")
        el3 = MeiElement("chord")

        p.addChild(el1)
        p.addChild(el2)
        p.addChild(el3)

        self.assertEqual(3, len(p.children))
        p.deleteAllChildren()
        self.assertEqual(0, len(p.children))
    
    def test_ancestor(self):
        m1 = MeiElement("music")
        musicid = m1.id
        b1 = MeiElement("body")
        bodyid = b1.id
        s1 = MeiElement("staff")
        n1 = MeiElement("note")
        a1 = MeiElement("accid")

        m1.addChild(b1)
        b1.addChild(s1)
        s1.addChild(n1)
        n1.addChild(a1)
        
        self.assertEqual(bodyid, a1.getAncestor("body").id)

        self.assertEqual(musicid, a1.getAncestor("music").id)

        self.assertEqual(None, a1.getAncestor("mei"))
    
    def test_descendants(self):
        m1 = MeiElement("music")
        b1 = MeiElement("body")
        s1 = MeiElement("staff")
        n1 = MeiElement("note")
        a1 = MeiElement("accid")

        m1.addChild(b1)
        b1.addChild(s1)
        s1.addChild(n1)
        n1.addChild(a1)

        desc = m1.getDescendants()
        self.assertEqual(4, len(desc))

        desc2 = a1.getDescendants()
        self.assertEqual(0, len(desc2))

    def test_peers(self):
        m1 = MeiElement("music")
        b1 = MeiElement("body")
        s1 = MeiElement("staff")
        n1 = MeiElement("note")
        noteid = n1.id
        n2 = MeiElement("note")
        n3 = MeiElement("note")
        n4 = MeiElement("note")
        note4id = n4.id

        m1.addChild(b1)
        b1.addChild(s1)
        s1.addChild(n1)
        s1.addChild(n2)
        s1.addChild(n3)
        s1.addChild(n4)

        res = n2.getPeers()

        self.assertEqual(4, len(res))

        self.assertEqual(noteid, res[0].id)
        self.assertEqual(note4id, res[3].id)

    def test_getpositionindocument(self):
        m = MeiElement("mei")
        m1 = MeiElement("music")
        b1 = MeiElement("body")
        s1 = MeiElement("staff")
        n1 = MeiElement("note")
        n2 = MeiElement("note")
        n3 = MeiElement("note")
        n4 = MeiElement("note")

        m.addChild(m1)
        m1.addChild(b1)
        b1.addChild(s1)
        s1.addChild(n1)
        s1.addChild(n2)
        s1.addChild(n3)

        doc = MeiDocument()
        doc.root = m

        self.assertEqual(4, n1.getPositionInDocument())

        # an unattached element will return -1
        self.assertEqual(-1, n4.getPositionInDocument())

    def test_popfromattributes(self):
        m = MeiElement('mei')
        m.addAttribute('foo', '1')
        m.addAttribute('bar', '2')
        m.addAttribute('baz', '3')

        attrs = m.getAttributes()

        foo = attrs.pop()

        self.assertEqual('3', foo.value)
        self.assertEqual(2, len(attrs))

    def test_pushtoattributes(self):
        m = MeiElement('mei')
        m.addAttribute('foo', '1')
        m.addAttribute('bar', '2')
        m.addAttribute('baz', '3')

        attrs = m.getAttributes()

        new = MeiAttribute('hi', 'there')

        attrs.push(new)

        self.assertEqual('there', attrs[0].value)
        self.assertEqual(4, len(attrs))

    def test_lookback(self):
        m = MeiElement("mei")
        m1 = MeiElement("music")
        b1 = MeiElement("body")
        s1 = MeiElement("staff")
        n1 = MeiElement("note")

        doc = MeiDocument()
        m.setDocument(doc)

        m.addChild(m1)
        m1.addChild(b1)
        b1.addChild(s1)
        s1.addChild(n1)
        
        self.assertEqual(s1.lookBack('mei'), m)

    # def test_copyconstructor(self):
    #     n1 = MeiElement("note")
    #     noteid = n1.id
    #     n1.addAttribute("headshape", "diamond")
    #     n1.addAttribute("pname", "c")

    #     n2 = MeiElement(n1)
    #     noteid2 = n2.id

    #     # each should have a new id
    #     self.assertNotEqual(noteid, noteid2)

    #     self.assertEqual("diamond", n2.getAttribute("headshape").value)

    #     # ensure they're independent objects
    #     n2.getAttribute("pname").value = "d"

    #     self.assertEqual("c", n1.getAttribute("pname").value)
    #     self.assertEqual("d", n2.getAttribute("pname").value)


def suite():
    test_suite = unittest.makeSuite(MeiElementTest, 'test')
    return test_suite