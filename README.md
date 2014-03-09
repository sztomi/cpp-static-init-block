# Implementing a code generator with libclang

This repository contains the full source code for my article about
[emulating Java static initialization blocks in C++](http://szelei.me/cpp-static-init-block).
Please refer to the article for details. 

## Usage

To use this in your own project, simply include `src/static_init.h` and you are good to go.

## Building

The following is required to build this project:

  * A C++11 compliant compiler (or reasonably compliant, probably even MSVC 2010 and older will
    work.)
  * Premake4 (http://industriousone.com/premake)

(but actually this is just a header-only library and a couple of files for demonstration).

To build the project on a \*nix system, run ./build.sh
