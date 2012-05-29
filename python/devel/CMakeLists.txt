PROJECT(_pymei)
cmake_minimum_required(VERSION 2.8.3)
INCLUDE(CMakeFindFrameworks)
FIND_PACKAGE(PythonInterp)
FIND_PACKAGE(PythonLibs)
FIND_PACKAGE(Boost COMPONENTS python)
FIND_LIBRARY(MeiFW NAMES mei)

# Search for the python framework on Apple.
CMAKE_FIND_FRAMEWORKS(Python)
SET(PYTHON_FRAMEWORK_INCLUDES)
IF(Python_FRAMEWORKS)
   IF(NOT PYTHON_INCLUDE_PATH)
      FOREACH(version 2.7 2.6 2.5 2.4 2.3 2.2 2.1 2.0 1.6 1.5)
         FOREACH(dir ${Python_FRAMEWORKS})
            SET(PYTHON_FRAMEWORK_INCLUDES ${PYTHON_FRAMEWORK_INCLUDES}
            ${dir}/Versions/${version}/include/python${version})
         ENDFOREACH(dir)
      ENDFOREACH(version)
   ENDIF(NOT PYTHON_INCLUDE_PATH)
ENDIF(Python_FRAMEWORKS)


ENABLE_TESTING()
INCLUDE_DIRECTORIES(/usr/local/include ~/Library/Frameworks ${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})
LINK_DIRECTORIES(/usr/local/lib ~/Library/Frameworks)
#add_library( _pymei SHARED _pymei.cpp )

PYTHON_ADD_MODULE(_pymei _pymei.cpp)
target_link_libraries(_pymei ${Boost_LIBRARIES} python2.7 ${MeiFW})