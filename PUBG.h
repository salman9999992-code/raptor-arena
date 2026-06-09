#pragma once
#include "Game.h"

class PUBG : public Game
{
public:

    PUBG()
    : Game(
        "PUBG Mobile",
        "TEAM BASED TOURNAMENT (4 PLAYERS PER SQUAD)\n"
        "\n"
        "Registration Fee : 500 PKR Per Team\n"
        "Winning Prize     : 5000 PKR\n"
        "\n"
        "Rules:\n"
        "1. Each team must consist of exactly 4 players.\n"
        "2. No emulator players allowed.\n"
        "3. Use of hacks, cheats or exploits results in immediate disqualification.\n"
        "4. Teaming with other squads is prohibited.\n"
        "5. Players must use their registered accounts.\n"
        "6. Top teams qualify for playoffs.\n"
        "7. Finals consist of multiple matches.\n"
        "8. Tournament organizer's decision is final.",
        5000)
    {
    }
};