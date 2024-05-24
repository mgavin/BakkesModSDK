#pragma once
#include "../../engine/objectwrapper.h"
#include "../productpaintwrapper.h"
#include "bakkesmod/wrappers/arraywrapper.h"

class BAKKESMOD_PLUGIN_IMPORT PaintDatabaseWrapper : public ObjectWrapper {
public:
	CONSTRUCTORS(PaintDatabaseWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;
	[[nodiscard]] ArrayWrapper<ProductPaintWrapper> GetPaints() const;

	[[nodiscard]] bool AddCustomPaintColor(const std::string& name, const LinearColor& color);
	[[nodiscard]] bool UpdateCustomPaintColor(const std::string& name, const LinearColor& color);

	//END SELF IMPLEMENTED

	//AUTO-GENERATED FROM FIELDS
	//END AUTO-GENERATED FROM FIELDS

	//AUTO-GENERATED FROM METHODS
	std::string GetPaintName(int PaintID);
	int GetPaintID(std::string& PaintName);
	//END AUTO-GENERATED FROM METHODS

private:
	PIMPL
};
