#pragma once

#include <iostream>

using namespace std;

class Statistics
{
private:

    int totalPlayers;
    int totalTeams;
    int revenue;

public:

    Statistics(
        int p=0,
        int t=0,
        int r=0)
    {
        totalPlayers=p;
        totalTeams=t;
        revenue=r;
    }

    void display()
    {
        cout<<"\n===== SYSTEM STATISTICS =====";

        cout<<"\nTotal Players: "<<totalPlayers;
        cout<<"\nTotal Teams: "<<totalTeams;
        cout<<"\nTotal Revenue: "<<revenue;
    }
};