LibMEI
------

LibMEI is a C++ library for reading and writing [MEI](http://music-encoding.org) files

It is developed by the [Distributed Digital Music Archives and Libraries Lab](http://ddmal.music.mcgill.ca/)
at the Schulich School of Music at McGill University

License
-------
LibMEI is released under the MIT license.

Developing
----------
An Xcode project file is included that should let you develop libMEI on OSX. There is also a cmake file for Linux.

We use googletest for unit testing.

To create new files:

1. Go to File -> New File -> C and C++ -> C++ File
2. Ensure the checkbox for creaing a .h file is selected
3. Choose file location to be in the src folder
4. Once created, add the header file to Targets -> libmei -> Copy Headers
5. Right-click on the header file, choose "Set Role" and set it to "Public"

For every src <file>.cpp/h you create, create a test/<file>_test.cpp. For test files, no header files are needed. Uncheck the box that also creates a .h file
