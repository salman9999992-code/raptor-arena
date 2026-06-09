#pragma once
#include "Game.h"

class Tekken : public Game
{
public:

    Tekken()
    : Game(
        "Tekken 7",
        "INDIVIDUAL TOURNAMENT\n"
        "\n"
        "Registration Fee : 300 PKR\n"
        "Winning Prize     : 3000 PKR\n"
        "\n"
        "Rules:\n"
        "1. Individual participation only.\n"
        "2. Double elimination format will be used.\n"
        "3. Matches are Best of 3.\n"
        "4. Grand Final is Best of 5.\n"
        "5. Character selection is allowed before match start.\n"
        "6. Intentional disconnects result in penalties.\n"
        "7. Fair play and sportsmanship are required.\n"
        "8. Organizer decisions are final.",
        3000)
    {
    }
};