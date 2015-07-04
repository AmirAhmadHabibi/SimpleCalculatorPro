//
// Created by amirahmad on 7/4/15.
//

#include "History.h"

void History::write_in_file()
{
    //TODO
}

void History::add_to_history(string s)
{
    history+=s+"\n";
}

string History::getHistory()
{
    return history;
}

History::History()
{
    history ="";
}