#pragma once

class BAKKESMOD_PLUGIN_IMPORT ProductEquipProfileWrapper : public ObjectWrapper
{
public:
	CONSTRUCTORS(ProductEquipProfileWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;
	//END SELF IMPLEMENTED

	[[nodiscard]] std::vector<int> GetForcedProducts() const;
	[[nodiscard]] std::vector<int> GetDefaultProducts() const;
	[[nodiscard]] bool CanEquip(const ProductWrapper& product_wrappper) const;

private:
	PIMPL
	
};
