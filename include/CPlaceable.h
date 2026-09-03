// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CSimpleTransform.h"
#include "CMatrixLink.h"

namespace GTASA
{
    // VERIFIED: runtime + CPopulation::AddPed
    class CPlaceable
    {
    public:
    	char pad_0000[4]; //0x0000
    	class CSimpleTransform m_placement; //0x0004
    	class CMatrixLink * m_matrix; //0x0014
    }; //Size: 0x0018
    static_assert(sizeof(CPlaceable) == 0x18);
}