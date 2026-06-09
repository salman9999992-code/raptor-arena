#pragma once
#include <fstream>
#include <string>

using namespace std;

class FileManager
{
public:

    void save(string text)
    {
        ofstream file("data.txt", ios::app);

        file << text << endl;

        file.close();
    }

    void saveRegistration(
        string id,
        string name,
        string game)
    {
        ofstream file(
            "registrations.txt",
            ios::app);

        file
        << id
        << " | "
        << name
        << " | "
        << game
        << endl;

        file.close();
    }
};