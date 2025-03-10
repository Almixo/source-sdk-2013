//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#ifndef HL1_WEAPON_PARSE_H
#define HL1_WEAPON_PARSE_H
#ifdef _WIN32
#pragma once
#endif


#include "weapon_parse.h"
#include "networkvar.h"


//--------------------------------------------------------------------------------------------------------
class CHL1WeaponInfo : public FileWeaponInfo_t
{
public:
	DECLARE_CLASS_GAMEROOT( CHL1WeaponInfo, FileWeaponInfo_t );

	CHL1WeaponInfo();

	virtual void Parse( ::KeyValues *pKeyValuesData, const char *szWeaponName );

public:

	char szPModel[MAX_WEAPON_STRING];
};


#endif // HL2MP_WEAPON_PARSE_H
