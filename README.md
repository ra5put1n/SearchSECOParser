# Parser

This is the Parser used by the SearchSECO project, it uses [srcML](https://www.srcml.org/#home) to structure code from different languages into a inform format. I then abstracts methods from code files which it can further Abstract to find Type-1 and Type-2 code clones. It has been tested on Windows 10 and Ubuntu 20.04, but should work on most UNIX systems.

# Installation

## Dependencies

* [srcML.](https://www.srcml.org/#home)
Make sure srcML is installed and registered in your path


## Building

### Stand-alone

### Library
Use Cmake to include the Parser folder, link the parser library, and reference the header files in the folder.

# Usage

## Stand-alone
    C:\path\to\parser>Parser.exe location\of\files\to\parse

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
