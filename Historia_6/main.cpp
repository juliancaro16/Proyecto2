#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include "SymbolTable.cpp"

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
    addEntry("R0",0);
    addEntry("R1",1);
    addEntry("R2",2);
    addEntry("R3",3);
    addEntry("R4",4);
    addEntry("R5",5);
    addEntry("R6",6);
    addEntry("R7",7);
    addEntry("R8",8);
    addEntry("R9",9);
    addEntry("R10",10);
    addEntry("R11",11);
    addEntry("R12",12);
    addEntry("R13",13);
    addEntry("R14",14);
    addEntry("R15",15);
    addEntry("SP",0);
    addEntry("LCL",1);
    addEntry("ARG",2);
    addEntry("THIS",3);
    addEntry("THAT",4);
    addEntry("SCREEN",16384);
    addEntry("KBD",24576);

}
void primeraPasada(){
    /* addEntry(); */
}
void segundaPasada(){
    /* commandType();
    symbol();
    contains();
    GetAddress();
    addEntry();
    dest();
    dest();
    comp();
    jump(); */
}
void finalizar(){
}

int main(int argc, char *argv[])
{
    inicializar();
    try{
        primeraPasada();
        segundaPasada();
        finalizar();
    }
    catch(exception){}
}