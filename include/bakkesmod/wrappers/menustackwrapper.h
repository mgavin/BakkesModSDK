#pragma once
#include "engine/objectwrapper.h"
#include <string>
#include <vector>

/**
 * Notable Events:\n
 * Function TAGame.GFxData_MenuStack_TA.PopMenu\n
 * Function TAGame.GFxData_MenuStack_TA.PushMenu\n
 */
class BAKKESMOD_PLUGIN_IMPORT MenuStackWrapper : public ObjectWrapper
{
	public:
    CONSTRUCTORS(MenuStackWrapper)

    [[nodiscard]] std::string GetTopMenu() const;
    [[nodiscard]] std::vector<std::string> GetMenuStack() const;
    [[nodiscard]] bool IsNull() const;
	[[nodiscard]] explicit operator bool() const;


private:
    PIMPL
};
