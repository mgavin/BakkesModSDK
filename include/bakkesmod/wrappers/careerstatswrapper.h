#pragma once


class BAKKESMOD_PLUGIN_IMPORT CareerStatsWrapper
{
public:
	struct StatValue
	{
		std::string stat_name;
		int private_;
		int unranked;
		int ranked;
	};

	[[nodiscard]] static std::vector<StatValue> GetStatValues();
};
