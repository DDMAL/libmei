describe('libmei', function()
{
    describe('MEI Element', function()
    {
        it("should construct an MEI Element with a name", function()
        {
            var element = new Module.MeiElement("note");
            expect(element.getName()).toBe("note");
        });
    });
});