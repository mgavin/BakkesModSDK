﻿#pragma once
#include "mapdatawrapper.h"

class BAKKESMOD_PLUGIN_IMPORT MapListWrapper : public ObjectWrapper
{
public:
	CONSTRUCTORS(MapListWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;
	//END SELF IMPLEMENTED

	[[nodiscard]] ArrayWrapper<MapDataWrapper> GetSortedMaps() const;

private:
	PIMPL
	
};

