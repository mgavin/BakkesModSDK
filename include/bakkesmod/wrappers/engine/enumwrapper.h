#pragma once

#include "objectwrapper.h"
#include <map>
#include <string>

class BAKKESMOD_PLUGIN_IMPORT EnumWrapper: public ObjectWrapper
{
public:
	CONSTRUCTORS(EnumWrapper)

	// Get the name of this enum.
	[[nodiscard]] std::string GetEnumName() const;

	// Throws if invalid value
	[[nodiscard]] std::string GetEnumLabel(unsigned char enum_value) const;

	// Throws if invalid label
	[[nodiscard]] unsigned char GetEnumValue(const std::string& enum_label) const;

	// Get a count of how many values this enum contains
	[[nodiscard]] size_t GetEnumValueCount() const;

	// Get a map with all the possible enum values and their labels
	[[nodiscard]] std::map<unsigned char, std::string> GetPossibleValues() const;

	// Don't forget the first rule of BMSDK!
	[[nodiscard]] bool IsNull() const;
	explicit operator bool() const;

	/*U_Types_TA_ETeam*/
	[[nodiscard]] static EnumWrapper GetTeamEnum();
	/*AActor_ECollisionType*/
	[[nodiscard]] static EnumWrapper GetActorCollisionTypes();
	/*AActor_EForceMode*/
	[[nodiscard]] static EnumWrapper GetActorForceModes();
	/*AActor_ENetRole*/
	[[nodiscard]] static EnumWrapper GetActorNetRoles();
	/*AActor_EPhysics*/
	[[nodiscard]] static EnumWrapper GetActorPhysics();
	/*AActor_ETravelType*/
	[[nodiscard]] static EnumWrapper GetActorTravelModes();
	/*AGameEvent_TrainingEditor_TA_EPlayTestType*/
	[[nodiscard]] static EnumWrapper GetTrainingPlayTestTypes();
	/*AGameEvent_Tutorial_TA_ERotationType*/
	[[nodiscard]] static EnumWrapper GetTutorialRotationTypes();
	/*AVehiclePickup_Boost_TA_EBoostType*/
	[[nodiscard]] static EnumWrapper GetBoostTypes();
	/*U_Types_Core_OnlinePlatform*/
	[[nodiscard]] static EnumWrapper GetOnlinePlatforms();
	/*U_Types_TA_EAchievementType*/
	[[nodiscard]] static EnumWrapper GetAchievementTypes();
	/*U_Types_TA_EBallHitType*/
	[[nodiscard]] static EnumWrapper GetBallHitTypes();
	/*U_Types_TA_EBlueprintType*/
	[[nodiscard]] static EnumWrapper GetBlueprintTypes();
	/*U_Types_TA_ECarImpactResult*/
	[[nodiscard]] static EnumWrapper GetCarImpactResults();
	/*U_Types_TA_EChatChannel*/
	[[nodiscard]] static EnumWrapper GetChatChannels();
	/*U_Types_TA_EDemolishSpeed*/
	[[nodiscard]] static EnumWrapper GetDemolishSpeeds();
	/*U_Types_TA_EDemolishTarget*/
	[[nodiscard]] static EnumWrapper GetDemolishTargets();
	/*U_Types_TA_EDifficulty*/
	[[nodiscard]] static EnumWrapper GetDifficulties();
	/*U_Types_TA_EHistoryType*/
	[[nodiscard]] static EnumWrapper GetHistoryTypes();
	/*U_Types_TA_ENetworkInputBuffer*/
	[[nodiscard]] static EnumWrapper GetNetworkInputBuffers();
	/*U_Types_TA_EPawnType*/
	[[nodiscard]] static EnumWrapper GetPawnTypes();
	/*U_Types_TA_EProductQuality*/
	[[nodiscard]] static EnumWrapper GetProductQualities();
	/*U_Types_TA_EStatGraphLevel*/
	[[nodiscard]] static EnumWrapper GetStatGraphLevels();
	/*U_Types_TA_ETrainingSaveType*/
	[[nodiscard]] static EnumWrapper GetTrainingSaveTypes();
	/*U_Types_TA_ETrainingType*/
	[[nodiscard]] static EnumWrapper GetTrainingTypes();
	/*U_Types_TA_EUnlockMethod*/
	[[nodiscard]] static EnumWrapper GetUnlockMethods();
	/*U_Types_TA_EVoiceFilter*/
	[[nodiscard]] static EnumWrapper GetVoiceFilters();
	/*UAudioDevice_ETTSSpeaker*/
	[[nodiscard]] static EnumWrapper GetTTSSpeakers();
	/*UClientConnectionTracker_TA_EConnectionQualityState*/
	[[nodiscard]] static EnumWrapper GetConnectionQualityStates();
	/*UPrimitiveComponent_ERadialImpulseFalloff*/
	[[nodiscard]] static EnumWrapper GetRadialImpulseFalloffs();
	/*UPrimitiveComponent_ERBCollisionChannel*/
	[[nodiscard]] static EnumWrapper GetRBCollisionChannels();
	/*UReplay_TA_EReplayState*/
	[[nodiscard]] static EnumWrapper GetReplayStates();
	/*USampleHistory_TA_EGraphSummaryType*/
	[[nodiscard]] static EnumWrapper GetGraphSummaryTypes();
	/*U_TrainingTypes_TA_ETrainingRoundAttempt*/
	[[nodiscard]] static EnumWrapper GetTrainingRoundAttempts();
	//UGFxEngine_EWeatherVariant
	[[nodiscard]] static EnumWrapper GetWeatherVariant();
	//U_Types_TA_EPaintFinishType
	[[nodiscard]] static EnumWrapper GetPaintFinishTyp();
private:
	PIMPL
	
};
