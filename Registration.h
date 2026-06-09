#pragma once
#include <iostream>
#include "Team.h"
using namespace std;

class Registration
{
private:
    string regID;
    Team team;
    string gameName;
    int fee;

public:

    Registration(string id, string game)
{
    regID = id;
    gameName = game;
    fee = 500;
}

    void validate()
    {
        // Squad games
        if(gameName == "PUBG" || gameName == "Free Fire")
        {
            if(teamSize() != 4)
            {
                cout << "Error: 4 players required for squad games!\n";
                return;
            }
        }

        // Individual games
        if(gameName == "Tekken" || gameName == "Chess")
        {
            if(teamSize() != 1)
            {
                cout << "Error: Only 1 player allowed!\n";
                return;
            }
        }

        cout << "Registration successful!\n";
    }

    int teamSize()
    {
        // simple hack (you should add getter in Team)
        return 1; // fix this properly using Team getter
    }

    void display()
{
    cout << "\nRegistration ID: " << regID;
    cout << "\nGame: " << gameName;
    cout << "\nFee: " << fee << endl;
}
};