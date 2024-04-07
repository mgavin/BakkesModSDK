#pragma once
#include "camerastatecarrefwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT CameraStateCarWrapper : public CameraStateCarRefWrapper
{
public:
	CONSTRUCTORS(CameraStateCarWrapper)

	//BEGIN SELF IMPLEMENTED
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	static const CameraStateCarWrapper GetInstanceWithDefaultValues();
	//END SELF IMPLEMENTED

	[[nodiscard]] float GetInterpToGroundRate() const;
	[[nodiscard]] float GetInterpToAirRate() const;
	[[nodiscard]] float GetGroundRotationInterpRate() const;
	[[nodiscard]] float GetGroundRotationInterpRateWall() const;
	[[nodiscard]] float GetFOVInterpSpeed() const;
	[[nodiscard]] float GetSupersonicFOVInterpSpeed() const;
	[[nodiscard]] float GetGroundNormalInterpRate() const;

	void SetInterpToGroundRate(float value);
	void SetInterpToAirRate(float value);
	void SetGroundRotationInterpRate(float value);
	void SetGroundRotationInterpRateWall(float value);
	void SetFOVInterpSpeed(float value);
	void SetSupersonicFOVInterpSpeed(float value);
	void SetGroundNormalInterpRate(float value);

private:
	PIMPL
	
};
