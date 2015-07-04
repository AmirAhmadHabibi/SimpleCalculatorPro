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
private:
    string history;

public:
    History();
    string getHistory();

protected:
    void add_to_history(string s);
    void write_in_file();

};


#endif //SIMPLECALCULATORPRO_HISTORY_H
