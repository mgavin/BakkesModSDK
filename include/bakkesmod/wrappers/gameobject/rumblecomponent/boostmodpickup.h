#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/rumblecomponent/rumblepickupcomponentwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT BoostModPickup : public RumblePickupComponentWrapper {
public:
	CONSTRUCTORS(BoostModPickup)

	//AUTO-GENERATED FROM FIELDS
	unsigned long GetbUnlimitedBoost();
	void SetbUnlimitedBoost(unsigned long newbUnlimitedBoost);
	float GetBoostStrength();
	void SetBoostStrength(float newBoostStrength);
	float GetOldBoostStrength();
	void SetOldBoostStrength(float newOldBoostStrength);

	//AUTO-GENERATED FUNCTION PROXIES
	void PickupEnd();
	void PickupStart();
private:
	PIMPL
};