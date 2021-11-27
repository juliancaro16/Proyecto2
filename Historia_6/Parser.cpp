#include <string>
#include <iostream>
#include "Parser.h"
#include <fstream>

using namespace std;

Parser::Parser(string archivo, string archivo2){
    archivoEntrada.open(archivo, ios::in);
    archivoSalida.open(archivo2, ios::app);
}

bool hasMoreCommands(){
    
    return NULL;
}

void advance(){}

string commandType(){}

string symbol(){
    return "";
}

string dest(){
    return "";
}

string comp(){
    return "";
}

string jump(){
    return "";
}

Parser::~Parser(){}