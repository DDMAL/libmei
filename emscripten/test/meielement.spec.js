describe('libmei', function()
{
    describe('MEI Element', function()
    {
        it("should construct an MEI Element with a name", function()
        {
            var element = new Module.MeiElement("note");
            expect(element.getName()).toBe("note");
        });
        
        it("should add a 'pname' attribute as string with value 'c'", function()
        {
            var element = new Module.MeiElement("note");
            element.addAttribute("pname", "c");
            var attribute = element.getAttribute("pname");
            expect(attribute.getValue()).toBe("c");
        });
        
        it("should add a 'pname' attribute as MEI Attribute with value 'c'", function()
        {
            var element = new Module.MeiElement("note");
            element.addAttribute(new Module.MeiAttribute("pname", "c"));
            var attribute = element.getAttribute("pname");
            expect(attribute.getValue()).toBe("c");
        });
    });
});