//
// Created by amirahmad on 7/4/15.
//

#include <fstream>
#include "History.h"
string History::history="";
void History::write_in_file()
{
    ofstream file;
    file.open ("history.txt");
    file << history;
    file.close();
}

void History::add_to_history(string s)
{
    history+=s+"\n";
}