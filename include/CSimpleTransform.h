// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CVector.h"

namespace GTASA
{
    // VERIFIED: runtime + CPopulation::AddPed
    class CSimpleTransform
    {
    public:
    	Vec3 m_vPosn; //0x0000
    	float m_fHeading; //0x000C
    }; //Size: 0x0010
    static_assert(sizeof(CSimpleTransform) == 0x10);
}