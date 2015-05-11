# testing suite
import unittest
import os
from pymei import MeiElement
from pymei import documentFromFile


def chain_elems(start_elem, elems):
    # print("Chaining elements")

    def getOrAddChild(mei_elem, child_name):
        print("Adding ", child_name)
        children = mei_elem.getChildrenByName(child_name)
        if children:
            return children
        mei_elem.addChild(MeiElement(child_name))
        return mei_elem.getChildrenByName(child_name)

    if elems == []:
        return start_elem
    children = getOrAddChild(start_elem, elems[0])
    return chain_elems(children[0], elems[1:])


class PymeiDebugTest(unittest.TestCase):
    def test_segfaultdebug(self):
        variants_list = [
                         ('3', 'VARIANT', '2', 'RISM1560-06'),
                         ('6', 'VARIANT', '5', 'RISM1560-06')
                         ]
        res = documentFromFile(os.path.join("test", "testdocs", "DC1317E.mei"))

        MEI_doc = res.getMeiDocument()

        mei = MeiElement('mei')
        # print(mei)

        head_score = chain_elems(mei, ['meiHead', 'workDesc', 'work', 'incip', 'score'])
        stg = chain_elems(mei, ['music', 'body', 'mdiv', 'score', 'scoreDef', 'staffGrp'])
        sd1 = MeiElement('staffDef')
        sd2 = MeiElement('staffDef')
        sd3 = MeiElement('staffDef')
        sd4 = MeiElement('staffDef')
        sd5 = MeiElement('staffDef')
        sd6 = MeiElement('staffDef')

        sd1.addAttribute('n', '1')
        sd2.addAttribute('n', '2')
        sd3.addAttribute('n', '3')
        sd4.addAttribute('n', '4')
        sd5.addAttribute('n', '5')
        sd6.addAttribute('n', '6')

        stg.addChild(sd1)
        stg.addChild(sd2)
        stg.addChild(sd3)
        stg.addChild(sd4)
        stg.addChild(sd5)
        stg.addChild(sd6)

        MEI_tree = MEI_doc.getRootElement()
        # MEI_tree2 = mei

        # print(MEI_tree)
        # print MEI_tree2

        scoreDefs = MEI_tree.getDescendantsByName('scoreDef')
        # print(scoreDefs)

        mainScoreDef = MeiElement(scoreDefs[0])
        mainScoreDef.id = "blahblahblah"
        meiHead = MEI_tree.getDescendantsByName('meiHead')[0]
        head_score = chain_elems(meiHead, ['workDesc', 'work', 'incip', 'score'])
        head_score.addChild(mainScoreDef)

        for variants_list_item in variants_list:
            stDefs = mainScoreDef.getDescendantsByName('staffDef')
            for staffDef in stDefs:
                if staffDef.hasAttribute('n') and staffDef.getAttribute('n').value == variants_list_item[0]:
                    print("Removing staffDef n=" + staffDef.getAttribute('n').getValue())
                    staffDef.parent.removeChild(staffDef)

        # head_score.addChild(mainScoreDef)
        self.assertEqual(4, len(head_score.getDescendantsByName('staffDef')))


def suite():
    test_suite = unittest.makeSuite(PymeiDebugTest, 'test')
    return test_suite
