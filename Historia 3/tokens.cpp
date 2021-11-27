/**
 * Class for identify tokens that accomplish the grammar for Tokens:
 * 
 * token -> letra.letra* + digito.digito* + '+' + '-' + '*' + '/' + '(' + ')'
 *
 * Just one attribute: the string that contains numeric code and (possibly) the text
 * @author Jose Luis Montoya Pareja
 */
#include <iostream>
#include <string>
#include "tokens.h"

using namespace std;

/**
 * Constructor
 * @param strExpresion Expression to be analyzed
 */
Tokens::Tokens(string strExpresion)
{
	this->strExpresion = strExpresion;
}

/**
 * Added to C++ compliance
 */
Tokens::~Tokens()
{
	strExpresion.clear();
}

/**
 * Split the expression into the token that complies with the Tokens definition
 * If some characters are not recognized, the class shows a message
 */
void Tokens::identificarTokens()
{
	string strToken = "";
	int i = 0;
	int estado = 1;
	char caracter;
	while (i < this->strExpresion.length())
	{
		caracter = strExpresion.at(i++);
		if (estado == 1)
		{
			if ((caracter >= 'A' && caracter <= 'Z') ||
				(caracter >= 'a' && caracter <= 'z'))
			{
				strToken += caracter;
				estado = 2;
			}
			else
			{
				if (caracter >= '0' && caracter <= '9')
				{
					strToken += caracter;
					estado = 3;
				}
				else
				{
					switch (caracter)
					{
					case '+':
						estado = 4;
						strToken += caracter;
						break;
					case '-':
						estado = 5;
						strToken += caracter;
						break;
					case '*':
						estado = 6;
						strToken += caracter;
						break;
					case '/':
						estado = 7;
						strToken += caracter;
						break;
					case '(':
						estado = 8;
						strToken += caracter;
						break;
					case ')':
						estado = 9;
						strToken += caracter;
						break;
					default:
						cout << "No se reconoce el caracter " << caracter << "\n";
					}
				}
			}
		}
		else
		{
			if (estado == 2)
			{
				if ((caracter >= 'A' && caracter <= 'Z') ||
					(caracter >= 'a' && caracter <= 'z'))
					strToken += caracter;
				else
				{
					cout << "Token reconocido: " + strToken + "\n";
					estado = 1;
					strToken = "";
					i--;
				}
			}
			if (estado == 3)
			{
				if (caracter >= '0' && caracter <= '9')
					strToken += caracter;
				else
				{
					cout << "Token reconocido: " + strToken + "\n";
					estado = 1;
					strToken = "";
					i--;
				}
			}
		}
		if ((i == strExpresion.length() && (estado >= 1)) || (estado > 3 && estado <= 9))
		{
			cout << "Token reconocido: " + strToken + "\n";
			estado = 1;
			strToken = "";
		}
	}
}
