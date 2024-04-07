#pragma once
#include ".././engine/objectwrapper.h"

class SequenceWrapper;
class UnrealStringWrapper;

class BAKKESMOD_PLUGIN_IMPORT SequenceObjectWrapper : public ObjectWrapper {
public:
	CONSTRUCTORS(SequenceObjectWrapper)

	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	SequenceWrapper     GetParentSequence();
	UnrealStringWrapper GetObjName();
	UnrealStringWrapper GetObjCategory();
	UnrealStringWrapper GetObjComment();

private:
	PIMPL
};