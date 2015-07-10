//
// Created by amirahmad on 7/4/15.
//
#include <iostream>
#include <math.h>
#include "Arithmetics.h"

using namespace std;

double Arithmetics::calculate(double A, char *op, double B)
{
    if (!string("√").compare(op) && B >= 0)
        return sqrt(B);
    else if (!string("+").compare(op))
        return A + B;
    else if (!string("-").compare(op))
        return A - B;
    else if (!string("×").compare(op))
        return A * B;
    else if (!string("÷").compare(op) && B != 0)
        return A / B;
    return 0;
}

