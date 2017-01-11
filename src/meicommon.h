/*
 Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter and Others
 
 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including
 without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to
 the following conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


/** \mainpage
 *
 * \htmlinclude README.html
 */

#ifndef MEICOMMON_H_
#define MEICOMMON_H_

#include <string>
#include <set>

#if defined _WIN32 || defined __CYGWIN__
    #ifdef BUILDING_DLL
        #define MEI_EXPORT __declspec(dllexport)
    #else
        #define MEI_EXPORT __declspec(dllimport)
    #endif
#else
    #if __GNUC__ >= 4
        #define MEI_EXPORT __attribute__ ((visibility ("default")))
    #else
        #define MEI_EXPORT
    #endif
#endif

const std::string meiVersions[] = {"2013", "3.0.0"};
// ATTENTION: You must update this number as more versions are added.
const int NUM_VERSIONS_SUPPORTED = 2;

const std::set<std::string> MEI_VERSION(meiVersions, meiVersions + NUM_VERSIONS_SUPPORTED);
const std::string MEI_NS = "http://www.music-encoding.org/ns/mei";
const std::string MEI_PREFIX = "mei";
const std::string MEI_ENCODING = "UTF-8";
const std::string LIBMEI_VERSION = "3.0.0";

#endif  // MEICOMMON_H_
