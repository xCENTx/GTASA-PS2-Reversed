// GTA San Andreas PS2 - SLUS_209.46
#pragma once

#include "CPhysical.h"

namespace GTASA
{

    class CPlayerPedData
    {
    public:
    	class CWanted * m_pWanted; //0x0000
    	class CPedClothesDesc * m_pPedClothesDesc; //0x0004
    	class CCopPed * m_pArrestingCop; //0x0008
    	Vector2 m_vecFightMovement; //0x000C
    	float m_fMoveBlendRatio; //0x0014
    	float m_fTimeCanRun; //0x0018
    	float m_fMoveSpeed; //0x001C
    	uint8_t m_nChosenWeapon; //0x0020
    	char pad_0021[11]; //0x0021
    	float m_fAttackButtonCounter; //0x002C
    	class CVehicle * m_pDangerCar; //0x0030
    	uint16_t m_bits; //0x0034
    	char pad_0036[162]; //0x0036
    }; //Size: 0x00D8
    static_assert(sizeof(CPlayerPedData) == 0xD8);

    class CPlayerPed : public CPhysical
    {
    public:
    	char pad_04B4[4]; //0x04B4
    	class CPlayerPedData * m_pPlayerData; //0x04B8
    	char pad_04BC[196]; //0x04BC
    	float m_fHealth; //0x0580
    	float m_fMaxHealth; //0x0584
    	float m_fArmour; //0x0588
    	char pad_058C[4]; //0x058C
    	Vector2 m_vecAnimMovingShift; //0x0590
    	float m_fCurrentRotation; //0x0598
    	float m_fAimingRotation; //0x059C
    	float m_fHeadingChangeRate; //0x05A0
    	float m_fMoveAnim; //0x05A4
    	class CEntity * m_standingOnEntity; //0x05A8
    	Vector3 N0000090E; //0x05AC
    	Vector3 N000007F0; //0x05B8
    	class CEntity * m_pContactEntity; //0x05C4
    	float N000007F1; //0x05C8
    	class CVehicle * m_pVehicle; //0x05CC
    	class CVehicle * m_VehDeadInFrontOf; //0x05D0
    	char pad_05D4[8]; //0x05D4
    	class CPedStat * m_pStats; //0x05DC
    	class CWeapon m_aWeapons[13]; //0x05E0
    	char pad_074C[12]; //0x074C
    	uint8_t m_nActiveWeaponSlot; //0x0758
    	uint8_t m_nWeaponShootingRate; //0x0759
    	uint8_t m_nWeaponAccuracy; //0x075A
    	char pad_075B[1]; //0x075B
    	class CEntity * m_pTargetedObject; //0x075C
    	char pad_0760[1568]; //0x0760
    }; //Size: 0x0D80
    static_assert(sizeof(CPlayerPed) == 0xD80);
}