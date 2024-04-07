#pragma once

#include <string>
#include "loadoutsetwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT LoadoutSaveWrapper : public ObjectWrapper
{
public:
	CONSTRUCTORS(LoadoutSaveWrapper)

	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	[[nodiscard]] LoadoutSetWrapper GetPreset(const std::string& name) const;
	[[nodiscard]] LoadoutSetWrapper GetPreset(int index) const;
	[[nodiscard]] ArrayWrapper<LoadoutSetWrapper> GetPresets() const;

	void SetPreviewTeam(int team);
	[[nodiscard]] int GetPreviewTeam() const;
	[[nodiscard]] LoadoutSetWrapper GetEquippedLoadout() const;
	void RenamePreset(const LoadoutSetWrapper& preset_wrapper, const std::string& new_name);
	void EquipPreset(const LoadoutSetWrapper& preset) const;
	void DeletePreset(const LoadoutSetWrapper& preset_wrapper);
	[[nodiscard]] LoadoutSetWrapper AddPreset();
	void SwapPreset(const LoadoutSetWrapper& a, const LoadoutSetWrapper& b);
	[[nodiscard]] int GetIndex(const LoadoutSetWrapper& preset_wrapper) const;
	
private:
	PIMPL
};

