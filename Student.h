#pragma once
#include "User.h"

class Student : public User
{
public:

    Student(string n="", string r="")
    : User(n,r)
    {
    }

    void display() override
    {
        cout << "\nStudent Name: " << name;
        cout << "\nReg No: " << regNo << endl;
    }
};