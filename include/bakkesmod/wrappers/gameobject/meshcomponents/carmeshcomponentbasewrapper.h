#pragma once
#include "skeletalmeshcomponentwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT CarMeshComponentBaseWrapper : public SkeletalMeshComponentWrapper
{
public:
	CONSTRUCTORS(CarMeshComponentBaseWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	[[nodiscard]] CarWrapper GetCar() const;

	//END SELF IMPLEMENTED

private:
	PIMPL
	
};
