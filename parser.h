#ifndef PARSER_H
#define PARSER_H

#include <string>
using std::string;

class Parser
{
    public: 
        Parser(string fileName);   // Takes in the name of the input file
        
        bool hasMoreCommands();   // Are there more commands in the input source
        void advance();
        string commandType();     // Returns the commands type
        string symbol();
        string dest();
        string comp();
        string jump();

    private:
        /* Data objects */
        ifstream inputFile;
        string fileName;

};

#endif

