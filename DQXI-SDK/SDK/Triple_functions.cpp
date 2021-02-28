
#include "../SDK.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Triple.TripleCheatManager.TripleWeatherSet
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleWeatherSet(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleWeatherSet");

	UTripleCheatManager_TripleWeatherSet_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleTrophiesReacquiredUE4Achievement
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleTrophiesReacquiredUE4Achievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleTrophiesReacquiredUE4Achievement");

	UTripleCheatManager_TripleTrophiesReacquiredUE4Achievement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleTrophiesNew
// (Final, Exec, Native, Public)
// Parameters:
// int                            InTestNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleTrophiesNew(int InTestNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleTrophiesNew");

	UTripleCheatManager_TripleTrophiesNew_Params params;
	params.InTestNumber = InTestNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleTrophiesCompleteWait
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bIsWaitMode                    (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleTrophiesCompleteWait(bool bIsWaitMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleTrophiesCompleteWait");

	UTripleCheatManager_TripleTrophiesCompleteWait_Params params;
	params.bIsWaitMode = bIsWaitMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleTimeZoneOverride
// (Final, Exec, Native, Public)
// Parameters:
// int                            Timezone                       (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleTimeZoneOverride(int Timezone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleTimeZoneOverride");

	UTripleCheatManager_TripleTimeZoneOverride_Params params;
	params.Timezone = Timezone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleTimeZoneMoveToNext
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleTimeZoneMoveToNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleTimeZoneMoveToNext");

	UTripleCheatManager_TripleTimeZoneMoveToNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleTimeZoneInfo
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleTimeZoneInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleTimeZoneInfo");

	UTripleCheatManager_TripleTimeZoneInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSkillPassiveOpen
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 SkillPassiveID                 (Parm, ZeroConstructor)

void UTripleCheatManager::TripleSkillPassiveOpen(const struct FString& SkillPassiveID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSkillPassiveOpen");

	UTripleCheatManager_TripleSkillPassiveOpen_Params params;
	params.SkillPassiveID = SkillPassiveID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSkillOpen2
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 SkillID                        (Parm, ZeroConstructor)
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleSkillOpen2(const struct FString& SkillID, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSkillOpen2");

	UTripleCheatManager_TripleSkillOpen2_Params params;
	params.SkillID = SkillID;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSkillOpen
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 SkillID                        (Parm, ZeroConstructor)

void UTripleCheatManager::TripleSkillOpen(const struct FString& SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSkillOpen");

	UTripleCheatManager_TripleSkillOpen_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSkillJumonOpen
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 SkillJumonID                   (Parm, ZeroConstructor)

void UTripleCheatManager::TripleSkillJumonOpen(const struct FString& SkillJumonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSkillJumonOpen");

	UTripleCheatManager_TripleSkillJumonOpen_Params params;
	params.SkillJumonID = SkillJumonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSetTalkerName
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InNpcName                      (Parm, ZeroConstructor)

void UTripleCheatManager::TripleSetTalkerName(const struct FString& InNpcName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSetTalkerName");

	UTripleCheatManager_TripleSetTalkerName_Params params;
	params.InNpcName = InNpcName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSetTalker
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InNpcId                        (Parm, ZeroConstructor)

void UTripleCheatManager::TripleSetTalker(const struct FString& InNpcId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSetTalker");

	UTripleCheatManager_TripleSetTalker_Params params;
	params.InNpcId = InNpcId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSetGameplayTime
// (Final, Exec, Native, Public)
// Parameters:
// int                            Sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleSetGameplayTime(int Sec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSetGameplayTime");

	UTripleCheatManager_TripleSetGameplayTime_Params params;
	params.Sec = Sec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSetBattleVictory
// (Final, Exec, Native, Public)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleSetBattleVictory(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSetBattleVictory");

	UTripleCheatManager_TripleSetBattleVictory_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleSenrekiAndTabinokokoroeOpenAll
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleSenrekiAndTabinokokoroeOpenAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleSenrekiAndTabinokokoroeOpenAll");

	UTripleCheatManager_TripleSenrekiAndTabinokokoroeOpenAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleRuraShowAll
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleRuraShowAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleRuraShowAll");

	UTripleCheatManager_TripleRuraShowAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleRunRate
// (Final, Exec, Native, Public)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleRunRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleRunRate");

	UTripleCheatManager_TripleRunRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleReturnTitle
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleReturnTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleReturnTitle");

	UTripleCheatManager_TripleReturnTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleQuestProgressSetEnd
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 QuestId                        (Parm, ZeroConstructor)

void UTripleCheatManager::TripleQuestProgressSetEnd(const struct FString& QuestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleQuestProgressSetEnd");

	UTripleCheatManager_TripleQuestProgressSetEnd_Params params;
	params.QuestId = QuestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TriplePrintTextArgs
// (Final, Exec, Native, Public)
// Parameters:
// TArray<struct FString>         ParamList                      (Parm, ZeroConstructor)

void UTripleCheatManager::TriplePrintTextArgs(TArray<struct FString> ParamList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TriplePrintTextArgs");

	UTripleCheatManager_TriplePrintTextArgs_Params params;
	params.ParamList = ParamList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TriplePrintText
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InTextId                       (Parm, ZeroConstructor)

void UTripleCheatManager::TriplePrintText(const struct FString& InTextId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TriplePrintText");

	UTripleCheatManager_TriplePrintText_Params params;
	params.InTextId = InTextId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleOutputVersion
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleOutputVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleOutputVersion");

	UTripleCheatManager_TripleOutputVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleOutputManagerAddr
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleOutputManagerAddr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleOutputManagerAddr");

	UTripleCheatManager_TripleOutputManagerAddr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleOutputGameDataText
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleOutputGameDataText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleOutputGameDataText");

	UTripleCheatManager_TripleOutputGameDataText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleOddEffectClearGoodPlayer
// (Final, Exec, Native, Public)
// Parameters:
// int                            PlayerIdNum                    (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleOddEffectClearGoodPlayer(int PlayerIdNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleOddEffectClearGoodPlayer");

	UTripleCheatManager_TripleOddEffectClearGoodPlayer_Params params;
	params.PlayerIdNum = PlayerIdNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleOddEffectClearGoodMonster
// (Final, Exec, Native, Public)
// Parameters:
// int                            GroupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleOddEffectClearGoodMonster(int GroupIndex, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleOddEffectClearGoodMonster");

	UTripleCheatManager_TripleOddEffectClearGoodMonster_Params params;
	params.GroupIndex = GroupIndex;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleOddEffectClearBadPlayer
// (Final, Exec, Native, Public)
// Parameters:
// int                            PlayerIdNum                    (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleOddEffectClearBadPlayer(int PlayerIdNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleOddEffectClearBadPlayer");

	UTripleCheatManager_TripleOddEffectClearBadPlayer_Params params;
	params.PlayerIdNum = PlayerIdNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleOddEffectClearBadMonster
// (Final, Exec, Native, Public)
// Parameters:
// int                            GroupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleOddEffectClearBadMonster(int GroupIndex, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleOddEffectClearBadMonster");

	UTripleCheatManager_TripleOddEffectClearBadMonster_Params params;
	params.GroupIndex = GroupIndex;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleMugenMP
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleMugenMP(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleMugenMP");

	UTripleCheatManager_TripleMugenMP_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleMpSet
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CharaID                        (Parm, ZeroConstructor)
// int                            MP                             (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleMpSet(const struct FString& CharaID, int MP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleMpSet");

	UTripleCheatManager_TripleMpSet_Params params;
	params.CharaID = CharaID;
	params.MP = MP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleLevelSet
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CharaID                        (Parm, ZeroConstructor)
// int                            Lv                             (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleLevelSet(const struct FString& CharaID, int Lv)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleLevelSet");

	UTripleCheatManager_TripleLevelSet_Params params;
	params.CharaID = CharaID;
	params.Lv = Lv;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleHpSet
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CharaID                        (Parm, ZeroConstructor)
// int                            HP                             (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleHpSet(const struct FString& CharaID, int HP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleHpSet");

	UTripleCheatManager_TripleHpSet_Params params;
	params.CharaID = CharaID;
	params.HP = HP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleGold
// (Final, Exec, Native, Public)
// Parameters:
// int                            AddNum                         (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleGold(int AddNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleGold");

	UTripleCheatManager_TripleGold_Params params;
	params.AddNum = AddNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleFriendLeave
// (Final, Exec, Native, Public)
// Parameters:
// int                            PlayerIdNum                    (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleFriendLeave(int PlayerIdNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleFriendLeave");

	UTripleCheatManager_TripleFriendLeave_Params params;
	params.PlayerIdNum = PlayerIdNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleFriendJoin
// (Final, Exec, Native, Public)
// Parameters:
// int                            PlayerIdNum                    (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleFriendJoin(int PlayerIdNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleFriendJoin");

	UTripleCheatManager_TripleFriendJoin_Params params;
	params.PlayerIdNum = PlayerIdNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetSibariPlayFlag
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetSibariPlayFlag(int Kind, bool Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetSibariPlayFlag");

	UTripleCheatManager_TripleForceSetSibariPlayFlag_Params params;
	params.Kind = Kind;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetRenkeiUseCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetRenkeiUseCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetRenkeiUseCount");

	UTripleCheatManager_TripleForceSetRenkeiUseCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetObjectDestructionCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetObjectDestructionCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetObjectDestructionCount");

	UTripleCheatManager_TripleForceSetObjectDestructionCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetInnStayCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetInnStayCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetInnStayCount");

	UTripleCheatManager_TripleForceSetInnStayCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetGrassItemUseCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetGrassItemUseCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetGrassItemUseCount");

	UTripleCheatManager_TripleForceSetGrassItemUseCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetFusigikajiSuccessCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetFusigikajiSuccessCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetFusigikajiSuccessCount");

	UTripleCheatManager_TripleForceSetFusigikajiSuccessCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetFusigikajiRetryCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetFusigikajiRetryCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetFusigikajiRetryCount");

	UTripleCheatManager_TripleForceSetFusigikajiRetryCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetFusigikajiPlayCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetFusigikajiPlayCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetFusigikajiPlayCount");

	UTripleCheatManager_TripleForceSetFusigikajiPlayCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetFusigikajiCreatedFlag
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ItemID                         (Parm, ZeroConstructor)
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetFusigikajiCreatedFlag(const struct FString& ItemID, bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetFusigikajiCreatedFlag");

	UTripleCheatManager_TripleForceSetFusigikajiCreatedFlag_Params params;
	params.ItemID = ItemID;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetDefeatMonsterZukanCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            MonsterZukanID                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetDefeatMonsterZukanCount(int MonsterZukanID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetDefeatMonsterZukanCount");

	UTripleCheatManager_TripleForceSetDefeatMonsterZukanCount_Params params;
	params.MonsterZukanID = MonsterZukanID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetDefeatMonsterCount
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MonsterID                      (Parm, ZeroConstructor)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetDefeatMonsterCount(const struct FString& MonsterID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetDefeatMonsterCount");

	UTripleCheatManager_TripleForceSetDefeatMonsterCount_Params params;
	params.MonsterID = MonsterID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceSetCampCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceSetCampCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceSetCampCount");

	UTripleCheatManager_TripleForceSetCampCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceRecordRideMonster
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 EnemyID                        (Parm, ZeroConstructor)

void UTripleCheatManager::TripleForceRecordRideMonster(const struct FString& EnemyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceRecordRideMonster");

	UTripleCheatManager_TripleForceRecordRideMonster_Params params;
	params.EnemyID = EnemyID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceRecordExecuteRenkei
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 RenkeiID                       (Parm, ZeroConstructor)

void UTripleCheatManager::TripleForceRecordExecuteRenkei(const struct FString& RenkeiID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceRecordExecuteRenkei");

	UTripleCheatManager_TripleForceRecordExecuteRenkei_Params params;
	params.RenkeiID = RenkeiID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceLearningRecipeBookFromItemId
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ItemID                         (Parm, ZeroConstructor)

void UTripleCheatManager::TripleForceLearningRecipeBookFromItemId(const struct FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceLearningRecipeBookFromItemId");

	UTripleCheatManager_TripleForceLearningRecipeBookFromItemId_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceLearningRecipeBookAll
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleForceLearningRecipeBookAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceLearningRecipeBookAll");

	UTripleCheatManager_TripleForceLearningRecipeBookAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceGetItemToBag
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ItemID                         (Parm, ZeroConstructor)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceGetItemToBag(const struct FString& ItemID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceGetItemToBag");

	UTripleCheatManager_TripleForceGetItemToBag_Params params;
	params.ItemID = ItemID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceGetItem
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ItemID                         (Parm, ZeroConstructor)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceGetItem(const struct FString& ItemID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceGetItem");

	UTripleCheatManager_TripleForceGetItem_Params params;
	params.ItemID = ItemID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceDiscardItem
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ItemID                         (Parm, ZeroConstructor)

void UTripleCheatManager::TripleForceDiscardItem(const struct FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceDiscardItem");

	UTripleCheatManager_TripleForceDiscardItem_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceAddSmallMedalNum
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceAddSmallMedalNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceAddSmallMedalNum");

	UTripleCheatManager_TripleForceAddSmallMedalNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceAddCasinoCoinNum
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleForceAddCasinoCoinNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceAddCasinoCoinNum");

	UTripleCheatManager_TripleForceAddCasinoCoinNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceAcquireAchievementAll
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleForceAcquireAchievementAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceAcquireAchievementAll");

	UTripleCheatManager_TripleForceAcquireAchievementAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleForceAcquireAchievement
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AchievementID                  (Parm, ZeroConstructor)

void UTripleCheatManager::TripleForceAcquireAchievement(const struct FString& AchievementID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleForceAcquireAchievement");

	UTripleCheatManager_TripleForceAcquireAchievement_Params params;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleExecRevival
// (Final, Exec, Native, Public)
// Parameters:
// int                            RevivalId                      (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleExecRevival(int RevivalId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleExecRevival");

	UTripleCheatManager_TripleExecRevival_Params params;
	params.RevivalId = RevivalId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleExecReincarnation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ReincarnationId                (Parm, ZeroConstructor)

void UTripleCheatManager::TripleExecReincarnation(const struct FString& ReincarnationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleExecReincarnation");

	UTripleCheatManager_TripleExecReincarnation_Params params;
	params.ReincarnationId = ReincarnationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleExecDTCommand
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Category                       (Parm, ZeroConstructor)
// int                            Value1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value2                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Cmd                            (Parm, ZeroConstructor)

void UTripleCheatManager::TripleExecDTCommand(const struct FString& Category, int Value1, int Value2, const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleExecDTCommand");

	UTripleCheatManager_TripleExecDTCommand_Params params;
	params.Category = Category;
	params.Value1 = Value1;
	params.Value2 = Value2;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleExecAutoSave
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleExecAutoSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleExecAutoSave");

	UTripleCheatManager_TripleExecAutoSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleDisplayCoinInfo
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleDisplayCoinInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleDisplayCoinInfo");

	UTripleCheatManager_TripleDisplayCoinInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleTurnSkip
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleTurnSkip(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleTurnSkip");

	UTripleCheatManager_TripleBattleTurnSkip_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleTateGuard
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleTateGuard(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleTateGuard");

	UTripleCheatManager_TripleBattleTateGuard_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleSenseiKougeki
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleSenseiKougeki(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleSenseiKougeki");

	UTripleCheatManager_TripleBattleSenseiKougeki_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleOddEffect
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleOddEffect(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleOddEffect");

	UTripleCheatManager_TripleBattleOddEffect_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleNigeru
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleNigeru(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleNigeru");

	UTripleCheatManager_TripleBattleNigeru_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleMitoreru
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleMitoreru(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleMitoreru");

	UTripleCheatManager_TripleBattleMitoreru_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleMiss
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleMiss(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleMiss");

	UTripleCheatManager_TripleBattleMiss_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleMikawasi
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleMikawasi(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleMikawasi");

	UTripleCheatManager_TripleBattleMikawasi_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleLose
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleBattleLose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleLose");

	UTripleCheatManager_TripleBattleLose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleHazukasiiNoroiSetMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleHazukasiiNoroiSetMessage(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleHazukasiiNoroiSetMessage");

	UTripleCheatManager_TripleBattleHazukasiiNoroiSetMessage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet4
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MonsterID0                     (Parm, ZeroConstructor)
// int                            Num0                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MonsterID1                     (Parm, ZeroConstructor)
// int                            Num1                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MonsterID2                     (Parm, ZeroConstructor)
// int                            Num2                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MonsterID3                     (Parm, ZeroConstructor)
// int                            Num3                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleEncountMonsterSet4(const struct FString& MonsterID0, int Num0, const struct FString& MonsterID1, int Num1, const struct FString& MonsterID2, int Num2, const struct FString& MonsterID3, int Num3)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet4");

	UTripleCheatManager_TripleBattleEncountMonsterSet4_Params params;
	params.MonsterID0 = MonsterID0;
	params.Num0 = Num0;
	params.MonsterID1 = MonsterID1;
	params.Num1 = Num1;
	params.MonsterID2 = MonsterID2;
	params.Num2 = Num2;
	params.MonsterID3 = MonsterID3;
	params.Num3 = Num3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet3
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MonsterID0                     (Parm, ZeroConstructor)
// int                            Num0                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MonsterID1                     (Parm, ZeroConstructor)
// int                            Num1                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MonsterID2                     (Parm, ZeroConstructor)
// int                            Num2                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleEncountMonsterSet3(const struct FString& MonsterID0, int Num0, const struct FString& MonsterID1, int Num1, const struct FString& MonsterID2, int Num2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet3");

	UTripleCheatManager_TripleBattleEncountMonsterSet3_Params params;
	params.MonsterID0 = MonsterID0;
	params.Num0 = Num0;
	params.MonsterID1 = MonsterID1;
	params.Num1 = Num1;
	params.MonsterID2 = MonsterID2;
	params.Num2 = Num2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet2
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MonsterID0                     (Parm, ZeroConstructor)
// int                            Num0                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MonsterID1                     (Parm, ZeroConstructor)
// int                            Num1                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleEncountMonsterSet2(const struct FString& MonsterID0, int Num0, const struct FString& MonsterID1, int Num1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet2");

	UTripleCheatManager_TripleBattleEncountMonsterSet2_Params params;
	params.MonsterID0 = MonsterID0;
	params.Num0 = Num0;
	params.MonsterID1 = MonsterID1;
	params.Num1 = Num1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MonsterID                      (Parm, ZeroConstructor)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleEncountMonsterSet(const struct FString& MonsterID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet");

	UTripleCheatManager_TripleBattleEncountMonsterSet_Params params;
	params.MonsterID = MonsterID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterReset
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleBattleEncountMonsterReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterReset");

	UTripleCheatManager_TripleBattleEncountMonsterReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceTensei
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleEncountMonsterForceTensei(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceTensei");

	UTripleCheatManager_TripleBattleEncountMonsterForceTensei_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceMetal
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleEncountMonsterForceMetal(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceMetal");

	UTripleCheatManager_TripleBattleEncountMonsterForceMetal_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceFirstAttack
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleEncountMonsterForceFirstAttack(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceFirstAttack");

	UTripleCheatManager_TripleBattleEncountMonsterForceFirstAttack_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceDropMonster
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleEncountMonsterForceDropMonster(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceDropMonster");

	UTripleCheatManager_TripleBattleEncountMonsterForceDropMonster_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleDeadPlayer
// (Final, Exec, Native, Public)
// Parameters:
// int                            PlayerIdNum                    (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleDeadPlayer(int PlayerIdNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleDeadPlayer");

	UTripleCheatManager_TripleBattleDeadPlayer_Params params;
	params.PlayerIdNum = PlayerIdNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleDeadMonster
// (Final, Exec, Native, Public)
// Parameters:
// int                            GroupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleDeadMonster(int GroupIndex, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleDeadMonster");

	UTripleCheatManager_TripleBattleDeadMonster_Params params;
	params.GroupIndex = GroupIndex;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCritical
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleCritical(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCritical");

	UTripleCheatManager_TripleBattleCritical_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCounter
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleCounter(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCounter");

	UTripleCheatManager_TripleBattleCounter_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCommandAISetSlotNo
// (Final, Exec, Native, Public)
// Parameters:
// int                            GroupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotNo                         (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleCommandAISetSlotNo(int GroupIndex, int Index, int SlotNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCommandAISetSlotNo");

	UTripleCheatManager_TripleBattleCommandAISetSlotNo_Params params;
	params.GroupIndex = GroupIndex;
	params.Index = Index;
	params.SlotNo = SlotNo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCommandAISetConfuseKindPlayer
// (Final, Exec, Native, Public)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleCommandAISetConfuseKindPlayer(int PlayerId, int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCommandAISetConfuseKindPlayer");

	UTripleCheatManager_TripleBattleCommandAISetConfuseKindPlayer_Params params;
	params.PlayerId = PlayerId;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCommandAISetConfuseKindMonster
// (Final, Exec, Native, Public)
// Parameters:
// int                            GroupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleCommandAISetConfuseKindMonster(int GroupIndex, int Index, int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCommandAISetConfuseKindMonster");

	UTripleCheatManager_TripleBattleCommandAISetConfuseKindMonster_Params params;
	params.GroupIndex = GroupIndex;
	params.Index = Index;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCommandAISetActionNo
// (Final, Exec, Native, Public)
// Parameters:
// int                            GroupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ActionNo                       (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleCommandAISetActionNo(int GroupIndex, int Index, int ActionNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCommandAISetActionNo");

	UTripleCheatManager_TripleBattleCommandAISetActionNo_Params params;
	params.GroupIndex = GroupIndex;
	params.Index = Index;
	params.ActionNo = ActionNo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCommandAIReset
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleBattleCommandAIReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCommandAIReset");

	UTripleCheatManager_TripleBattleCommandAIReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCommandAIInfo
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleBattleCommandAIInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCommandAIInfo");

	UTripleCheatManager_TripleBattleCommandAIInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleCommandAIActionPattern
// (Final, Exec, Native, Public)
// Parameters:
// int                            Index0                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index2                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index3                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index4                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index5                         (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleCommandAIActionPattern(int Index0, int Index1, int Index2, int Index3, int Index4, int Index5)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleCommandAIActionPattern");

	UTripleCheatManager_TripleBattleCommandAIActionPattern_Params params;
	params.Index0 = Index0;
	params.Index1 = Index1;
	params.Index2 = Index2;
	params.Index3 = Index3;
	params.Index4 = Index4;
	params.Index5 = Index5;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleBattleBukiGuard
// (Final, Exec, Native, Public)
// Parameters:
// int                            Kind                           (Parm, ZeroConstructor, IsPlainOldData)

void UTripleCheatManager::TripleBattleBukiGuard(int Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleBattleBukiGuard");

	UTripleCheatManager_TripleBattleBukiGuard_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Triple.TripleCheatManager.TripleAchievementListLogOutput
// (Final, Exec, Native, Public)

void UTripleCheatManager::TripleAchievementListLogOutput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Triple.TripleCheatManager.TripleAchievementListLogOutput");

	UTripleCheatManager_TripleAchievementListLogOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
