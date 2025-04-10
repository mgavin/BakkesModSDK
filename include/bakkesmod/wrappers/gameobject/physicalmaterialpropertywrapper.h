#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../wrapperstructs.h"
#include ".././engine/objectwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT PhysicalMaterialPropertyWrapper : public ObjectWrapper {
public:
	CONSTRUCTORS(PhysicalMaterialPropertyWrapper)

	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	//AUTO-GENERATED FROM FIELDS
	float GetTireFrictionScale();
	void SetTireFrictionScale(float newTireFrictionScale);
	unsigned long GetbStickyWheels();
	void SetbStickyWheels(unsigned long newbStickyWheels);
	unsigned long GetbConsiderForGround();
	void SetbConsiderForGround(unsigned long newbConsiderForGround);

	//AUTO-GENERATED FUNCTION PROXIES
private:
	PIMPL
};