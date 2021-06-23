# Parser

This is the Parser used by the SearchSECO project, it uses [srcML](https://www.srcml.org/#home) to structure code from different languages into a inform format. I then abstracts methods from code files which it can further Abstract to find Type-1 and Type-2 code clones. It has been tested on Windows 10 and Ubuntu 20.04/18.04, but should work on most UNIX systems.

# Installation

## Dependencies

* Windows 10+, Ubuntu 18.04. Might work on older Windows versions or other UNIX systems but has not been tested.
* [srcML.](https://www.srcml.org/#home)
Make sure srcML is installed and registered in your path
* [antlr](https://www.antlr.org/), for Windows the files are included, on UNIX make sure to download libantlr4-runtime-dev (using apt/apt-get).


## Building

### Stand-alone
#### Visual-Studio
Open solution and simply build the project, copy and past the antlr dll file in the external/antlr folder to the appropriate location (where you have build the executable).
#### Cmake
Run Cmake and build in the StandAlone folder.

### Library
Use Cmake to include the libSearchSECOParser folder, link the libSearchSECOParser library, and reference the header files in the folder. Or use cmake in libSearchSECOParser folder to build library.

# Usage

## Stand-alone
    C:\path\to\parser>SearchSECOParserStandalone.exe location\of\files\to\parse

Simply give the Parser either a directory, or compressed file containing the files you want parsed. 
It will return a list of found methods with for each method:
* A hash of the abstracted code
* The name of the found method
* Where the method was found (both file and line number)


## Library

Include _Parser.h_ in the file you want to use the parser.
Call the _parse_ method with the path to the files that you want to parse, and (optionally) the number of threads to use.
This will return a vector containing a [HashData](https://git.science.uu.nl/searchseco/parser/-/blob/master/Parser/HashData.h) for each found method.

# Copyright

This program has been developed by students from the bachelor Computer Science at Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
