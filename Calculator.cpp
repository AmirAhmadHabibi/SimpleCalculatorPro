
#include <iostream>
#include "Calculator.h"

using namespace std;

string Calculator::number = "";
double Calculator::d1 = 0;
double Calculator::d2 = 0;
int Calculator::i1 = 0;
int Calculator::i2 = 0;

void Calculator::key_pressed(char *i)
{
    if ('0' <= i[0] && i[0] <= '9' || i[0] == '.')
    {
        number += i;
    }
    else if (!string("+/-").compare(i))
    {
        //TODO
    }
    else if (i[0] == '+' || i[0] == '-' || i[0] == '*' || i[0] == '/')
    {
        //TODO
    }
    else if (i[0] == 10)
    {
        //TODO
    }
}

