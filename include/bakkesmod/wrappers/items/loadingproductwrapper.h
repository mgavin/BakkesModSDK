#pragma once

#include "../engine/objectwrapper.h"
#include "../arraywrapper.h"
#include "onlineproductwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT LoadingProductWrapper : ObjectWrapper
{
public:
	CONSTRUCTORS(LoadingProductWrapper)

	_NODISCARD bool IsNull() const;
	explicit operator bool() const;

	_NODISCARD int GetProductId() const;
	_NODISCARD int GetProductHashId() const;
	_NODISCARD ArrayWrapper<int> GetReferencedViews() const;
	_NODISCARD OnlineProductWrapper GetOnlineProduct() const;

private:
	PIMPL
};
