#include "Lexer.h"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {

    Lexer* lexer = new Lexer();

    // TODO
    string filename = argv[1];
    ifstream myFile(filename);
    string input;
    if (myFile.is_open()) {
        stringstream buffer;
        buffer << myFile.rdbuf();
        input = buffer.str();
    }
    else {
        cout << "File could not be found";
    }

    lexer->Run(input);

    lexer->printTokens();

    delete lexer;

    return 0;
}