EMSCRIPTEN AND PUXIGML
---------------------

Experimental work on compiling LibMEI to JavaScript using [Emscripten](http://www.emscripten.org). This includes experimental change to the [Pugixml](http://pugixml.org/) XML library for reading (and eventually writing) the XML files.

Emscripten
----------

The emscripten.cpp file contains basic bindings for making the C++ classes available in the JavaScript module. Additional LibMEI core classes and methods will need to be added to this file. We also need to have an additional ./tools/langs/emscripten.py for generated similar bindings for all MEI classes.

Ideally, the ./build.sh makefile should be generated according to the modules included. 

Pugixml
-------

Pugixml was tested only for the import and export is missing (it is not included in the ./build.sh because it requires libxml2). Discarded features in the import are:

* Reading processing instructions
* The method MeiDocument* XmlImport::documentFromText(string text, XmlInstructions &inst) (due toconflict in Emscripten binding)
* Taking into account namespaces
* Reading text and comment nodes
