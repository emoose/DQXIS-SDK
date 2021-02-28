#pragma once

#include "../SDK.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Triple.TripleCheatManager.TripleWeatherSet
struct UTripleCheatManager_TripleWeatherSet_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleTrophiesReacquiredUE4Achievement
struct UTripleCheatManager_TripleTrophiesReacquiredUE4Achievement_Params
{
};

// Function Triple.TripleCheatManager.TripleTrophiesNew
struct UTripleCheatManager_TripleTrophiesNew_Params
{
	int                                                InTestNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleTrophiesCompleteWait
struct UTripleCheatManager_TripleTrophiesCompleteWait_Params
{
	bool                                               bIsWaitMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleTimeZoneOverride
struct UTripleCheatManager_TripleTimeZoneOverride_Params
{
	int                                                Timezone;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleTimeZoneMoveToNext
struct UTripleCheatManager_TripleTimeZoneMoveToNext_Params
{
};

// Function Triple.TripleCheatManager.TripleTimeZoneInfo
struct UTripleCheatManager_TripleTimeZoneInfo_Params
{
};

// Function Triple.TripleCheatManager.TripleSkillPassiveOpen
struct UTripleCheatManager_TripleSkillPassiveOpen_Params
{
	struct FString                                     SkillPassiveID;                                           // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleSkillOpen2
struct UTripleCheatManager_TripleSkillOpen2_Params
{
	struct FString                                     SkillID;                                                  // (Parm, ZeroConstructor)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleSkillOpen
struct UTripleCheatManager_TripleSkillOpen_Params
{
	struct FString                                     SkillID;                                                  // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleSkillJumonOpen
struct UTripleCheatManager_TripleSkillJumonOpen_Params
{
	struct FString                                     SkillJumonID;                                             // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleSetTalkerName
struct UTripleCheatManager_TripleSetTalkerName_Params
{
	struct FString                                     InNpcName;                                                // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleSetTalker
struct UTripleCheatManager_TripleSetTalker_Params
{
	struct FString                                     InNpcId;                                                  // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleSetGameplayTime
struct UTripleCheatManager_TripleSetGameplayTime_Params
{
	int                                                Sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleSetBattleVictory
struct UTripleCheatManager_TripleSetBattleVictory_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleSenrekiAndTabinokokoroeOpenAll
struct UTripleCheatManager_TripleSenrekiAndTabinokokoroeOpenAll_Params
{
};

// Function Triple.TripleCheatManager.TripleRuraShowAll
struct UTripleCheatManager_TripleRuraShowAll_Params
{
};

// Function Triple.TripleCheatManager.TripleRunRate
struct UTripleCheatManager_TripleRunRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleReturnTitle
struct UTripleCheatManager_TripleReturnTitle_Params
{
};

// Function Triple.TripleCheatManager.TripleQuestProgressSetEnd
struct UTripleCheatManager_TripleQuestProgressSetEnd_Params
{
	struct FString                                     QuestId;                                                  // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TriplePrintTextArgs
struct UTripleCheatManager_TriplePrintTextArgs_Params
{
	TArray<struct FString>                             ParamList;                                                // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TriplePrintText
struct UTripleCheatManager_TriplePrintText_Params
{
	struct FString                                     InTextId;                                                 // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleOutputVersion
struct UTripleCheatManager_TripleOutputVersion_Params
{
};

// Function Triple.TripleCheatManager.TripleOutputManagerAddr
struct UTripleCheatManager_TripleOutputManagerAddr_Params
{
};

// Function Triple.TripleCheatManager.TripleOutputGameDataText
struct UTripleCheatManager_TripleOutputGameDataText_Params
{
};

// Function Triple.TripleCheatManager.TripleOddEffectClearGoodPlayer
struct UTripleCheatManager_TripleOddEffectClearGoodPlayer_Params
{
	int                                                PlayerIdNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleOddEffectClearGoodMonster
struct UTripleCheatManager_TripleOddEffectClearGoodMonster_Params
{
	int                                                GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleOddEffectClearBadPlayer
struct UTripleCheatManager_TripleOddEffectClearBadPlayer_Params
{
	int                                                PlayerIdNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleOddEffectClearBadMonster
struct UTripleCheatManager_TripleOddEffectClearBadMonster_Params
{
	int                                                GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleMugenMP
struct UTripleCheatManager_TripleMugenMP_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleMpSet
struct UTripleCheatManager_TripleMpSet_Params
{
	struct FString                                     CharaID;                                                  // (Parm, ZeroConstructor)
	int                                                MP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleLevelSet
struct UTripleCheatManager_TripleLevelSet_Params
{
	struct FString                                     CharaID;                                                  // (Parm, ZeroConstructor)
	int                                                Lv;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleHpSet
struct UTripleCheatManager_TripleHpSet_Params
{
	struct FString                                     CharaID;                                                  // (Parm, ZeroConstructor)
	int                                                HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleGold
struct UTripleCheatManager_TripleGold_Params
{
	int                                                AddNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleFriendLeave
struct UTripleCheatManager_TripleFriendLeave_Params
{
	int                                                PlayerIdNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleFriendJoin
struct UTripleCheatManager_TripleFriendJoin_Params
{
	int                                                PlayerIdNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetSibariPlayFlag
struct UTripleCheatManager_TripleForceSetSibariPlayFlag_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetRenkeiUseCount
struct UTripleCheatManager_TripleForceSetRenkeiUseCount_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetObjectDestructionCount
struct UTripleCheatManager_TripleForceSetObjectDestructionCount_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetInnStayCount
struct UTripleCheatManager_TripleForceSetInnStayCount_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetGrassItemUseCount
struct UTripleCheatManager_TripleForceSetGrassItemUseCount_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetFusigikajiSuccessCount
struct UTripleCheatManager_TripleForceSetFusigikajiSuccessCount_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetFusigikajiRetryCount
struct UTripleCheatManager_TripleForceSetFusigikajiRetryCount_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetFusigikajiPlayCount
struct UTripleCheatManager_TripleForceSetFusigikajiPlayCount_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetFusigikajiCreatedFlag
struct UTripleCheatManager_TripleForceSetFusigikajiCreatedFlag_Params
{
	struct FString                                     ItemID;                                                   // (Parm, ZeroConstructor)
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetDefeatMonsterZukanCount
struct UTripleCheatManager_TripleForceSetDefeatMonsterZukanCount_Params
{
	int                                                MonsterZukanID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetDefeatMonsterCount
struct UTripleCheatManager_TripleForceSetDefeatMonsterCount_Params
{
	struct FString                                     MonsterID;                                                // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceSetCampCount
struct UTripleCheatManager_TripleForceSetCampCount_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceRecordRideMonster
struct UTripleCheatManager_TripleForceRecordRideMonster_Params
{
	struct FString                                     EnemyID;                                                  // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleForceRecordExecuteRenkei
struct UTripleCheatManager_TripleForceRecordExecuteRenkei_Params
{
	struct FString                                     RenkeiID;                                                 // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleForceLearningRecipeBookFromItemId
struct UTripleCheatManager_TripleForceLearningRecipeBookFromItemId_Params
{
	struct FString                                     ItemID;                                                   // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleForceLearningRecipeBookAll
struct UTripleCheatManager_TripleForceLearningRecipeBookAll_Params
{
};

// Function Triple.TripleCheatManager.TripleForceGetItemToBag
struct UTripleCheatManager_TripleForceGetItemToBag_Params
{
	struct FString                                     ItemID;                                                   // (Parm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceGetItem
struct UTripleCheatManager_TripleForceGetItem_Params
{
	struct FString                                     ItemID;                                                   // (Parm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceDiscardItem
struct UTripleCheatManager_TripleForceDiscardItem_Params
{
	struct FString                                     ItemID;                                                   // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleForceAddSmallMedalNum
struct UTripleCheatManager_TripleForceAddSmallMedalNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceAddCasinoCoinNum
struct UTripleCheatManager_TripleForceAddCasinoCoinNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleForceAcquireAchievementAll
struct UTripleCheatManager_TripleForceAcquireAchievementAll_Params
{
};

// Function Triple.TripleCheatManager.TripleForceAcquireAchievement
struct UTripleCheatManager_TripleForceAcquireAchievement_Params
{
	struct FString                                     AchievementID;                                            // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleExecRevival
struct UTripleCheatManager_TripleExecRevival_Params
{
	int                                                RevivalId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleExecReincarnation
struct UTripleCheatManager_TripleExecReincarnation_Params
{
	struct FString                                     ReincarnationId;                                          // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleExecDTCommand
struct UTripleCheatManager_TripleExecDTCommand_Params
{
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	int                                                Value1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
};

// Function Triple.TripleCheatManager.TripleExecAutoSave
struct UTripleCheatManager_TripleExecAutoSave_Params
{
};

// Function Triple.TripleCheatManager.TripleDisplayCoinInfo
struct UTripleCheatManager_TripleDisplayCoinInfo_Params
{
};

// Function Triple.TripleCheatManager.TripleBattleTurnSkip
struct UTripleCheatManager_TripleBattleTurnSkip_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleTateGuard
struct UTripleCheatManager_TripleBattleTateGuard_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleSenseiKougeki
struct UTripleCheatManager_TripleBattleSenseiKougeki_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleOddEffect
struct UTripleCheatManager_TripleBattleOddEffect_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleNigeru
struct UTripleCheatManager_TripleBattleNigeru_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleMitoreru
struct UTripleCheatManager_TripleBattleMitoreru_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleMiss
struct UTripleCheatManager_TripleBattleMiss_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleMikawasi
struct UTripleCheatManager_TripleBattleMikawasi_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleLose
struct UTripleCheatManager_TripleBattleLose_Params
{
};

// Function Triple.TripleCheatManager.TripleBattleHazukasiiNoroiSetMessage
struct UTripleCheatManager_TripleBattleHazukasiiNoroiSetMessage_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet4
struct UTripleCheatManager_TripleBattleEncountMonsterSet4_Params
{
	struct FString                                     MonsterID0;                                               // (Parm, ZeroConstructor)
	int                                                Num0;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MonsterID1;                                               // (Parm, ZeroConstructor)
	int                                                Num1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MonsterID2;                                               // (Parm, ZeroConstructor)
	int                                                Num2;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MonsterID3;                                               // (Parm, ZeroConstructor)
	int                                                Num3;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet3
struct UTripleCheatManager_TripleBattleEncountMonsterSet3_Params
{
	struct FString                                     MonsterID0;                                               // (Parm, ZeroConstructor)
	int                                                Num0;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MonsterID1;                                               // (Parm, ZeroConstructor)
	int                                                Num1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MonsterID2;                                               // (Parm, ZeroConstructor)
	int                                                Num2;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet2
struct UTripleCheatManager_TripleBattleEncountMonsterSet2_Params
{
	struct FString                                     MonsterID0;                                               // (Parm, ZeroConstructor)
	int                                                Num0;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MonsterID1;                                               // (Parm, ZeroConstructor)
	int                                                Num1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterSet
struct UTripleCheatManager_TripleBattleEncountMonsterSet_Params
{
	struct FString                                     MonsterID;                                                // (Parm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterReset
struct UTripleCheatManager_TripleBattleEncountMonsterReset_Params
{
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceTensei
struct UTripleCheatManager_TripleBattleEncountMonsterForceTensei_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceMetal
struct UTripleCheatManager_TripleBattleEncountMonsterForceMetal_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceFirstAttack
struct UTripleCheatManager_TripleBattleEncountMonsterForceFirstAttack_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleEncountMonsterForceDropMonster
struct UTripleCheatManager_TripleBattleEncountMonsterForceDropMonster_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleDeadPlayer
struct UTripleCheatManager_TripleBattleDeadPlayer_Params
{
	int                                                PlayerIdNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleDeadMonster
struct UTripleCheatManager_TripleBattleDeadMonster_Params
{
	int                                                GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleCritical
struct UTripleCheatManager_TripleBattleCritical_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleCounter
struct UTripleCheatManager_TripleBattleCounter_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleCommandAISetSlotNo
struct UTripleCheatManager_TripleBattleCommandAISetSlotNo_Params
{
	int                                                GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotNo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleCommandAISetConfuseKindPlayer
struct UTripleCheatManager_TripleBattleCommandAISetConfuseKindPlayer_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleCommandAISetConfuseKindMonster
struct UTripleCheatManager_TripleBattleCommandAISetConfuseKindMonster_Params
{
	int                                                GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleCommandAISetActionNo
struct UTripleCheatManager_TripleBattleCommandAISetActionNo_Params
{
	int                                                GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActionNo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleCommandAIReset
struct UTripleCheatManager_TripleBattleCommandAIReset_Params
{
};

// Function Triple.TripleCheatManager.TripleBattleCommandAIInfo
struct UTripleCheatManager_TripleBattleCommandAIInfo_Params
{
};

// Function Triple.TripleCheatManager.TripleBattleCommandAIActionPattern
struct UTripleCheatManager_TripleBattleCommandAIActionPattern_Params
{
	int                                                Index0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index3;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index4;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index5;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleBattleBukiGuard
struct UTripleCheatManager_TripleBattleBukiGuard_Params
{
	int                                                Kind;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Triple.TripleCheatManager.TripleAchievementListLogOutput
struct UTripleCheatManager_TripleAchievementListLogOutput_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
