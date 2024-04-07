#pragma once

#include "../engine/objectwrapper.h"
#include "loadingproductwrapper.h"
#include "../arraywrapper.h"

class BAKKESMOD_PLUGIN_IMPORT GfxProductsWrapper : ObjectWrapper
{
public:
	CONSTRUCTORS(GfxProductsWrapper)

	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	[[nodiscard]] ArrayWrapper<LoadingProductWrapper> GetLoadingProducs() const;

private:
	PIMPL
};

