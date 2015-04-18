describe('libmei', function()
{
    describe('XML Import', function()
    {
        it("should import an MEI file", function()
        {
            var goodMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <layer xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </layer>\n</mei>\n";

            var importResult = Module.documentFromText(goodMei, true);
            expect(importResult).not.toBe(null);
        });

        it("should get the MeiDocument object from the import result", function()
        {
            var goodMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
    xml:id=\"root\" meiversion=\"2013\">\n  <layer xml:id=\"layerid\">\n    \
    <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </layer>\n</mei>\n";

            var importResult = Module.documentFromText(goodMei, true);
            expect(importResult.getMeiDocument()).not.toBe(null);

            var rootElement = importResult.getMeiDocument().getRootElement();

            expect(rootElement.getName()).toBe("mei");
        });

        it("should get the XML Processing Instructions from the import result", function()
        {
            var pi = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
            <?xml-model href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://purl.oclc.org/dsdl/schematron\"?> \
            <?xml-stylesheet href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://relaxng.org/ns/structure/1.0\"?> \
            <mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"m-4a3c8d81-25fd-4c2e-b5e1-63bfaf955ae3\" meiversion=\"2013\"/>";

            var importResult = Module.documentFromText(pi, true);

            expect(importResult.getXMLProcessingInstructions()).not.toBe(null);
            expect(importResult.getXMLProcessingInstructions().size()).toBe(2);
        });

        // NB: This requires -s DISABLE_EXCEPTION_CATCHING=0 in the emscripten build
        it("should get the import warnings from the import result", function()
        {
            var badMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
                xml:id=\"root\" meiversion=\"2013\">\n  <foo xml:id=\"layerid\">\n    \
                <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </foo>\n</mei>\n";

            var importResult = Module.documentFromText(badMei, false);
            expect(importResult.getImportWarnings()).not.toBe(null);
            expect(importResult.getImportWarnings().size()).toBe(1);
        });

        it("should throw an exception on importing in strict mode", function()
        {
            var badMei = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
                xml:id=\"root\" meiversion=\"2013\">\n  <foo xml:id=\"layerid\">\n    \
                <note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </foo>\n</mei>\n";

            try {
                var importResult = Module.documentFromText(badMei, true);
            } catch(e) {
                expect(e).not.toBe(null);
            }
        });
    });
});