# Parser

This is the Parser used by the SearchSECO project, it uses [srcML](https://www.srcml.org/#home) to structure code from different languages into a inform format. I then abstracts methods from code files which it can further Abstract to find Type-1 and Type-2 code clones.

# Installation

## Dependencies

[srcML](https://www.srcml.org/#home)
Make sure srcML is installed and registered in your path


## Building

<TODO>

# Usage

## Stand-alone
'..\path\to\parser\Parser.exe "\location\of\files\to\parse"'

Simply give the Parser either a directory, or compressed file containing the files you want parsed. 
It will return a list of found methods with for each method:
* A hash of the abstracted code
* The name of the found method
* Where the method was found (both file and line number)


## Library

<TODO>


# Copyright

This program has been developed by students from the bachelor Computer Science at Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
