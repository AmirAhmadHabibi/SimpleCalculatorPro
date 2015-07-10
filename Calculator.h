//
// Created by amirahmad on 7/4/15.
//

#ifndef SIMPLECALCULATORPRO_CALCULATOR_H
#define SIMPLECALCULATORPRO_CALCULATOR_H

using namespace std;

class Calculator
{
    static char *op;
public:
    static string num1;
    static string num2;

    static void key_pressed(char *i);
    static void result();

    static bool showing_answer;
};

#endif //SIMPLECALCULATORPRO_CALCULATOR_H
