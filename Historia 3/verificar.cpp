#include <string>
#include <iostream>
#include "tokens.h"

using namespace std;

int main(int argc, char* argv[])
{
	string entrada;
	
	if(argc == 2)
		entrada = argv[1];
	else
		cin >> entrada;
		
	Tokens* expresion = new Tokens(entrada);
	
	expresion->identificarTokens();
}
