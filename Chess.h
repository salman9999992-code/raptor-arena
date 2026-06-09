#pragma once
#include "Game.h"

class Chess : public Game
{
public:

    Chess()
    : Game(
        "Chess",
        "INDIVIDUAL TOURNAMENT\n"
        "\n"
        "Registration Fee : 200 PKR\n"
        "Winning Prize     : 2000 PKR\n"
        "\n"
        "Rules:\n"
        "1. Individual participation only.\n"
        "2. Official FIDE rules will be followed.\n"
        "3. Time control is 10 minutes per player.\n"
        "4. Illegal moves are not permitted.\n"
        "5. Swiss rounds determine qualifiers.\n"
        "6. Top players advance to knockout stage.\n"
        "7. Checkmate, resignation or timeout decides winner.\n"
        "8. Tournament committee decisions are final.",
        2000)
    {
    }
};