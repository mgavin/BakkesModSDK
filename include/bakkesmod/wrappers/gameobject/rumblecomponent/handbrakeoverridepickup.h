#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/rumblecomponent/targetedpickup.h"
class CarWrapper;

class BAKKESMOD_PLUGIN_IMPORT HandbrakeOverridePickup : public TargetedPickup {
public:
	CONSTRUCTORS(HandbrakeOverridePickup)

	//AUTO-GENERATED FROM FIELDS
	CarWrapper GetOtherCar();
	void SetOtherCar(CarWrapper newOtherCar);

	//AUTO-GENERATED FUNCTION PROXIES
	void PickupEnd();
	void PickupStart();
private:
	PIMPL
};