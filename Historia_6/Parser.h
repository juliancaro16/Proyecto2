#include <string>
#include "SymbolTable.h"

using namespace std;

class Parser{
    public:
    fstream archivoEntrada, archivoSalida;

    SymbolTable tablaSimbolos = SymbolTable();
    
    Parser(string archivo, string archivo2);
    bool hasMoreCommands();
    void advance();
    string commandType();
    string symbol();
    string dest();
    string comp();
    string jump();
    ~Parser();

    private:
    string ComActual;
};