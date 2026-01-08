from setuptools import setup, Extension
from pybind11.setup_helpers import Pybind11Extension

ext_modules = [
    Pybind11Extension("hello_cpp", ["module.cpp"]),
]

setup(ext_modules=ext_modules)
