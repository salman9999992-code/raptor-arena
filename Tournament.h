#pragma once
#include <iostream>
using namespace std;

class Tournament
{
private:

    string date;
    string venue;

public:

    Tournament(
        string d="",
        string v="")
    {
        date = d;
        venue = v;
    }

    void display()
    {
        cout << "\nDate: " << date;
        cout << "\nVenue: " << venue << endl;
    }
};