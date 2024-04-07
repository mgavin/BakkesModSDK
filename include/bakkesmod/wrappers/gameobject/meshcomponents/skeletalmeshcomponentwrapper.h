#pragma once
#include "meshcomponentwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT SkeletalMeshComponentWrapper : public MeshComponentWrapper
{
public:
	CONSTRUCTORS(SkeletalMeshComponentWrapper)

	//BEGIN SELF IMPLEMENTED
	_NODISCARD bool IsNull() const;
	explicit operator bool() const;
	//END SELF IMPLEMENTED

private:
	PIMPL
	
};
