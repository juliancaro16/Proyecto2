#include <string>
#include <iostream>
#include "Code.h"

using namespace std;

int dest(string dest){

    int bin = 000;

    if (dest=="M"){bin=001;}
    else if (dest=="D"){bin=010;}
    else if (dest=="MD"){bin=011;}
    else if (dest=="A"){bin=100;}
    else if (dest=="AM"){bin=101;}
    else if (dest=="AD"){bin=110;}
    else if (dest=="AMD"){bin=111;}

    return bin;
}

int comp(string){
    return 0;
}

int jump(string jump){

    int bin = 000;

    if (jump=="JGT"){bin=001;}
    else if (jump=="JEQ"){bin=010;}
    else if (jump=="JGE"){bin=011;}
    else if (jump=="JLT"){bin=100;}
    else if (jump=="JNE"){bin=101;}
    else if (jump=="JLE"){bin=110;}
    else if (jump=="JMP"){bin=111;}
    
    return bin;
}