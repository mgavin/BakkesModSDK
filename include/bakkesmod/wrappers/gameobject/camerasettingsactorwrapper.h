#pragma once

class BAKKESMOD_PLUGIN_IMPORT CameraSettingsActorWrapper : public ActorWrapper
{
public:
	CONSTRUCTORS(CameraSettingsActorWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;
	//END SELF IMPLEMENTED

	[[nodiscard]] PriWrapper GetPri() const;
	[[nodiscard]] ProfileCameraSettings GetProfileSettings() const;
	[[nodiscard]] void SetProfileSettings(const ProfileCameraSettings& profileCameraSettings);

private:
	PIMPL
	
};
