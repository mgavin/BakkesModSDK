#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/carcomponent/carcomponentwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT DoubleJumpComponentWrapper : public CarComponentWrapper {
public:
	CONSTRUCTORS(DoubleJumpComponentWrapper)

	//AUTO-GENERATED FROM FIELDS
	void SetJumpImpulse(float newJumpImpulse);
	float GetImpulseScale();
	void SetImpulseScale(float newImpulseScale);

	//AUTO-GENERATED FUNCTION PROXIES
	void ApplyForces(float ActiveTime);
	void OnCreated();
private:
	PIMPL
};