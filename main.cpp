#include <iostream>
#include <vector>
#include <limits>

#include "Student.h"
#include "Admin.h"
#include "User.h"

#include "PUBG.h"
#include "FreeFire.h"
#include "Chess.h"
#include "Tekken.h"

#include "Registration.h"
#include "Leaderboard.h"

#include "Bracket.h"
#include "Statistics.h"

#include "FileManager.h"
#include "Team.h"

#include "Certificate.h"
#include "Game.h"
#include "tournament.h"


using namespace std;

int main()
{
    vector<Registration> registrations;
    FileManager file;

    int choice;

    do
    {
        cout << "\n================================";
        cout << "\n       RAPTOR ARENA PRO";
        cout << "\n================================";

        cout << "\n1. View Games";
        cout << "\n2. Register Player";
        cout << "\n3. View Registrations";
        cout << "\n4. Leaderboard";
        cout << "\n5. Save All Records";
        cout << "\n0. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {

        case 1:
        {
            PUBG pubg;
            FreeFire ff;
            Chess chess;
            Tekken tekken;

            cout << "\n===== AVAILABLE GAMES =====\n";

            pubg.display();
            ff.display();
            chess.display();
            tekken.display();

            break;
        }

        case 2:
        {
            string name;
            int gameChoice;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEnter Player Name: ";
            getline(cin, name);

            cout << "\nSelect Game:";
            cout << "\n1. PUBG (Squad)";
            cout << "\n2. Free Fire (Squad)";
            cout << "\n3. Chess (Solo)";
            cout << "\n4. Tekken (Solo)";

            cout << "\nChoice: ";
            cin >> gameChoice;

            string game;

            switch(gameChoice)
            {
                case 1: game = "PUBG"; break;
                case 2: game = "Free Fire"; break;
                case 3: game = "Chess"; break;
                case 4: game = "Tekken"; break;
                default: game = "Unknown"; break;
            }

            Registration reg(name, game);
            registrations.push_back(reg);

            cout << "\n================================";
            cout << "\nRegistration Successful!";
            cout << "\nPlayer : " << name;
            cout << "\nGame   : " << game;
            cout << "\n================================\n";

            file.saveRegistration(name, game, "REGISTERED");

            break;
        }

        case 3:
        {
            cout << "\n===== REGISTRATION LIST =====\n";

            if(registrations.empty())
            {
                cout << "No registrations found.\n";
                break;
            }

            for(auto &r : registrations)
            {
                r.display();
            }

            break;
        }

        case 4:
        {
            cout << "\n===== LEADERBOARD =====\n";

            Leaderboard p1("Player1", 120);
            Leaderboard p2("Player2", 90);
            Leaderboard p3("Player3", 70);

            p1.display();
            p2.display();
            p3.display();

            break;
        }

        case 5:
        {
            cout << "\nSaving all registrations to file...\n";

            for(auto &r : registrations)
            {
                file.save("Player Record Saved");
            }

            cout << "Data saved successfully.\n";

            break;
        }

        case 0:
        {
            cout << "\nExiting RAPTOR ARENA PRO...\n";
            break;
        }

        default:
        {
            cout << "\nInvalid Choice. Try again.\n";
        }

        }

    } while(choice != 0);

    return 0;
}