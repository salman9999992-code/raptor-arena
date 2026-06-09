#pragma once
#include <iostream>
using namespace std;

class Game
{
protected:

    string gameName;
    string rules;
    int prizePool;
    int registrationFee;
    string mode;   // SOLO / SQUAD

public:

    Game(
        string n = "",
        string r = "",
        int prize = 0,
        int fee = 0,
        string m = "SOLO"
    )
    {
        gameName = n;
        rules = r;
        prizePool = prize;
        registrationFee = fee;
        mode = m;
    }

    virtual void display()
    {
        cout << "\n====================================";
        cout << "\nGame Name        : " << gameName;
        cout << "\nMode             : " << mode;
        cout << "\nRegistration Fee : " << registrationFee;
        cout << "\nPrize Pool       : " << prizePool;
        cout << "\n------------------------------------";
        cout << "\nRules:\n" << rules;
        cout << "\n====================================\n";
    }

    string getGameName()
    {
        return gameName;
    }

    int getPrizePool()
    {
        return prizePool;
    }

    int getFee()
    {
        return registrationFee;
    }

    string getMode()
    {
        return mode;
    }
};