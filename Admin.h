#pragma once
#include "User.h"

class Admin : public User
{
public:

    Admin(string n="", string r="")
    : User(n,r)
    {
    }

    void display() override
    {
        cout << "\nAdmin: " << name << endl;
    }
};