#pragma once

#include "../engine/objectwrapper.h"
#include "../arraywrapper.h"
#include "onlineproductwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT LoadingProductWrapper : ObjectWrapper
{
public:
	CONSTRUCTORS(LoadingProductWrapper)

	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	[[nodiscard]] int GetProductId() const;
	[[nodiscard]] int GetProductHashId() const;
	[[nodiscard]] ArrayWrapper<int> GetReferencedViews() const;
	[[nodiscard]] OnlineProductWrapper GetOnlineProduct() const;

private:
	PIMPL
};
