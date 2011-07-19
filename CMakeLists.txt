project( libmei )

cmake_minimum_required( VERSION 2.6 )

FIND_PACKAGE( LibXml2 REQUIRED )
find_path    (UUID_INCLUDE_DIR   uuid/uuid.h)
find_library (UUID_LIBRARY NAMES uuid)
if (UUID_INCLUDE_DIR AND UUID_LIBRARY)
	message ("-- Found libuuid: ${UUID_LIBRARY}")
else (UUID_INCLUDE_DIR AND UUID_LIBRARY)
	message(FATAL_ERROR "Could not find libuuid")
endif (UUID_INCLUDE_DIR AND UUID_LIBRARY)


set( CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${CMAKE_CURRENT_SOURCE_DIR}")

set( MEI_LIB_MAJOR_VERSION "0" )
set( MEI_LIB_MINOR_VERSION "0" )
set( MEI_LIB_PATCH_VERSION "1" )
set( MEI_LIB_VERSION "${MEI_LIB_MAJOR_VERSION}.${MEI_LIB_MINOR_VERSION}.${MEI_LIB_PATCH_VERSION}" )
set( MEI_LIB_VERSION_SONAME "${MEI_LIB_MAJOR_VERSION}.${MEI_LIB_MINOR_VERSION}")

option(MEI_BUILD_TESTS "Build all unit tests" ON)

if(MEI_BUILD_TESTS)
	find_package( GoogleTest REQUIRED )
	enable_testing()
endif(MEI_BUILD_TESTS)

set( CPACK_GENERATOR "TBZ2" "DEB" )
set( CPACK_PACKAGE_VERSION_MAJOR "${MEI_LIB_MAJOR_VERSION}" )
set( CPACK_PACKAGE_VERSION_MINOR "${MEI_LIB_MINOR_VERSION}" )
set( CPACK_PACKAGE_VERSION_PATCH "${MEI_LIB_PATCH_VERSION}" )
set( CPACK_PACKAGE_VERSION "${MEI_LIB_VERSION}" )
set( CPACK_PACKAGE_DESCRIPTION_SUMMARY "A library to read and write MEI (music encoding initiative) files." )

# make uninstall support
CONFIGURE_FILE(
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
  IMMEDIATE @ONLY)

ADD_CUSTOM_TARGET(uninstall
  "${CMAKE_COMMAND}" -P "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake")

FILE(GLOB src_files "src/*.cpp")
FILE(GLOB module_files "src/Modules/*.cpp")
FILE(GLOB src_headers "src/*.h")
FILE(GLOB module_headers "src/Modules/*.h")

set( LIBMEI_SRC
	${src_files}
	${module_files}
)

set( LIBMEI_H
	${src_headers}
	${module_headers}
)

if (CMAKE_COMPILER_IS_GNUCXX)
    add_definitions( -Werror )
endif (CMAKE_COMPILER_IS_GNUCXX)

INCLUDE_DIRECTORIES(
	${CMAKE_CURRENT_SOURCE_DIR}/src
	${LIBXML2_INCLUDE_DIR}
	${UUID_INCLUDE_DIR}
)

ADD_DEFINITIONS(
	${LIBXML2_DEFINITIONS}
)

add_library( mei SHARED ${LIBMEI_SRC} )
target_link_libraries( mei 
	${OS_SPECIFIC_LINK_LIBRARIES}
	${LIBXML2_LIBRARIES}
	${UUID_LIBRARY}
)
#set_target_properties( mei PROPERTIES VERSION ${MEI_LIB_VERSION} SOVERSION ${MEI_LIB_VERSION_SONAME} )
install( TARGETS mei   RUNTIME DESTINATION bin
                            LIBRARY DESTINATION lib${LIB_SUFFIX}
                            ARCHIVE DESTINATION lib${LIB_SUFFIX}
)

install( FILES ${LIBMEI_H} DESTINATION  include/mei COMPONENT Devel )

if( MEI_BUILD_TESTS )
	set( EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR} )
	include_directories( ${CMAKE_CURRENT_BINARY_DIR})

	file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/mei)
	file(COPY ${LIBMEI_H} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/mei)

	macro(add_mei_test _source)
	    get_filename_component(_name ${_source} NAME_WE)
	    add_executable(${_name} ${_source} test/gtest_main.cc)
	    target_link_libraries(${_name} mei ${GTEST_LIBRARIES} pthread )
	    add_test(${_name}-test ${EXECUTABLE_OUTPUT_PATH}/${_name})
	endmacro(add_mei_test)

    file(GLOB files "test/*_test.cpp")
    foreach(file ${files})
      add_mei_test(${file})
    endforeach()
    
endif( MEI_BUILD_TESTS )


