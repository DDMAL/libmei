# testing suite
import unittest
from pymei import MeiAttribute


class MeiAttributeTest(unittest.TestCase):

    def setUp(self):
        pass

    def test_name_value_constructor(self):
        a = MeiAttribute("pname", "c")
        self.assertEqual("pname", a.name)
        self.assertEqual("c", a.value)

    def test_name_value_copy_constructor(self):
        a = MeiAttribute("pname", "c")
        b = MeiAttribute(a)

        b.value = "d"

        self.assertEqual(b.name, a.name)
        self.assertNotEqual(b.value, a.value)


def suite():
    test_suite = unittest.makeSuite(MeiAttributeTest, 'test')
    return test_suite
