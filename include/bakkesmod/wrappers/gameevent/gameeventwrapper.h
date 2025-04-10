#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../wrapperstructs.h"
#include ".././engine/actorwrapper.h"
class ControllerWrapper;
class PlayerControllerWrapper;
class CarWrapper;
class UnrealStringWrapper;
class GameSettingPlaylistWrapper;
class PriWrapper;
class WrapperStructs;
class TeamInfoWrapper;

class BAKKESMOD_PLUGIN_IMPORT GameEventWrapper : public ActorWrapper {
public:
	CONSTRUCTORS(GameEventWrapper)

	[[nodiscard]] std::string GetMatchTypeName() const;

	//AUTO-GENERATED FROM FIELDS
	unsigned char GetReplicatedStateIndex();
	void SetReplicatedStateIndex(unsigned char newReplicatedStateIndex);
	CarWrapper GetCarArchetype();
	void SetCarArchetype(CarWrapper newCarArchetype);
	int GetCountdownTime();
	void SetCountdownTime(int newCountdownTime);
	int GetFinishTime();
	void SetFinishTime(int newFinishTime);
	unsigned long GetbMultiplayer();
	void SetbMultiplayer(unsigned long newbMultiplayer);
	unsigned long GetbCountdownMessagesDisabled();
	void SetbCountdownMessagesDisabled(unsigned long newbCountdownMessagesDisabled);
	unsigned long GetbFillWithAI();
	void SetbFillWithAI(unsigned long newbFillWithAI);
	unsigned long GetbAllowQueueSaveReplay();
	void SetbAllowQueueSaveReplay(unsigned long newbAllowQueueSaveReplay);
	unsigned long GetbAllowReadyUp();
	void SetbAllowReadyUp(unsigned long newbAllowReadyUp);
	unsigned long GetbRestartingMatch();
	void SetbRestartingMatch(unsigned long newbRestartingMatch);
	unsigned long GetbRandomizedBotLoadouts();
	void SetbRandomizedBotLoadouts(unsigned long newbRandomizedBotLoadouts);
	unsigned long GetbHasLeaveMatchPenalty();
	void SetbHasLeaveMatchPenalty(unsigned long newbHasLeaveMatchPenalty);
	unsigned long GetbCanVoteToForfeit();
	void SetbCanVoteToForfeit(unsigned long newbCanVoteToForfeit);
	unsigned long GetbDisableAimAssist();
	void SetbDisableAimAssist(unsigned long newbDisableAimAssist);
	unsigned long GetbAwardAchievements();
	void SetbAwardAchievements(unsigned long newbAwardAchievements);
	int GetMinPlayers();
	void SetMinPlayers(int newMinPlayers);
	int GetMaxPlayers();
	void SetMaxPlayers(int newMaxPlayers);
	ArrayWrapper<ActorWrapper> GetSpawnPoints();
	float GetBotSkill();
	void SetBotSkill(float newBotSkill);
	int GetRespawnTime();
	void SetRespawnTime(int newRespawnTime);
	float GetMatchTimeDilation();
	void SetMatchTimeDilation(float newMatchTimeDilation);
	PlayerControllerWrapper GetActivator();
	void SetActivator(PlayerControllerWrapper newActivator);
	CarWrapper GetActivatorCar();
	void SetActivatorCar(CarWrapper newActivatorCar);
    ArrayWrapper<ControllerWrapper> GetPlayers();
	ArrayWrapper<PriWrapper> GetPRIs();
	ArrayWrapper<CarWrapper> GetCars();
	ArrayWrapper<PlayerControllerWrapper> GetLocalPlayers();
	int GetStartPointIndex();
	void SetStartPointIndex(int newStartPointIndex);
	int GetGameStateTimeRemaining();
	void SetGameStateTimeRemaining(int newGameStateTimeRemaining);
	int GetReplicatedGameStateTimeRemaining();
	void SetReplicatedGameStateTimeRemaining(int newReplicatedGameStateTimeRemaining);
	float GetBotBoostThreshold_vsAI();
	void SetBotBoostThreshold_vsAI(float newBotBoostThreshold_vsAI);
	StructArrayWrapper<SteamID> GetForfeitInitiatorIDs();
	StructArrayWrapper<SteamID> GetBannedPlayers();
	PriWrapper GetGameOwner();
	void SetGameOwner(PriWrapper newGameOwner);
	UnrealStringWrapper GetRichPresenceString();
	int GetReplicatedRoundCountDownNumber();
	void SetReplicatedRoundCountDownNumber(int newReplicatedRoundCountDownNumber);

