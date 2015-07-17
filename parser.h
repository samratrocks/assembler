#ifndef PARSER_H
#define PARSER_H

#include <string>
using std::string;

class Parser
{
    public: 
        Parser(string fileName);   // Initialize parser 
        
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
        int totalCommands;
        int programCounter;     // Works like an Program Counter in assembly
        string currentCommand   // This string contains the current program command

};

#endif

