#pragma once

#include "../engine/objectwrapper.h"
#include "loadingproductwrapper.h"
#include "../arraywrapper.h"

class BAKKESMOD_PLUGIN_IMPORT GfxProductsWrapper : ObjectWrapper
{
public:
	CONSTRUCTORS(GfxProductsWrapper)

	_NODISCARD bool IsNull() const;
	explicit operator bool() const;

	_NODISCARD ArrayWrapper<LoadingProductWrapper> GetLoadingProducs() const;

private:
	PIMPL
};

