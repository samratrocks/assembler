#ifndef PARSER_H
#define PARSER_H

#include <string>
using std::string;

class Parser
{
    public: 
        Parser(const string &);   // Takes in the name of the input file
        
        bool hasMoreCommands();   // Are there more commands in the input source
        void advance();
        string commandType();     // Returns the commands type
        string symbol();
        string dest();
        string comp();
        string jump();
};

#endif

