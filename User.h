#pragma once
#include <iostream>
using namespace std;

class User
{
protected:
    string name;
    string regNo;

public:

    User(string n="", string r="")
    {
        name = n;
        regNo = r;
    }

    virtual void display()
    {
        cout << "\nName: " << name;
        cout << "\nReg No: " << regNo << endl;
    }

    string getName()
    {
        return name;
    }
};