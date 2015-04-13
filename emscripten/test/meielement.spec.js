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

        it("should print the element to standard out (visual verification)", function()
        {
            var element = new Module.MeiElement("note");
            var accid = new Module.MeiElement("accid");
            element.addChild(accid);

            element.printElement();

            expect(true).toBe(true);
        });

        it("should set and get the text value", function()
        {
            var p = new Module.MeiElement("p");
            p.setValue("Hello World");

            expect(p.getValue()).toBe("Hello World");
        });

        it("should set and get the tail value", function()
        {
            var p = new Module.MeiElement("p");
            var d = new Module.MeiElement("date");

            p.setValue("The date is");
            p.addChild(d);
            d.setValue("2015.");
            d.setTail(" Hooray!");

            expect(d.getTail()).toBe(" Hooray!");
        });

        it("should work with Unicode characters", function()
        {
            var p = new Module.MeiElement("p");
            p.setValue("© 2015");

            expect(p.getValue()).toBe("© 2015");
        });
    });
});