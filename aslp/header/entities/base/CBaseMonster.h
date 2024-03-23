#pragma once

template <typename T>
class CBaseMonsterTemplate : public CBaseAnimatingTemplate<T>
{
public:
	void SC_SERVER_DECL SUB_DoNothing(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL Look(T* pThis, SC_SERVER_DUMMYARG int iDistance);
	void SC_SERVER_DECL RunAI(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL IsGibbed(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL ShouldFadeOnDeath(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL ChangeYaw(T* pThis, SC_SERVER_DUMMYARG int yaw);
	void SC_SERVER_DECL SetupFriendly(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL MonsterThink(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL MonsterInit(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL MonsterInitDead(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL BecomeDead(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL Revive(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL StartMonster(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL BestVisibleEnemy(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL FInViewCone(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pOther);
	void SC_SERVER_DECL FInViewConeVector(T* pThis, SC_SERVER_DUMMYARG vec3_t vecPos);
	void SC_SERVER_DECL CheckLocalMove(T* pThis, SC_SERVER_DUMMYARG vec3_t vecStart, vec3_t vecEnd, CBaseEntity* pTarget, float* flDist, Vector* param_5, bool param_6);
	void SC_SERVER_DECL Move(T* pThis, SC_SERVER_DUMMYARG float flDist);
	void SC_SERVER_DECL MoveExecute(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pTarget, vec3_t vecEnd, float flDist);
	int SC_SERVER_DECL ShouldAdvanceRoute(T* pThis, SC_SERVER_DUMMYARG float flDist);
	int SC_SERVER_DECL GetStoppedActivity(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL Stop(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	bool SC_SERVER_DECL CheckRangeAttack1(T* pThis, SC_SERVER_DUMMYARG float flDot, float flDist);
	bool SC_SERVER_DECL CheckRangeAttack1_Move(T* pThis, SC_SERVER_DUMMYARG float flDot, float flDist);
	bool SC_SERVER_DECL CheckRangeAttack2(T* pThis, SC_SERVER_DUMMYARG float flDot, float flDist);
	bool SC_SERVER_DECL CheckRangeAttack2_Move(T* pThis, SC_SERVER_DUMMYARG float flDot, float flDist);
	bool SC_SERVER_DECL CheckMeleeAttack1(T* pThis, SC_SERVER_DUMMYARG float flDot, float flDist);
	bool SC_SERVER_DECL CheckMeleeAttack1_Move(T* pThis, SC_SERVER_DUMMYARG float flDot, float flDist);
	bool SC_SERVER_DECL CheckMeleeAttack2(T* pThis, SC_SERVER_DUMMYARG float flDot, float flDist);
	bool SC_SERVER_DECL CheckMeleeAttack2_Move(T* pThis, SC_SERVER_DUMMYARG float flDot, float flDist);
	void SC_SERVER_DECL CheckTankUsage(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL ScheduleFromName(T* pThis, SC_SERVER_DUMMYARG char* name);
	void SC_SERVER_DECL StartTask(T* pThis, SC_SERVER_DUMMYARG Task_t* name);
	void SC_SERVER_DECL RunTask(T* pThis, SC_SERVER_DUMMYARG Task_t* name);
	void SC_SERVER_DECL GetScheduleOfType(T* pThis, SC_SERVER_DUMMYARG int type);
	void SC_SERVER_DECL GetSchedule(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL ScheduleChange(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	bool SC_SERVER_DECL CanPlaySequence(T* pThis, SC_SERVER_DUMMYARG bool bDisregardState, int iInterruptLevel);
	bool SC_SERVER_DECL CanPlaySentence(T* pThis, SC_SERVER_DUMMYARG bool bDisregardState);
	void SC_SERVER_DECL PlaySentence(T* pThis, SC_SERVER_DUMMYARG char* szSentence, float duration, float volume, float attenuation);
	void SC_SERVER_DECL PlayScriptedSentence(T* pThis, SC_SERVER_DUMMYARG char* szSentence, float duration, float volume, float attenuation, bool bConcurrent, CBaseEntity* pListener);
	void SC_SERVER_DECL SentenceStop(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL GetIdealState(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL SetActivity(T* pThis, SC_SERVER_DUMMYARG int iActivity);
	void SC_SERVER_DECL SetGaitActivity(T* pThis, SC_SERVER_DUMMYARG int iActivity);
	void SC_SERVER_DECL ReportAIState(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL CheckEnemy(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pEnemy);
	void SC_SERVER_DECL FTriangulate(T* pThis, SC_SERVER_DUMMYARG vec3_t vecStart, vec3_t vecEnd, float flDist, CBaseEntity* pTargetEnt, Vector* pApex, Vector* param_6, bool param_7);
	void SC_SERVER_DECL FTriangulateExtension(T* pThis, SC_SERVER_DUMMYARG vec3_t vecStart, vec3_t vecEnd, float flDist, CBaseEntity* pTargetEnt, Vector* pApex);
	void SC_SERVER_DECL SetYawSpeed(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL BuildNearestRoute(T* pThis, SC_SERVER_DUMMYARG vec3_t vecThreat, vec3_t vecViewOffset, float flMinDist, float flMaxDist);
	void SC_SERVER_DECL FindCover(T* pThis, SC_SERVER_DUMMYARG vec3_t vecThreat, vec3_t vecViewOffset, float flMinDist, float flMaxDis);
	void SC_SERVER_DECL FindCoverGrenade(T* pThis, SC_SERVER_DUMMYARG vec3_t vecThreat, vec3_t vecViewOffset, float flMinDist, float flMaxDis);
	void SC_SERVER_DECL FindCoverDistance(T* pThis, SC_SERVER_DUMMYARG vec3_t vecThreat, vec3_t vecViewOffset, float flMinDist, float flMaxDis);
	void SC_SERVER_DECL FindAttackPoint(T* pThis, SC_SERVER_DUMMYARG vec3_t vecThreat, vec3_t vecViewOffset, float flMinDist, float flMaxDis);
	void SC_SERVER_DECL FValidateCover(T* pThis, SC_SERVER_DUMMYARG vec3_t vecCoverPos);
	float SC_SERVER_DECL CoverRadius(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL FCanCheckAttacks(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL CheckAttacker(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pAttacker);
	void SC_SERVER_DECL CheckAmmo(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL IgnoreConditions(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL FValidateHintType(T* pThis, SC_SERVER_DUMMYARG short shint);
	int SC_SERVER_DECL FCanActiveIdle(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL ISoundMask(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL PBestSound(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL PBestScent(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	float SC_SERVER_DECL HearingSensitivity(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL BarnacleVictimBitten(T* pThis, SC_SERVER_DUMMYARG entvars_t* pevVictim, float flDamage);
	void SC_SERVER_DECL BarnacleVictimReleased(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL NoFriendlyFire(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL NoFriendlyFireVector(T* pThis, SC_SERVER_DUMMYARG vec3_t vecPos);
	void SC_SERVER_DECL NoFriendlyFireVectorEntity(T* pThis, SC_SERVER_DUMMYARG vec3_t vecPos, CBaseEntity* pEntity);
	void SC_SERVER_DECL NoFriendlyFireToPos(T* pThis, SC_SERVER_DUMMYARG vec3_t vecPos);
	void SC_SERVER_DECL FVisibleGunPos(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pEntity, vec3_t vecPos);
	void SC_SERVER_DECL FInBulletCone(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pEntity, vec3_t vecPos);
	void SC_SERVER_DECL PrescheduleThink(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL GetDeathActivity(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL GibMonster(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL CallGibMonster(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL HasHumanGibs(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL HasAlienGibs(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL FadeMonster(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	Vector SC_SERVER_DECL GetGunPosition(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL CheckTimeBasedDamage(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL ClearTimeBasedDamage(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL DeathSound(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL AlertSound(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL IdleSound(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL PainSound(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL FollowerPlayerUse(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pActivator, CBaseEntity* pCaller, int useType, float flValue);
	int SC_SERVER_DECL IsPlayerFollowing(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL CanPlayerFollow(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL ShouldStopPlayerFollow(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL LimitFollowers(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pFollow, int maxfollow);
	void SC_SERVER_DECL StartPlayerFollowing(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pLeader, bool bFlag);
	void SC_SERVER_DECL StopPlayerFollowing(T* pThis, SC_SERVER_DUMMYARG bool bClearSchedule, bool bFlag);
	void SC_SERVER_DECL DeclineFollowing(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL UseSound(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL UnUseSound(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL RideMonster(T* pThis, SC_SERVER_DUMMYARG CBaseEntity* pRider);
	void SC_SERVER_DECL CheckAndApplyGenericAttacks(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	int SC_SERVER_DECL CheckScared(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL CheckCreatureDanger(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL CheckFallDamage(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL CheckRevival(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL HandleStep(T* pThis SC_SERVER_DUMMYARG_NOCOMMA);
	void SC_SERVER_DECL PlayStepSound(T* pThis, SC_SERVER_DUMMYARG int iStep, float volumn);
	void SC_SERVER_DECL MedicCallSound(T* pThis, SC_SERVER_DUMMYARG float flKeep);
};