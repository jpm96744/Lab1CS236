#ifndef LEXER_H
#define LEXER_H
#include <vector>
#include "Automaton.h"
#include "Token.h"
#include <iostream>
#include <cctype>

using namespace std;
class Lexer
{
private:
    std::vector<Automaton*> automata;
    std::vector<Token*> tokens;

    void CreateAutomata();

    // TODO: add any other private methods here (if needed)

public:
    Lexer();
    ~Lexer();

    void Run(std::string& input);
    //TokenType returnTokenType(Automaton* maxAutomaton);
    
    // TODO: add other public methods here

    void printTokens();
};

#endif // LEXER_H

