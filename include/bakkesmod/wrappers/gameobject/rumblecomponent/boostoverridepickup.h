#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/rumblecomponent/targetedpickup.h"
class CarWrapper;

class BAKKESMOD_PLUGIN_IMPORT BoostOverridePickup : public TargetedPickup {
public:
	CONSTRUCTORS(BoostOverridePickup)

	//AUTO-GENERATED FROM FIELDS
	CarWrapper GetOtherCar();
	void SetOtherCar(CarWrapper newOtherCar);

	//AUTO-GENERATED FUNCTION PROXIES
	void PickupEnd();
	void OnTargetChanged();
	void PickupStart();
private:
	PIMPL
};