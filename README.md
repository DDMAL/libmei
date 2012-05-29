LibMEI
------

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

Authors
-------

* Andrew Hankinson
* Alastair Porter
* Greg Burlet
* Jamie Klassen
* Mahtab Ghamsari

Development of LibMEI was made possible with funding from the
Social Sciences and Humanities Research Council of Canada

Contributions
-------------
We welcome bug reports, feature requests, and patches to the libmei project page:
https://github.com/DDMAL/libmei
