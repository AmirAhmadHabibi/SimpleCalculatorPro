//
// Created by amirahmad on 7/4/15.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

string Calculator::number = "";


void Calculator::key_pressed(char i)
{
    cout<<i;
    if('0'<=i && i<='9' || i=='.')
    {
        number+=i;
    }
    else if(i=='+'||i=='-'||i=='*'||i=='/')
    {
        //TODO
    }
    else if(i==10)
    {
        //TODO
    }
}

