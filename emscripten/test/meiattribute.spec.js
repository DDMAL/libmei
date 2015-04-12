describe('libmei', function()
{
    describe('MEI Attribute', function()
    {
        it("should construct an MEI Attribute with a name and a value", function()
        {
            var attrib = new Module.MeiAttribute("pname", "c");
            expect(attrib.getName()).toBe("pname");
            expect(attrib.getValue()).toBe("c");
        });
    });
});