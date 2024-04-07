#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../../wrapperstructs.h"
#include "../.././gameobject/rumblecomponent/rumblepickupcomponentwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT AttachmentPickup : public RumblePickupComponentWrapper {
public:
	CONSTRUCTORS(AttachmentPickup)

	//AUTO-GENERATED FROM FIELDS

	//AUTO-GENERATED FUNCTION PROXIES
	void PickupEnd();
	void PickupStart();
private:
	PIMPL
};