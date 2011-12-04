# testing suite
import unittest
import os
import pymei
from pymei import MeiElement, MeiAttribute, MeiElementList, MeiDocument, XmlImport
from pymei.exceptions import VersionMismatchException, NoVersionFoundException

class XmlImportTest(unittest.TestCase):

    def setUp(self):
        pass
    
    def test_setvalueandtail(self):
        xinput = "<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"i\" meiversion=\"2012\"><note>noteinner</note>notetail<tie><p>pinner</p></tie>tietail</mei>"
        
        doc = XmlImport.documentFromText(xinput)
        rootel = doc.root

        self.assertEqual("mei", rootel.name)
        self.assertEqual(2, len(rootel.children))
        ch = rootel.children

        self.assertEqual("note", ch[0].name)
        self.assertEqual("noteinner", ch[0].value)
        self.assertEqual("notetail", ch[0].tail)

        self.assertEqual("tie", ch[1].name)
        self.assertEqual("", ch[1].value)
        self.assertEqual("tietail", ch[1].tail)

        self.assertEqual(1, len(ch[1].children))
        self.assertEqual("p", ch[1].children[0].name)
        self.assertEqual("pinner", ch[1].children[0].value)
        self.assertEqual("", ch[1].children[0].tail)
    
    def test_readfile(self):
        doc = XmlImport.documentFromFile(os.path.join("test", "testdocs", "beethoven.mei"))
        self.assertNotEqual(None, doc)
        el = doc.getElementById("d1e41")
        self.assertEqual("c", el.getAttribute("pname").value)
        self.assertEqual("4", el.getAttribute("oct").value)
    
    def test_readlargefile(self):
        doc = XmlImport.documentFromFile(os.path.join("test", "testdocs", "beethoven_no5.mei"))
        self.assertNotEqual(None, doc)
    
    def test_badversionexception(self):
        with self.assertRaises(VersionMismatchException) as cm:
            XmlImport.documentFromFile(os.path.join("test", "testdocs", "badversion.mei"))
        self.assertTrue(isinstance(cm.exception, VersionMismatchException))
    
    def test_noversionexception(self):
        with self.assertRaises(NoVersionFoundException) as cm:
            XmlImport.documentFromFile(os.path.join("test", "testdocs", "noversion.mei"))
        self.assertTrue(isinstance(cm.exception, NoVersionFoundException))

def suite():
    test_suite = unittest.makeSuite(XmlImportTest, 'test')
    return test_suite