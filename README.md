A port of the abcm2ps to the Qt-centric build system, as a static library.

Using Qt to provide the cross-platform side of things: this is intended to be built into a Qt application later on. There is no Qt code in here at all, it's pure C.

It's currently a command-line application which has been crammed into a library. There are two layers of API: the original application one, and a shorthand one which allows you to pass in the path of an ABC file and the (approximate) path for an SVG outfile.

Current TODO as of 10/21/2015:

- The application is a one-shot application, and consequently the library can not be used twice without crashing. This must change.
- Better control of where the outfile goes to. This one should be easy.

Tested on Linux Mint and as a cross-compiled application on Windows, built using the most-excellent MinGW/MXE cross-compiler and a rudimentary toolchain.
