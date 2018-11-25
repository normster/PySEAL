import pybind11
from setuptools import setup, Extension

setup(
    name='seal',
    version='3.0',
    author='Norman Mu', 
    author_email='thenormanmu@gmail.com',
    description='Python wrapper for SEAL',
    ext_modules = [
        Extension(
            'seal',
            ['wrapper.cpp'],
            include_dirs=[
                pybind11.get_include(),
                pybind11.get_include(True),
            ],
            language='c++',
            extra_compile_args=['-std=c++17'],
            extra_objects=['/usr/local/lib/libseal.a'],
        ),
    ],
)
