#ifndef expreg_h
#define expreg_h

#include <string>

using namespace std;

class Tokens 
{
        private:
                string strExpresion;

        public:
                Tokens(string strExpresion);
                virtual ~Tokens();
                void identificarTokens();
};

#endif

