#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/rumblecomponent/springpickup.h"

class BAKKESMOD_PLUGIN_IMPORT BallLassoPickup : public SpringPickup {
public:
	CONSTRUCTORS(BallLassoPickup)

	//AUTO-GENERATED FROM FIELDS

	//AUTO-GENERATED FUNCTION PROXIES
	void ScaleSpringMeshToLocation(Vector& NewLocation, Vector& TargetLocation);
	void DoSpring(unsigned long bFirstHit);
private:
	PIMPL
};