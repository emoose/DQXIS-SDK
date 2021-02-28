#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Triple.TripleCheatManager
// 0x0000 (0x0038 - 0x0038)
class UTripleCheatManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Triple.TripleCheatManager");
		return ptr;
	}


	void TripleWeatherSet(int Kind);
	void TripleTrophiesReacquiredUE4Achievement();
	void TripleTrophiesNew(int InTestNumber);
	void TripleTrophiesCompleteWait(bool bIsWaitMode);
	void TripleTimeZoneOverride(int Timezone);
	void TripleTimeZoneMoveToNext();
	void TripleTimeZoneInfo();
	void TripleSkillPassiveOpen(const struct FString& SkillPassiveID);
	void TripleSkillOpen2(const struct FString& SkillID, int PlayerId);
	void TripleSkillOpen(const struct FString& SkillID);
	void TripleSkillJumonOpen(const struct FString& SkillJumonID);
	void TripleSetTalkerName(const struct FString& InNpcName);
	void TripleSetTalker(const struct FString& InNpcId);
	void TripleSetGameplayTime(int Sec);
	void TripleSetBattleVictory(int Count);
	void TripleSenrekiAndTabinokokoroeOpenAll();
	void TripleRuraShowAll();
	void TripleRunRate(float Rate);
	void TripleReturnTitle();
	void TripleQuestProgressSetEnd(const struct FString& QuestId);
	void TriplePrintTextArgs(TArray<struct FString> ParamList);
	void TriplePrintText(const struct FString& InTextId);
	void TripleOutputVersion();
	void TripleOutputManagerAddr();
	void TripleOutputGameDataText();
	void TripleOddEffectClearGoodPlayer(int PlayerIdNum);
	void TripleOddEffectClearGoodMonster(int GroupIndex, int Index);
	void TripleOddEffectClearBadPlayer(int PlayerIdNum);
	void TripleOddEffectClearBadMonster(int GroupIndex, int Index);
	void TripleMugenMP(int Kind);
	void TripleMpSet(const struct FString& CharaID, int MP);
	void TripleLevelSet(const struct FString& CharaID, int Lv);
	void TripleHpSet(const struct FString& CharaID, int HP);
	void TripleGold(int AddNum);
	void TripleFriendLeave(int PlayerIdNum);
	void TripleFriendJoin(int PlayerIdNum);
	void TripleForceSetSibariPlayFlag(int Kind, bool Valid);
	void TripleForceSetRenkeiUseCount(int Num);
	void TripleForceSetObjectDestructionCount(int Num);
	void TripleForceSetInnStayCount(int Num);
	void TripleForceSetGrassItemUseCount(int Num);
	void TripleForceSetFusigikajiSuccessCount(int Num);
	void TripleForceSetFusigikajiRetryCount(int Num);
	void TripleForceSetFusigikajiPlayCount(int Num);
	void TripleForceSetFusigikajiCreatedFlag(const struct FString& ItemID, bool Flag);
	void TripleForceSetDefeatMonsterZukanCount(int MonsterZukanID, int Count);
	void TripleForceSetDefeatMonsterCount(const struct FString& MonsterID, int Count);
	void TripleForceSetCampCount(int Num);
	void TripleForceRecordRideMonster(const struct FString& EnemyID);
	void TripleForceRecordExecuteRenkei(const struct FString& RenkeiID);
	void TripleForceLearningRecipeBookFromItemId(const struct FString& ItemID);
	void TripleForceLearningRecipeBookAll();
	void TripleForceGetItemToBag(const struct FString& ItemID, int Num);
	void TripleForceGetItem(const struct FString& ItemID, int Num);
	void TripleForceDiscardItem(const struct FString& ItemID);
	void TripleForceAddSmallMedalNum(int Num);
	void TripleForceAddCasinoCoinNum(int Num);
	void TripleForceAcquireAchievementAll();
	void TripleForceAcquireAchievement(const struct FString& AchievementID);
	void TripleExecRevival(int RevivalId);
	void TripleExecReincarnation(const struct FString& ReincarnationId);
	void TripleExecDTCommand(const struct FString& Category, int Value1, int Value2, const struct FString& Cmd);
	void TripleExecAutoSave();
	void TripleDisplayCoinInfo();
	void TripleBattleTurnSkip(int Kind);
	void TripleBattleTateGuard(int Kind);
	void TripleBattleSenseiKougeki(int Kind);
	void TripleBattleOddEffect(int Kind);
	void TripleBattleNigeru(int Kind);
	void TripleBattleMitoreru(int Kind);
	void TripleBattleMiss(bool Flag);
	void TripleBattleMikawasi(int Kind);
	void TripleBattleLose();
	void TripleBattleHazukasiiNoroiSetMessage(int Index);
	void TripleBattleEncountMonsterSet4(const struct FString& MonsterID0, int Num0, const struct FString& MonsterID1, int Num1, const struct FString& MonsterID2, int Num2, const struct FString& MonsterID3, int Num3);
	void TripleBattleEncountMonsterSet3(const struct FString& MonsterID0, int Num0, const struct FString& MonsterID1, int Num1, const struct FString& MonsterID2, int Num2);
	void TripleBattleEncountMonsterSet2(const struct FString& MonsterID0, int Num0, const struct FString& MonsterID1, int Num1);
	void TripleBattleEncountMonsterSet(const struct FString& MonsterID, int Num);
	void TripleBattleEncountMonsterReset();
	void TripleBattleEncountMonsterForceTensei(bool Flag);
	void TripleBattleEncountMonsterForceMetal(bool Flag);
	void TripleBattleEncountMonsterForceFirstAttack(int Kind);
	void TripleBattleEncountMonsterForceDropMonster(bool Flag);
	void TripleBattleDeadPlayer(int PlayerIdNum);
	void TripleBattleDeadMonster(int GroupIndex, int Index);
	void TripleBattleCritical(bool Flag);
	void TripleBattleCounter(int Kind);
	void TripleBattleCommandAISetSlotNo(int GroupIndex, int Index, int SlotNo);
	void TripleBattleCommandAISetConfuseKindPlayer(int PlayerId, int Kind);
	void TripleBattleCommandAISetConfuseKindMonster(int GroupIndex, int Index, int Kind);
	void TripleBattleCommandAISetActionNo(int GroupIndex, int Index, int ActionNo);
	void TripleBattleCommandAIReset();
	void TripleBattleCommandAIInfo();
	void TripleBattleCommandAIActionPattern(int Index0, int Index1, int Index2, int Index3, int Index4, int Index5);
	void TripleBattleBukiGuard(int Kind);
	void TripleAchievementListLogOutput();
};


// Class Triple.TripleUtils
// 0x0000 (0x0038 - 0x0038)
class UTripleUtils : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Triple.TripleUtils");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
