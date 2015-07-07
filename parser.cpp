#include <parser.h>
#include <iostream>
#include <fstream>

using std::ios;
using std::ifstream;
using std::cerr;
using std::endl;

int main()
{
    // Open the file
    ifstream inputFile("file.hack", ios::in);

    // exit if the file couldn't be found
    if (!inputFile) {
        cerr << "File not found..." << endl;
        exit(1);
    }
}
