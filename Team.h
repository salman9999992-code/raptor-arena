#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Team
{
private:
    string teamName;
    vector<string> members;

public:

    Team(string name = "")
    {
        teamName = name;
    }

    void addMember(string member)
    {
        members.push_back(member);
    }

    void display()
    {
        cout << "\nTeam: " << teamName;
        cout << "\nMembers:\n";

        for (string m : members)
        {
            cout << m << endl;
        }
    }

    int getSize()
    {
        return members.size();
    }
};