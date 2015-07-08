//
// Created by amirahmad on 7/4/15.
//
#include <gtk/gtk.h>
#include <iostream>
#include "Calculator.h"

using namespace std;

string Calculator::number = "";
double Calculator::d1=0;
double Calculator::d2=0;
int Calculator::i1=0;
int Calculator::i2=0;

void Calculator::key_pressed(char i)
{
//    g_print((const gchar *) i);
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

