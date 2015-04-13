describe('libmei', function()
{
    describe('XML Export', function()
    {
        it("should export MEI to a string", function()
        {
            // TODO
            var d = new Module.MeiDocument();
            var r = new Module.MeiElement("mei");
            d.setRootElement(r);

            var mh = new Module.MeiElement("meiHead");
            r.addChild(mh);

            var mu = new Module.MeiElement("music");
            r.addChild(mu);

            console.log(Module.XmlExport.documentToText(d));
            // var element = new Module.MeiElement("note");
            // expect(element.getName()).toBe("note");
        });
    });
});