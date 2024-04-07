#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/rumblecomponent/rumblepickupcomponentwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT CarSpeedPickup : public RumblePickupComponentWrapper {
public:
	CONSTRUCTORS(CarSpeedPickup)

	//AUTO-GENERATED FROM FIELDS
	float GetGravityScale();
	void SetGravityScale(float newGravityScale);
	Vector GetAddedForce();
	void SetAddedForce(Vector newAddedForce);
	float GetOrigGravityScale();
	void SetOrigGravityScale(float newOrigGravityScale);

	//AUTO-GENERATED FUNCTION PROXIES
	void PickupEnd();
	void PickupStart();
private:
	PIMPL
};