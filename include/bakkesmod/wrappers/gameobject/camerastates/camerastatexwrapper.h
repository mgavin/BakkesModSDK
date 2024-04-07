#pragma once

#include "bakkesmod/wrappers/engine/objectwrapper.h"


class BAKKESMOD_PLUGIN_IMPORT CameraStateXWrapper : public ObjectWrapper
{
public:
	CONSTRUCTORS(CameraStateXWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	[[nodiscard]] std::string GetStateType() const;
	//END SELF IMPLEMENTED

private:
	PIMPL
	
};
