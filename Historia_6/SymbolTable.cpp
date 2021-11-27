#include <string>
#include <iostream>
#include "SymbolTable.h"
#include <map>

using namespace std;
using std::map;

map<string, int> map1;
SymbolTable::SymbolTable()
{

    map1["R0"] = 0;
    map1["R1"] = 1;
    map1["R2"] = 2;
    map1["R3"] = 3;
    map1["R4"] = 4;
    map1["R5"] = 5;
    map1["R6"] = 6;
    map1["R7"] = 7;
    map1["R8"] = 8;
    map1["R9"] = 9;
    map1["R10"] = 10;
    map1["R11"] = 11;
    map1["R12"] = 12;
    map1["R13"] = 13;
    map1["R14"] = 14;
    map1["R15"] = 15;
    map1["SP"] = 0;
    map1["LCL"] = 1;
    map1["ARG"] = 2;
    map1["THIS"] = 3;
    map1["THAT"] = 4;
    map1["SCREEN"] = 16384;
    map1["KBD"] = 24576;
}

void addEntry(string symbol, int address)
{
    map1.insert(pair<string,int>(symbol,address));
}

bool contains(string symbol)
{
    return NULL;
}

int GetAddress(string symbol)
{

    return 0;
}

SymbolTable::~SymbolTable()
{
}