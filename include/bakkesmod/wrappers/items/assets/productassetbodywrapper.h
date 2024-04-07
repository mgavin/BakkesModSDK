#pragma once
#include "productequipprofilewrapper.h"

class BAKKESMOD_PLUGIN_IMPORT ProductAssetBodyWrapper : public ObjectWrapper
{
public:
	CONSTRUCTORS(ProductAssetBodyWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;
	//END SELF IMPLEMENTED

	[[nodiscard]] ProductEquipProfileWrapper GetEquipProfile() const;
	[[nodiscard]] bool CanEquip(const ProductWrapper& product_wrappper) const;

private:
	PIMPL
	
};
