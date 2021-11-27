#include <string>

using namespace std;

class SymbolTable{
    public:
    SymbolTable();
    void addEntry(string symbol, int address);
    bool contains(string symbol);
    int GetAddress(string);
};