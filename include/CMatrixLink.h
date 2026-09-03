// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CMatrix.h"

namespace GTASA
{
    // VERIFIED: runtime + CPopulation::AddPed
    class CMatrixLink : public CMatrix
    {
    public:
    	class CPlaceable * m_pOwner; //0x0040
    	class CMatrixLink * m_pPrev; //0x0044
    	class CMatrixLink * m_pNext; //0x0048
    }; //Size: 0x004C
    static_assert(sizeof(CMatrixLink) == 0x4C);
}