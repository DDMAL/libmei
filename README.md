**DEPRECATED**: This library is no longer maintained. A fork of this library [lives on in the Verovio project](https://github.com/rism-digital/verovio/tree/develop/libmei). This includes the most useful tool from this project, the ability to generate code from a new MEI Schema using the `parseschema2.py` script. 

Libmei was an interesting concept when we started it, but there are much better XML libraries available that support nice features like XPath and proper namespaces. You're better off using those instead of this now. 

LibMEI
------

[![Build Status](https://travis-ci.org/DDMAL/libmei.png?branch=master)](https://travis-ci.org/DDMAL/libmei)

LibMEI is a C++ library for reading and writing [MEI](http://music-encoding.org) files

It is developed by the [Distributed Digital Music Archives and Libraries Lab](http://ddmal.music.mcgill.ca/)
at the Schulich School of Music at McGill University, Montréal, Canada

License
-------
LibMEI is released under the MIT license.

Compilation & Usage
-------------------

We provide an XCode project for OSX and a cmake script for Linux.

To build on Linux, simply

    mkdir build; cd build
    cmake ..
    make
    sudo make install

To use libmei, include

    #include <mei/mei.h>

We provide two sample applications to demonstrate use. ```util/readmei.cpp``` is a trivial
example of reading and writing MEI, and making a change to the document structure.
```util/mxmltomei``` contains a tool to convert between MusicXML and MEI. This tool is
still in active development.

More detailed information about compilation and use is available at the
libmei wiki: https://github.com/DDMAL/libmei/wiki

Python
-------
LibMEI ships with Python bindings using the Boost-Python framework. More information about installing and using
these bindings can be found in [Installing the Python bindings](https://github.com/DDMAL/libmei/wiki/Installing-the-Python-bindings)

Customization
-------------
One of the most useful features of the MEI specification is the ability to generate custom schemas (in RelaxNG, DTD or W3C Schema)
containing only the music notation features that you require. For example, there is no need to validate documents written in mensural
notation against the Common Music Notation features of MEI. Also, MEI allows you to define new customizations for musical features that
may not be covered under the core specification. These are features inherited from the TEI project, and you can read more about
them on the [ODD Overview Page](http://www.tei-c.org/Guidelines/Customization/odds.xml) or in [our paper about MEI and LibMEI](http://ismir2011.ismir.net/papers/OS3-1.pdf).

LibMEI ships with tools that allow you to easily work with these customizations to limit or expand the functionality. In the `tools` directory
we include a Python script, `parseschema2.py` that will generate custom code for you in either C++ or Python. (Other languages may be added as well, if requested).

You can read more about customization and custom compiliation on our [wiki pages](https://github.com/DDMAL/libmei/wiki/Automatic-Code-Generation).

Contributions
-------------
We welcome bug reports, feature requests, and patches to the libmei project page:
https://github.com/DDMAL/libmei
