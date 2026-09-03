// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CEntity.h"

namespace GTASA
{
    class CPhysical : public CEntity
    {
    public:
    	char pad_0120[916]; //0x0120
    }; //Size: 0x04B4
    static_assert(sizeof(CPhysical) == 0x4B4); // size currently unknown , padding for cped
}