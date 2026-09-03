// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CPlayerPed.h"

namespace GTASA
{
    class CPlayerInfo
    {
    public:
    	class CPlayerPed * m_pPed; //0x0000
    	class CPlayerPedData m_playerData; //0x0004
    	char pad_00DC[8]; //0x00DC
    	int32_t m_nMoney; //0x00E4
    	int32_t m_nDisplayMoney; //0x00E8
    	uint32_t m_nCollectablesPickedUp; //0x00EC
    	uint32_t m_nTotalNumCollectables; //0x00F0
    	char pad_00F4[200]; //0x00F4
    }; //Size: 0x01BC
    static_assert(sizeof(CPlayerInfo) == 0x1BC);
}