#ifndef SC_ACSCRIPTS_H
#define SC_ACSCRIPTS_H

#include "ScriptPCH.h"

class AnticheatScripts: public Player
{
    public:
        AnticheatScripts();

        void OnLogout(Player* player);
        void OnLogin(Player* player);
};

#endif