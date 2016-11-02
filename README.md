# CIM2Mod

This tool is used to convert CIM-XML-RDF files into Modelica code.

### Dependencies:
* Boost >= 1.60.0
* ctemplate >= 2.3
* libconifg++
* CIMParser


### To build the CIM2Mod using cmake by following steps:

##### 1. Create build directory

    mkdir build

##### 2. Change into build directory and run cmake (with -DCMAKE_INSTALL_PREFIX=<PREFIX> for installation under <PREFIX> directory instead of the default '/usr/local')

    cd build/
    cmake .. -DCMAKE_INSTALL_PREFIX=<PREFIX>


##### 3. Compile CIM2Mod library

    make -j4


##### 4. [optional] Generate doxygen documentation

    make doc


#### Usage:
    ./CIM2Mod example.xml example.mo

  The tool generates the file: `example.mo`


### Install libconfig++ on Ubuntu:
     sudo apt-get install libconfig++-dev

### get GridData submodule
     git submodule update --init

### Solve Eclipse CDT indexer unresolve inclusion problem:
* Right click Project-> Properties-> Paths and Symbols -> Includes in GNU c++:

  * add GeneratedCode Path ../GeneratedCode and ../GeneratedCode/IEC61970
  * add glib-2.0 Path /usr/include/glib-2.0
  * add glibmm-2.4 Path /usr/include/glibmm-2.4
  * add libxml++ Path /usr/local/include/libxml++-2.6/libxml++, /usr/local/include/libxml++-2.6/,
  * in CIMParser.h: add #include \<libxml++/parsers/parser.h\>

* If Eclipse CDT indexer does not know c++11 containers, try:
  * http://stackoverflow.com/questions/17131745/eclipse-cdt-indexer-does-not-know-c12-containers

### TODO:
  [List is here](TODO.md)
