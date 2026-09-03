// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CPlaceable.h"

namespace GTASA
{
    class CEntity : public CPlaceable
    {
    public:
    	char pad_0018[264]; //0x0018
    }; //Size: 0x0120
    static_assert(sizeof(CEntity) == 0x120); // size unknown . . . template for cped
}