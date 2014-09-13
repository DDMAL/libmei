# testing suite
import unittest
from pymei import MeiElement, MeiAttribute, MeiDocument, MeiNamespace, XmlExport


class MeiAttributeTest(unittest.TestCase):

    def setUp(self):
        pass

    def test_name_value_constructor(self):
        a = MeiAttribute("pname", "c")
        self.assertEqual("pname", a.name)
        self.assertEqual("c", a.value)

    def test_ns_name_value_constructor(self):
        ns = MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace")
        a = MeiAttribute(ns, "base", "blahblahblah")

        ns2 = a.getNamespace()

        self.assertEqual(ns, ns2)

    def test_name_value_copy_constructor(self):
        a = MeiAttribute("pname", "c")
        b = MeiAttribute(a)

        b.value = "d"

        self.assertEqual(b.name, a.name)
        self.assertNotEqual(b.value, a.value)

    def test_name_value_ns_copy_constructor(self):
        ns = MeiNamespace("pfx", "http://example.org/prefix/")
        a = MeiAttribute(ns, "base", "#foo")
        b = MeiAttribute(a)

        ns2 = b.getNamespace()

        self.assertEqual(ns2.prefix, "pfx")
        self.assertEqual(ns2.href, "http://example.org/prefix/")

        doc = MeiDocument()
        y = MeiNamespace("ynot", "http://example.org/ynot/")
        doc.addNamespace(y)

        m = MeiElement("mei")
        m.id = "m-21ce1ba5-f055-42cc-88db-03ab5bc837c2"

        n = MeiElement("note")
        n.id = "m-903c95ae-3030-4e90-bf53-4aba90dca7ac"

        m.addChild(n)
        n.addAttribute(b)

        x = MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace")
        c = MeiAttribute(x, "base", "blahblahblah")

        n.addAttribute(c)

        doc.setRootElement(m)

        result = XmlExport.meiDocumentToText(doc)
        expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xmlns:ynot=\"http://example.org/ynot/\" xml:id=\"m-21ce1ba5-f055-42cc-88db-03ab5bc837c2\" meiversion=\"2013\">\n  <note xml:id=\"m-903c95ae-3030-4e90-bf53-4aba90dca7ac\" xml:base=\"blahblahblah\"/>\n</mei>\n"

        self.assertEqual(result, expected)


def suite():
    test_suite = unittest.makeSuite(MeiAttributeTest, 'test')
    return test_suite