	//AUTO-GENERATED FUNCTION PROXIES
	void InitCountDown();
	void StartCountdownTimer();
	void AllowReadyUp2();
	PriWrapper FindPlayerPRI(SteamID& UniqueId);
	void HandlePlayerRemoved(GameEventWrapper GameEvent, PriWrapper PRI);
	void UpdateGameOwner();
	void SetGameOwner2(PriWrapper NewOwner);
	void __GameEvent_TA__SetAllowReadyUp(PriWrapper P);
	bool __GameEvent_TA__CheckPlayersReady(PriWrapper P);
	SteamID __GameEvent_TA__CheckForBannedPlayers(PriWrapper PRI);
	void __Pylon__ChangeNotifyFunc();
	void PlayerResetTraining();
	bool SuppressModalDialogs();
	bool ShouldShowBallIndicator();
	void CheckInitiatedForfeit(PriWrapper PRI);
	void CheckChatBanned(PlayerControllerWrapper PC);
	PlayerControllerWrapper FindPCForUniqueID(SteamID& PlayerID);
	bool AllowSplitScreenPlayer();
	void AddPlayerChatMessage(SteamID& PlayerID, unsigned char ChatChannel, TeamInfoWrapper Team, std::string Message);
	void ConditionalStartSpectatorMatch();
	bool IsPlayingTraining();
	bool IsPlayingLan();
	bool IsPlayingOffline();
	bool IsPlayingPrivate();
	bool IsPlayingPublic();
	bool IsOnlineMultiplayer();
	void CreateMatchType(std::string Options);
	bool AllPlayersSelectedTeam();
	bool CanQueSaveReplay();
	void ForceMatchStart();
	void ConditionalStartMatch();
	void SaveLocalPlayerStats();
	bool CanUseBallCam();
	bool HandleNextGame();
	void SetMaxPlayers2(int InMaxPlayers);
	void SetRestartingMatch(unsigned long bRestart);
	bool ShouldBeFullScreen();
	bool IsFinished();
	void OnAllPlayersReady();
	void CheckPlayersReady2();
	void SetAllowReadyUp2(unsigned long bAllow);
	void AutoReadyPlayers();
	bool ShouldAutoReadyUp(PriWrapper PRI);
	void SendGoMessage(PlayerControllerWrapper Player);
	void SendCountdownMessage(int Seconds, PlayerControllerWrapper Player);
	void BroadcastCountdownMessage(int Seconds);
	void BroadcastGoMessage();
	bool AllowShutdown();
	float GetRealDeltaTime(float ElapsedTime);
	void SetTimeDilation(float NewTimeDilation);
	void ClearRespawnList();
	void ReplaceBotsWithAwaitingPlayers();
	int GetRespawnTime2();
	void RemoveCar(CarWrapper Car);
	void AddCar(CarWrapper Car);
	void TickRespawnTime(float DeltaTime);
	void SetBotSkill2(float NewSkill);
	PlayerControllerWrapper GetLocalPrimaryPlayer();
	bool HasPlayerNamed(std::string PlayerName);
	void RandomizeBots();
	bool MoveToGround(ActorWrapper Mover, float HeightCheck);
	void SetAllDriving(unsigned long bDriving);
	void OnFinished();
	void StartCountDown();
	void StartInitialCountDown();
	void OnGameStateTimeLapsed();
	void OnGameStateTimeUpdated();
	void UpdateGameStateTime();
	void SetGameStateTimeRemaining2(int StateTime, unsigned long bFromReplication);
	void SetGameStateTime2(int StateTime);
	void OnPlayerRestarted(CarWrapper PlayerCar);
	void TeleportCar(CarWrapper PlayerCar);
	void OnCarSpawned(CarWrapper NewCar);
	bool SpotIsEncroached(Vector& Spot);
	void RandomizeSpawnPoints();
	void RestartPlayers();
	void RemoveLocalPlayer(PlayerControllerWrapper Player);
	void AddLocalPlayer(PlayerControllerWrapper Player);
	void RemovePRI(PriWrapper PRI);
	void AddPRI(PriWrapper PRI);
	void AddForfeitInitiator(SteamID& PlayerID);
	void BanPlayerID(SteamID& PlayerID);
	int GetMaxHumans();
	int GetNumHumans();
	bool FindBotReplacement(PriWrapper PRI);
	void UpdateBotCount();
	void TimerUpdateBotCount();
	void InitBotSkill();
	void InitMutators();
	void HandleFinished(GameEventWrapper GameEvent);
	void Init2(PlayerControllerWrapper InActivator);
	void eventInitGame(std::string Options);
	void OnGameStateChanged();
	void OnCanVoteForfeitChanged();
	void UpdateCanVoteToForfeit();
	bool ShouldAllowVoteToForfeit();
	void OnPenaltyChanged();
	void UpdateLeaveMatchPenalty();
	GameSettingPlaylistWrapper GetPlaylist();
	bool ShouldHaveLeaveMatchPenalty();
	void OnMatchSettingsChanged();
	void ClearGameScoreFromCustomSettings();
	void EventPlayerResetTraining(GameEventWrapper GameEvent);
private:
	PIMPL
};