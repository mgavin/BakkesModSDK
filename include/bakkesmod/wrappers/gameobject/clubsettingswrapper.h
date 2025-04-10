#pragma once
#include "../engine/objectwrapper.h"
#include "../engine/unrealstringwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT ClubSettingsWrapper : public ObjectWrapper {
public:
	CONSTRUCTORS(ClubSettingsWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;
	//END SELF IMPLEMENTED

	//AUTO-GENERATED FROM FIELDS
	UnrealStringWrapper GetClubName();
	UnrealStringWrapper GetClubTag();
	int GetPrimaryColor();
	int GetAccentColor();
	//END AUTO-GENERATED FROM FIELDS

	//AUTO-GENERATED FROM METHODS
	//END AUTO-GENERATED FROM METHODS

private:
	PIMPL
};