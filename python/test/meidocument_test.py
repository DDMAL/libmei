# testing suite
import unittest
from pymei import MeiElement, MeiNamespace, MeiElementList, MeiDocument


class MeiDocumentTest(unittest.TestCase):
    def setUp(self):
        pass
    
    def test_getnamespace(self):
        doc = MeiDocument()
        ns = MeiNamespace("prefix", "http://example.com/ns")
        self.assertEqual("http://www.music-encoding.org/ns/mei", doc.getNamespaces()[0].href)

        doc.addNamespace(ns)
        self.assertEqual(2, len(doc.getNamespaces()))
        self.assertEqual(ns, doc.getNamespace("http://example.com/ns"))

        self.assertTrue(doc.hasNamespace("http://www.music-encoding.org/ns/mei"))
        self.assertFalse(doc.hasNamespace("http://www.mcgill.ca"))
    
    def test_getroot(self):
        doc = MeiDocument()
        mei = MeiElement("mei")
        doc.root = mei

        self.assertEqual(mei, doc.root)
    
    def test_elementbyid(self):
        mei = MeiElement("mei")
        mus = MeiElement("music")
        body = MeiElement("body")
        staff = MeiElement("staff")
        staff2 = MeiElement("staff")
        n1 = MeiElement("note")
        wantedId = n1.id
        n2 = MeiElement("note")
        n3 = MeiElement("note")
        n4 = MeiElement("note")

        mei.addChild(mus)
        mus.addChild(body)
        body.addChild(staff)
        body.addChild(staff2)
        staff.addChild(n1)
        staff.addChild(n2)
        staff.addChild(n3)
        staff2.addChild(n4)

        doc = MeiDocument()
        self.assertEqual(None, doc.getElementById(wantedId))

        doc.root = mei

        self.assertEqual(n1, doc.getElementById(wantedId))

        self.assertEqual(None, doc.getElementById("unknownID"))

        n5 = MeiElement("note")
        newid = n5.id
        staff2.addChild(n5)

        self.assertEqual(n5, doc.getElementById(newid))
        staff2.removeChild(n5)
        self.assertEqual(None, doc.getElementById(newid))

    
    def test_setversion(self):
        doc = MeiDocument()
        self.assertEqual("2012", doc.version)
    
    def test_elementsbyname(self):
        mei = MeiElement("mei")
        mus = MeiElement("music")
        body = MeiElement("body")
        staff = MeiElement("staff")
        staff2 = MeiElement("staff")
        n1 = MeiElement("note")
        n2 = MeiElement("note")
        n3 = MeiElement("note")
        n4 = MeiElement("note")

        mei.addChild(mus)
        mus.addChild(body)
        body.addChild(staff)
        body.addChild(staff2)
        staff.addChild(n1)
        staff.addChild(n2)
        staff.addChild(n3)
        staff2.addChild(n4)

        doc = MeiDocument()

        doc.root = mei

        notes = doc.getElementsByName("note")
        self.assertEqual(4, len(notes))

        rests = doc.getElementsByName("rest")
        self.assertEqual(0, len(rests))

        n5 = MeiElement("note")
        staff2.addChild(n5)
        notes_new = doc.getElementsByName('note')
        self.assertEqual(5, len(notes_new))

    
    def test_documentpointers(self):
        mei = MeiElement("mei")
        mus = MeiElement("music")
        body = MeiElement("body")
        staff = MeiElement("staff")

        self.assertEqual(None, mei.document)
        mei.addChild(mus)
        self.assertEqual(None, mus.document)

        doc = MeiDocument()
        mus.addChild(body)
        doc.root = mei

        self.assertEqual(doc, mei.document)
        self.assertEqual(doc, mus.document)
        self.assertEqual(doc, body.document)

        self.assertEqual(None, staff.document)
        body.addChild(staff)
        self.assertEqual(doc, staff.document)
    
    def test_flattenedtree(self):
        mei = MeiElement("mei")
        mus = MeiElement("music")
        body = MeiElement("body")
        staff = MeiElement("staff")
        staff2 = MeiElement("staff")
        n1 = MeiElement("note")
        n2 = MeiElement("note")
        n3 = MeiElement("note")

        doc = MeiDocument()

        mei.addChild(mus)

        doc.root = mei

        mus.addChild(body)
        body.addChild(staff)
        body.addChild(staff2)
        staff.addChild(n1)
        staff.addChild(n2)
        staff2.addChild(n3)

        doc.lookBack(n2, "mei")
        self.assertEqual(8, len(doc.getFlattenedTree()))

        staff.removeChild(n2)
        self.assertEqual(7, len(doc.getFlattenedTree()))

        self.assertEqual(staff2, doc.getFlattenedTree()[5])

        staff.removeChildrenWithName("note")
        self.assertEqual(6, len(doc.getFlattenedTree()))

        body.deleteAllChildren()
        self.assertEqual(3, len(doc.getFlattenedTree()))

        children = MeiElementList()
        staff3 = MeiElement("staff")
        staff4 = MeiElement("staff")
        children.append(staff3)
        children.append(staff4)

        body.children = children

        self.assertEqual(5, len(doc.getFlattenedTree()))

        elements = [mei, mus, body, staff3, staff4]

        for i,el in enumerate(doc.getFlattenedTree()):
            self.assertEqual(elements[i], doc.getFlattenedTree()[i])


def suite():
    test_suite = unittest.makeSuite(MeiDocumentTest, 'test')
    return test_suite