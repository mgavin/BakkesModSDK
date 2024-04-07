#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "wrapperstructs.h"
#include "./engine/actorwrapper.h"

class PlayerReplicationInfoWrapper;

class BAKKESMOD_PLUGIN_IMPORT ControllerWrapper : public ActorWrapper {
public:
    CONSTRUCTORS(ControllerWrapper)

    PlayerReplicationInfoWrapper GetPlayerReplicationInfo();

private:
    PIMPL
};
