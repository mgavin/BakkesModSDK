#pragma once
#include "bakkesmod/wrappers/engine/objectwrapper.h"
#include "bakkesmod/wrappers/arraywrapper.h"
#include "onlineproductwrapper.h"


class BAKKESMOD_PLUGIN_IMPORT ProductTradeInWrapper : public ObjectWrapper {
public:
	CONSTRUCTORS(ProductTradeInWrapper)

	ArrayWrapper<OnlineProductWrapper> GetProducts() const;
	_NODISCARD bool IsNull() const;
	explicit operator bool() const;

private:
	PIMPL
};