describe('libmei', function()
{
    describe('MEI Document', function()
    {
        // it('should construct a blank MEI document with an explicit version string', function()
        // {
        //     var doc = new Module.MeiDocument("2013");
        //     expect(doc).not.toBe(null);
        // });

        it('should construct an MEI 2013 document with no explicit version string', function()
        {
            var doc = new Module.MeiDocument();
            expect(doc).not.toBe(null);
            expect(doc.getVersion()).toBe("2013");
        });
        
        it('should construct an MEI 2012 document with explicit version string', function()
        {
            var doc = new Module.MeiDocument("test-version");
            expect(doc).not.toBe(null);
            expect(doc.getVersion()).toBe("test-version");
        });

        it('should set the root element', function() {
            var doc = new Module.MeiDocument();
            var rt = new Module.MeiElement("mei");
            doc.setRootElement(rt);
            expect(doc.getRootElement()).not.toBe(null);
        });

        it('should set the MEI Version when added to the document', function()
        {
            var doc = new Module.MeiDocument();
            var rt = new Module.MeiElement("mei");
            doc.setRootElement(rt);
            expect(rt.getAttribute('meiversion').getValue()).toBe("2013");
        });

        it('should set the default MEI Namespace when added to the document', function()
        {
            var doc = new Module.MeiDocument();
            var rt = new Module.MeiElement("mei");
            doc.setRootElement(rt);
            expect(rt.getAttribute('xmlns').getValue()).toBe("http://www.music-encoding.org/ns/mei");
        });

        it('should get the MEI Element By Id', function()
        {
            var doc = new Module.MeiDocument();
            var rt = new Module.MeiElement("mei");
            doc.setRootElement(rt);

            var rtid = rt.getId();

            expect(doc.getElementById(rtid)).not.toBe(null);
            expect(doc.getElementById(rtid)).toEqual(rt);
        });

        it('should get two elements by name', function()
        {
            var doc = new Module.MeiDocument();
            var rt = new Module.MeiElement("mei");
            doc.setRootElement(rt);

            var note1 = new Module.MeiElement("note");
            var note2 = new Module.MeiElement("note");

            rt.addChild(note1);
            rt.addChild(note2);

            var allnotes = doc.getElementsByName("note");

            expect(allnotes.size()).toEqual(2);
        });

        it('should find an element\'s position in the document', function()
        {
            var doc = new Module.MeiDocument();
            var rt = new Module.MeiElement("mei");
            doc.setRootElement(rt);

            var note1 = new Module.MeiElement("note");
            var note2 = new Module.MeiElement("note");

            rt.addChild(note1);
            rt.addChild(note2);

            var notepos = doc.getPositionInDocument(note2);

            expect(notepos).toEqual(2); // NB Position is 0-based
        });
    })
})