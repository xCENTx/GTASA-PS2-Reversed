// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CVector.h"

namespace GTASA
{
	// VERIFIED: runtime + CPopulation::AddPed
	// this is more than likely a 4x4 matrix but not seen it accessed as such.
	class CMatrix
	{
	public:
		Vec3 m_right; //0x0000
		char pad_000C[4]; //0x000C
		Vecr3 m_forward; //0x0010
		char pad_001C[4]; //0x001C
		Vec3 m_up; //0x0020
		char pad_002C[4]; //0x002C
		Vec3 m_pos; //0x0030
		char pad_003C[4]; //0x003C
	}; //Size: 0x0040
	static_assert(sizeof(CMatrix) == 0x40);
}