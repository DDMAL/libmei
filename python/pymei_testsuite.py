import unittest
from test import meielement_test
from test import meidocument_test
from test import meiattribute_test
from test import xmlimport_test
from test import xmlexport_test


def suite():
    test_suite = unittest.TestSuite()
    test_suite.addTest(meielement_test.suite())
    test_suite.addTest(meidocument_test.suite())
    test_suite.addTest(meiattribute_test.suite())
    test_suite.addTest(xmlimport_test.suite())
    test_suite.addTest(xmlexport_test.suite())
    return test_suite

runner = unittest.TextTestRunner()
runner.run(suite())
