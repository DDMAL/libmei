LibMEI
------

[![Build Status](https://travis-ci.org/DDMAL/libmei.png?branch=master)](https://travis-ci.org/DDMAL/libmei)

LibMEI is a C++ library for reading and writing [MEI](http://music-encoding.org) files

It is developed by the [Distributed Digital Music Archives and Libraries Lab](http://ddmal.music.mcgill.ca/)
at the Schulich School of Music at McGill University, Montréal, Canada

This is a modified version that is used for production C++ code for [Verovio](http://www.verovio.org). The main difference with LibMEI are:

1. it generates only attribute classes (Mixin in LibMEI)
2. each attribute has a C++ type deduced from the MEI schema or given in a separted configuration file
3. it uses the MEI page-based customization not included in the MEI 2013 v2.1.0 (see [MEI](http://www.music-encoding.org)).


License
-------
LibMEI is released under the MIT license.

Compilation & Usage
-------------------

There is a modified CPP script ```tools/lang/cplusplus_vrv.py``` that can be activated with the ```-l vrv``` language option.

Additional C++ includes are in the ```tools/includes/vrv``` directory.

A compiled version of the 2013 schema with the latest page-based customization is available in ```mei/xxxx-xx-xx/mei-compiled.xml```.

To generate the code, simply

    python tools/parseschema2.py -l vrv -o vrv -i tools/includes/vrv mei/2013-11-05/mei-compiled.xml
