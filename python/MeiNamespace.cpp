#include "Python.h"
#include "../src/meinamespace.h"
#include <boost/python.hpp>
#include <iostream>
#include <string>

using namespace boost::python;
using mei::MeiNamespace;

BOOST_PYTHON_MODULE(MeiNamespace) {


    class_<MeiNamespace>("MeiNamespace", init<std::string, std::string>())
        .def("getHref", &MeiNamespace::getHref)
        .def("getPrefix", &MeiNamespace::getPrefix)
    ;
}