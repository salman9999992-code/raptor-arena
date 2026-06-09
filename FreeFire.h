#pragma once
#include "Game.h"

class FreeFire : public Game
{
public:

    FreeFire()
    : Game(
        "Free Fire",
        "TEAM BASED TOURNAMENT (4 PLAYERS PER SQUAD)\n"
        "\n"
        "Registration Fee : 400 PKR Per Team\n"
        "Winning Prize     : 5000 PKR\n"
        "\n"
        "Rules:\n"
        "1. Every team must have 4 registered players.\n"
        "2. Third party tools are strictly prohibited.\n"
        "3. Players must join lobby on time.\n"
        "4. Unsportsmanlike behaviour may result in penalties.\n"
        "5. Team substitutions are not allowed after registration.\n"
        "6. Top teams advance to finals.\n"
        "7. Multiple matches determine final standings.\n"
        "8. Organizer decisions are final.",
        5000)
    {
    }
};