Setup
-----

You can compile the libmei emscripten bindings with the build.sh script. Instructions on how to get started with emscripten can be found on the [emscripten website](http://kripken.github.io/emscripten-site/docs/).

Testing
-------

Karma and Jasmine are used to run the unit tests for the emscripten bindings. You can set up your development environment by installing the dependencies listed in the package.json file using npm:

    $> npm install
    $> karma start

(Unless you want to pass in the path to node_modules/bin/karma, you should install karma globally with `npm install -g karma`.)

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
