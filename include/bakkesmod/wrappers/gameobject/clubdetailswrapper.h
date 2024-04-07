#pragma once
#include "../engine/unrealstringwrapper.h"
#include "../structarraywrapper.h"
#include "clubsettingswrapper.h"
#include "../uniqueidwrapper.h"

struct BAKKESMOD_PLUGIN_IMPORT ClubMember {
	unsigned char paddingForReasons[72];
	[[deprecated("Use GetUniqueID instead")]]
	SteamID GetSteamId(); //DEPRECATED
	UniqueIDWrapper GetUniqueID();
	UnrealStringWrapper GetName();
};

//SteamID steamID;
//unsigned char padding[48];
//UnrealStringWrapper name;


class BAKKESMOD_PLUGIN_IMPORT ClubDetailsWrapper : public ClubSettingsWrapper {
public:
	CONSTRUCTORS(ClubDetailsWrapper)

	//BEGIN SELF IMPLEMENTED
	//END SELF IMPLEMENTED

	//AUTO-GENERATED FROM FIELDS
	unsigned long long GetClubID();
	[[deprecated("Use GetOwnerPlayerUniqueID instead")]]
	SteamID GetOwnerPlayerID(); //DEPRECATED
	UniqueIDWrapper GetOwnerPlayerUniqueID();
	UnrealStringWrapper GetMotD();
	unsigned long GetbVerified();
	unsigned long long GetLastUpdatedTime();
	StructArrayWrapper<ClubMember> GetMembers();

	//END AUTO-GENERATED FROM FIELDS

	//AUTO-GENERATED FROM METHODS
	//END AUTO-GENERATED FROM METHODS

private:
	PIMPL
};