//
// Created by amirahmad on 7/4/15.
//

#ifndef SIMPLECALCULATORPRO_HISTORY_H
#define SIMPLECALCULATORPRO_HISTORY_H

#include <iostream>
#include <vector>

using namespace std;

class History
{

public:
    static void add_to_history(string s);
    static void write_in_file();

    static string history;
};


#endif //SIMPLECALCULATORPRO_HISTORY_H
