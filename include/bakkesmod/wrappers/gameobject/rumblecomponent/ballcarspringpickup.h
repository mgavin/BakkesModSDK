#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/rumblecomponent/springpickup.h"

class BAKKESMOD_PLUGIN_IMPORT BallCarSpringPickup : public SpringPickup {
public:
	CONSTRUCTORS(BallCarSpringPickup)

	//AUTO-GENERATED FROM FIELDS

	//AUTO-GENERATED FUNCTION PROXIES
	void ScaleSpringMeshToLocation(Vector& NewLocation, Vector& TargetLocation);
private:
	PIMPL
};