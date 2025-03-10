//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#include "cbase.h"
#include <KeyValues.h>
#include "hl1_weapon_parse.h"
#include "ammodef.h"

FileWeaponInfo_t* CreateWeaponInfo()
{
	return new CHL1WeaponInfo;
}



CHL1WeaponInfo::CHL1WeaponInfo()
{
	szPModel[0] = 0;
}


void CHL1WeaponInfo::Parse( KeyValues *pKeyValuesData, const char *szWeaponName )
{
	BaseClass::Parse( pKeyValuesData, szWeaponName );

	Q_strncpy( szPModel, pKeyValuesData->GetString( "p_model" ), MAX_WEAPON_STRING );
}
