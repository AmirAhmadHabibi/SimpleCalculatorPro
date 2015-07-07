//
// Created by amirahmad on 7/4/15.
//

#ifndef SIMPLECALCULATORPRO_CALCULATOR_H
#define SIMPLECALCULATORPRO_CALCULATOR_H

using namespace std;

class Calculator
{
private:
    static double d1,d2;
    static int i1,i2;
    static char op;
public:
    static string number;
    static void key_pressed(char i);
};
#endif //SIMPLECALCULATORPRO_CALCULATOR_H
