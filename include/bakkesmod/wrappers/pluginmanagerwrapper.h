#pragma once
#include "../plugin/bakkesmodplugin.h"
#include "./engine/objectwrapper.h"
#include "wrapperstructs.h"
#include <vector>


namespace BakkesMod
{
	namespace Plugin
	{
		struct LoadedPlugin;
	}
}

class BAKKESMOD_PLUGIN_IMPORT PluginManagerWrapper : public ObjectWrapper
{
public:
	CONSTRUCTORS(PluginManagerWrapper);
	std::vector<std::shared_ptr<BakkesMod::Plugin::LoadedPlugin>>* GetLoadedPlugins();

private:
	PIMPL
};

