#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/rumblecomponent/balllassopickup.h"

class BAKKESMOD_PLUGIN_IMPORT BattarangPickup : public BallLassoPickup {
public:
	CONSTRUCTORS(BattarangPickup)

	//AUTO-GENERATED FROM FIELDS
	float GetSpinSpeed();
	void SetSpinSpeed(float newSpinSpeed);
	float GetCurRotation();
	void SetCurRotation(float newCurRotation);

	//AUTO-GENERATED FUNCTION PROXIES
private:
	PIMPL
};