// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CPlayerInfo.h"

namespace GTASA
{
    // 
    class CWorldPlayers
    {
    public:
    	class CPlayerInfo m_Players[2]; //0x0000
    }; //Size: 0x0378
    static_assert(sizeof(CWorld::Players) == 0x378);
}