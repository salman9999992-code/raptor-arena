#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Bracket
{
private:

    vector<string> players;

public:

    void addPlayer(string p)
    {
        players.push_back(p);
    }

    void generate()
    {
        cout<<"\n===== TOURNAMENT BRACKET =====\n";

        for(int i=0;i<players.size()-1;i+=2)
        {
            cout
            <<players[i]
            <<" VS "
            <<players[i+1]
            <<endl;
        }
    }
};