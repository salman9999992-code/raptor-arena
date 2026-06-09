#pragma once
#include <iostream>
using namespace std;

class Leaderboard
{
private:

    string player;
    int points;

public:

    Leaderboard(
        string p="",
        int pt=0)
    {
        player = p;
        points = pt;
    }

    void display()
    {
        cout
        << player
        << " : "
        << points
        << " Points"
        << endl;
    }
};