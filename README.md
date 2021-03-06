# Apache Ignite - Proof of Concept

## Summary
<p align="left">
<a href="https://travis-ci.org/lewismj/poc">
<img src="https://travis-ci.org/lewismj/poc.svg?branch=master"/>
</a>

This project is a simple proof-of-concept for Apache Ignite.

## Components

- analytics-core, a dummy analytics library.
- analytics-interface, a Python interface to the analytics library.

## Build Instructions

### Prerequisites

- C++ compiler
- Boost
- CMake
- Python
- Swig
- Docker

To install these under MacOS, use Homebrew:

```
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
brew install --with-clang llvm
brew install boost
brew install python
brew install cmake
brew install docker
```

### Building the POC

The POC uses a small native C++ library together with Python interface, this can be built
and installed as follows (you can specify where you want to install my changing the 
`CMAKE_INSTALL_PREFIX` parameter):

```
cmake -DCMAKE_INSTALL_PREFIX=~/poc/analytics && make all install
```


## Running Demo

