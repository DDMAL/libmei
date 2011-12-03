import unittest
from test import meielement_test

def suite():
    test_suite = unittest.TestSuite()
    test_suite.addTest(meielement_test.suite())
    return test_suite
    
runner = unittest.TextTestRunner()
runner.run(suite())