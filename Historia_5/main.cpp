#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include "SymbolTable.cpp"
#include "Parser.cpp"
#include "Code.cpp"

using namespace std;

bool file_exists(const string &name)
{
    ifstream f(name.c_str());
    return f.good();
}

bool findConfigFile(string &configFile){
    list<string> paths = {configFile};

    for (auto p : paths)
    {
        if (file_exists(p) == 1)
        {
            configFile = p;
            return true;
        }
    }
    return false;
}

void leerArchivo(string archive){
    string cadena;
    ifstream datos(archive);
    if (!datos.fail()){ //Si no hay error al leer el archivo
        while (!datos.eof()) //Mientras no haya acabado el archivo
        {
            getline(datos, cadena); //Con esta funcion tomamos la linea y la guardamos en cadena
            cout<<cadena<< endl;
        }
    }
}

void inicializar(){
    addEntry();
}
void primeraPasada(){
    addEntry();
}
void segundaPasada(){
    commandType();
    symbol();
    contains();
    GetAddress();
    addEntry();
    dest();
    dest();
    comp();
    jump();
}
void finalizar(){
}

int main(int argc, char *argv[]){
    inicializar();
    try{
        primeraPasada();
        segundaPasada();
        finalizar();
    }
    catch(exception){}
}