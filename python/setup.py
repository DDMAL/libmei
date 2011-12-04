from setuptools import find_packages
from distutils.core import setup, Extension
import os

longdesc = """ Python Bindings for LibMEI core. """

setup(
    name = 'pymei',
    long_description = longdesc,
    version = '0.1',
    url = "http://github.com/DDMAL/libmei",
    include_package_data=True,
    packages=find_packages(),
    ext_modules = [
        Extension(os.path.join("pymei","_pymei"), 
            [os.path.join("src","_pymei.cpp")],
            libraries=["boost_python-mt"],
            extra_link_args=["-framework", "mei"]),
    ],
    test_suite="pymei_testsuite"
)