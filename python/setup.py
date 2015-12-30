from setuptools import find_packages
from distutils.core import setup, Extension
import sys
import os

longdesc = """ Python Bindings for LibMEI. """

if sys.platform == "darwin":
    link_args = ["-F", "/Library/Frameworks","-framework", "mei"]
    libraries = ["boost_python-mt"]
    library_dirs = []
    runtime_library_dirs = []
    include_dirs = []
elif sys.platform == "freebsd8":
    libraries = ['boost_python', 'mei']
    library_dirs = ['/usr/local/lib']
    runtime_library_dirs = ['/usr/local/lib']
    include_dirs = ['/usr/local/include']
    link_args = ["-L/usr/local/lib", "-L/usr/lib"]
else:
    if sys.platform == "linux2":
        import platform
        if platform.linux_distribution()[0] == "Ubuntu":
            # Ubuntu names its boost libraries a bit differently.
            # figure out what version of python
            ver = platform.python_version_tuple()
            libraries = ["boost_python-mt-py{0}{1}".format(ver[0], ver[1]), "mei", "boost_python-py{0}{1}".format(ver[0], ver[1])]
            library_dirs = ["/usr/local/lib", "/usr/lib"]
            runtime_library_dirs = ["/usr/local/lib", "/usr/lib"]
            include_dirs = []
        else:
            libraries = ["boost_python-mt", "mei"]
            library_dirs = ["/usr/local/lib", "/usr/lib"]
            runtime_library_dirs = ["/usr/local/lib", "/usr/lib"]
            include_dirs = []
    link_args = ["-L/usr/local/lib", "-L/usr/lib"]

setup(
    name = 'pymei',
    long_description = longdesc,
    version = '2.0',
    url = "http://github.com/DDMAL/libmei",
    include_package_data=True,
    packages=find_packages(),
    ext_modules = [
        Extension(os.path.join("pymei", "_libmei"),
            [os.path.join("src","_libmei.cpp")],
            libraries=libraries,
            extra_link_args=link_args,
            library_dirs=library_dirs,
            include_dirs=include_dirs,
            runtime_library_dirs=runtime_library_dirs
        ),
        Extension(os.path.join("pymei","_libmei_exceptions"),
            [os.path.join("src","_libmei_exceptions.cpp")],
            libraries=libraries,
            extra_link_args=link_args,
            library_dirs=library_dirs,
            include_dirs=include_dirs,
            runtime_library_dirs=runtime_library_dirs
        ),
    ],
    test_suite="pymei_testsuite"
)
