import unittest
from test import meielement_test
from test import meidocument_test
from test import xmlimport_test

def suite():
    test_suite = unittest.TestSuite()
    test_suite.addTest(meielement_test.suite())
    test_suite.addTest(meidocument_test.suite())
    test_suite.addTest(xmlimport_test.suite())
    return test_suite
    
runner = unittest.TextTestRunner()
runner.run(suite())