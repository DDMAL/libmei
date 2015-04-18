describe('libmei', function()
{
    describe('XML Export', function()
    {
        it("should export an MEI Document to a string", function()
        {
            var d = new Module.MeiDocument();
            var r = new Module.MeiElement("mei");
            d.setRootElement(r);

            var mh = new Module.MeiElement("meiHead");
            r.addChild(mh);

            var mu = new Module.MeiElement("music");
            r.addChild(mu);

            expect(Module.documentToText(d)).not.toBe(null);
        });

        it("should export an MEI Element to a string", function()
        {
            var r = new Module.MeiElement("mei");
            var mh = new Module.MeiElement("meiHead");
            r.addChild(mh);

            var mu = new Module.MeiElement("music");
            r.addChild(mu);

            expect(Module.elementToText(r)).not.toBe(null);
        });
    });
});