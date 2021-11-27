#include <list>
#include <string>
#include <iostream>
#include <fstream>

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

int main(int argc, char *argv[])
{
    string archive;
    cout << "Ingrese el nombre del archivo: ";
    cin >> archive;

    if (!findConfigFile(archive))
        cout << "El archivo " << archive << " no existe" << std::endl;
}