#include <iostream>
#include "Calculator.h"
#include "Arithmetics.h"

using namespace std;

string Calculator::num1 = "";
string Calculator::num2 = "";
char *Calculator::op = "";
bool Calculator::showing_answer = false;


void Calculator::key_pressed(char *i)
{

    //If the key is a digit or a point concatenate it with num1
    if ((('0' <= i[0] && i[0] <= '9') || i[0] == '.') && num1.length() < 16)
    {
        if (showing_answer)
        {
            num1 = "";
            num2 = "";
            showing_answer = false;
        }
        num1 = num1 + i[0];
    }

        //backspace
    else if (!string("backspace").compare(i) && num1.length() > 0)
        num1 = num1.substr(0, num1.length() - 1);

        //Toggle positive or negative
    else if (!string("+/-").compare(i))
    {
        if (showing_answer)
        {
            num1 = string(num2);
            num2="";
            showing_answer = false;
        }
        if (num1[0] == '-')
            num1 = num1.substr(1, num1.length() - 1);
        else
            num1 = "-" + num1;
    }

        //If the key is a unary operation
    else if (!string("√").compare(i))
    {
        if (showing_answer)
        {
            num1 = string(num2);
            num2="";
            showing_answer = false;
        }
        //First check if there was another operation going on before
        //and if so, calculate the result and perform the new operation on that result
        if (num2.length() != 0)
            result();
        op = i;
        result();
    }

        //If the key is a binary operation
    else if (!string("+").compare(i) || !string("-").compare(i) || !string("×").compare(i) || !string("÷").compare(i))
    {
        if (showing_answer)
        {
            num1 = string(num2);
            num2="";
            showing_answer = false;
        }
        //First check if there was another operation going on before
        //and if so, calculate the result and set that result as the first operand of the new operation
        if (num2.length() != 0)
            result();
        op = i;
        num2 = string(num1);
        num1 = "";
    }

        //Clean key
    else if (!string("C").compare(i))
    {
        num2 = "";
        num1 = "";
        showing_answer = false;
    }
        //Result key
    else if (!string("=").compare(i) || i[0] == 10)
    {
        result();
    }

}


void Calculator::result()
{
    double n1, n2;
    try
    {
        n1 = stod(num1);
    } catch (exception e)
    {
        n1 = 0;
    }
    try
    {
        n2 = stod(num2);
    } catch (exception e)
    {
        n2 = 0;
    }
    double ans = Arithmetics::calculate(n2, op, n1);
    cout << n1 << " " << n2 << "=" << ans << endl;
    num1 = to_string(n1);
    num2 = to_string(ans);
    showing_answer = true;
    //TODO: add to history
}
