#include "parser.h"
#include <iostream>
#include <fstream>

using std::ios;
using std::ifstream;
using std::cerr;
using std::endl;

// Constructor
string fileName("file.hack");
Parser::Parser(string fileName) 
{
// Open the file
    ifstream inputFile(fileName, ios::in);

    // exit if the file couldn't be found
    if (!inputFile) {
        cerr << "File not found..." << endl;
        exit(1);
    }
}   // Parser::Parser


bool Parser::hasMoreCommands() 
{
   /*   hasmoreCommands() is true is there are more lines left on the file. 
    *   
    */

    /* Unclean code 
    string line;
    while (std::getline(fileName, line))
	{
        ++number_of_lines;
	}
    */
}

