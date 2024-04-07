#pragma once
#include "bakkesmod/core/custom_decals_structs.h"
#include "../../utils/expected.hpp"

struct ApplyDecalToCarResult
{
	bool body_applied = false;
	bool chassis_applied = false;
};

struct BodyAssetIdsCheckResult
{
	int body_id;
	int skin_id;
};

class BAKKESMOD_PLUGIN_IMPORT DecalUtilities
{
public:
	[[nodiscard]] static tl::expected<ApplyDecalToCarResult, std::string> ApplyDecalToCar(const CarWrapper& car_wrapper,
	                                                                                   const pluginsdk::BodyShaderOverride& custom_body_decal);
	[[nodiscard]] static tl::expected<BodyAssetIdsCheckResult, std::string> GetBodyAssetIds(const CarWrapper& car_wrapper);

	[[nodiscard]] static tl::expected<bool, std::string> ApplyDecalToBall(const BallWrapper& ball_wrapper, const pluginsdk::ShaderOverride& shader_override);

};
