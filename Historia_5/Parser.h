#include <string>

using namespace std;

class Parser{
    public://Metodos
    Parser(); //Constructor
    bool hasMoreCommands();
    void advance();
    string commandType();
    string symbol();
    string dest();
    string comp();
    string jump();
    ~Parser();
};