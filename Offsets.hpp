#pragma once
//Date 2024/05/08
//GameVersion = v3.0.67.34

constexpr uint64_t OFF_LEVEL = 0x17c5120;                         //[Miscellaneous].LevelName updated 2024/05/08
constexpr uint64_t OFF_LOCAL_PLAYER = 0x2258688;                  //[Miscellaneous].LocalPlayer updated 2024/05/08
constexpr uint64_t OFF_ENTITY_LIST = 0x01ea9a40 + 0xA8;           //[ConVars].gamepad_aim_assist_melee updated 2024/05/08 # [Miscellaneous].cl_entitylist

constexpr uint64_t OFF_NAME_LIST = 0x0C78F030;                    //[Miscellaneous].NameList updated 2024/04/09
constexpr uint64_t OFF_NAME_INDEX = 0x38;                         //[RecvTable.DT_BaseEntity].?? updated 2024/05/03

constexpr uint64_t OFF_VIEWRENDER = 0x74DADA8;                    //[Miscellaneous].ViewRender updated 2024/05/03
constexpr uint64_t OFF_VIEWMATRIX = 0x11a350;                     //[Miscellaneous].ViewMatrix updated 2024/05/03

constexpr uint64_t OFF_HEALTH = 0x0318;                           //[RecvTable.DT_Player].m_iHealth updated 2024/05/08
constexpr uint64_t OFF_MAXHEALTH = 0x0460;                        //[RecvTable.DT_Player].m_iMaxHealth updated 2024/05/08
constexpr uint64_t OFF_SHIELD = 0x01a0;                           //[RecvTable.DT_BaseEntity].m_shieldHealth updated 2024/05/08
constexpr uint64_t OFF_MAXSHIELD = 0x01a4;                        //[RecvTable.DT_BaseEntity].m_shieldHealthMax updated 2024/05/08
constexpr uint64_t OFF_PLATFORM_UID = 0x2548;					  //[RecvTable.DT_Player].m_platformUserId updated 2024/05/08

constexpr uint64_t OFF_INATTACK = 0x074dc020;                     //[Buttons].in_attack updated 2024/05/08
constexpr uint64_t OFF_IN_ZOOM = 0x074dc1b0;					  //[Buttons].in_zoom updated 2024/05/08
constexpr uint64_t OFF_IN_TOGGLE_DUCK = 0x074dc060;				  //[Buttons].in_toggle_duck updated 2024/05/08
constexpr uint64_t OFF_IN_FORWARD = 0x074dbf70;					  //[Buttons].in_forward updated 2024/05/08
constexpr uint64_t OFF_IN_JUMP = 0x074dc138;					  //[Buttons].in_jump updated 2024/05/08
constexpr uint64_t OFF_IN_DUCK = 0x074dc220;					  //[Buttons].in_duck updated 2024/05/08
constexpr uint64_t OFF_IN_BACKWARD = 0x074dbf98;				  //[Buttons].in_backward updated 2024/05/08
constexpr uint64_t OFF_IN_USE = 0x074dc1a0;					      //[Buttons].in_use updated 2024/05/08

constexpr uint64_t OFF_IN_DUCKSTATE = 0x29e0;				      //[DataMap.C_Player].m_duckState updated 2024/05/08
constexpr uint64_t OFF_WALLRUNSTART = 0x3594;					  //[DataMap.C_Player].m_wallRunStartTime updated 2024/05/08
constexpr uint64_t OFF_WALLRUNCLEAR = 0x3598;					  //[DataMap.C_Player].m_wallRunClearTime float updated 2024/05/08
constexpr uint64_t OFF_FLAGS = 0x00c8;							  //[DataMap.C_Player].m_fFlags updated 2024/05/08
constexpr uint64_t OFF_SKYDRIVESTATE = 0x469c;					  //[RecvTable.DT_Player].m_skydiveState updated 2024/05/08

constexpr uint64_t OFF_CAMERAORIGIN = 0x1ed0;                     //[Miscellaneous].CPlayer!camera_origin updated 2024/05/08
constexpr uint64_t OFF_STUDIOHDR = 0xff0;                         //[Miscellaneous].CBaseAnimating!m_pStudioHdr updated 2024/05/08
constexpr uint64_t OFF_BONES = 0x0da0 + 0x48;                     //[RecvTable.DT_BaseAnimating].m_nForceBone + 0x48 updated 2024/05/08

constexpr uint64_t OFF_LOCAL_ORIGIN = 0x017c;                     //[DataMap.C_BaseEntity].m_vecAbsOrigin updated 2024/05/08
constexpr uint64_t OFF_ABSVELOCITY = 0x0170;                      //[DataMap.C_BaseEntity].m_vecAbsVelocity updated 2024/05/08
constexpr uint64_t OFF_VIEW_OFFSET = 0x00e8;					  //[DataMap.C_BaseEntity].m_currentFrame.viewOffset updated 2024/05/08

constexpr uint64_t OFF_ZOOMING = 0x1bd1;                          //[RecvTable.DT_Player].m_bZooming updated 2024/05/08
constexpr uint64_t OFF_TEAM_NUMBER = 0x0328;                      //[RecvTable.DT_BaseEntity].m_iTeamNum updated 2024/05/08
constexpr uint64_t OFF_NAME = 0x0471;                             //[RecvTable.DT_BaseEntity].m_iName updated 2024/05/08
constexpr uint64_t OFF_LIFE_STATE = 0x0680;                       //[RecvTable.DT_Player].m_lifeState updated 2024/05/08
constexpr uint64_t OFF_BLEEDOUT_STATE = 0x26e0;                   //[RecvTable.DT_Player].m_bleedoutState updated 2024/05/08
constexpr uint64_t OFF_LAST_VISIBLE_TIME = 0x1990;                //[Miscellaneous].CPlayer!lastVisibleTime updated 2024/05/08
constexpr uint64_t OFF_LAST_AIMEDAT_TIME = 0x1998;				  //[Miscellaneous].CWeaponX!lastCrosshairTargetTime updated 2024/05/08
constexpr uint64_t OFF_VIEW_ANGLES = 0x2534 - 0x14;               //[RecvTable.DT_Player].m_ammoPoolCapacity - 0x14 updated 2024/05/08
constexpr uint64_t OFF_PUNCH_ANGLES = 0x2438;                     //[DataMap.C_Player].m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle updated 2024/05/08
constexpr uint64_t OFF_YAW = 0x223c - 0x8;                        //[DataMap.C_Player].m_currentFramePlayer.m_ammoPoolCount - 0x8 updated 2024/05/08

constexpr uint64_t OFF_WEAPON_HANDLE = 0x1934;                    //[RecvTable.DT_BaseCombatCharacter].m_latestPrimaryWeapons updated 2024/05/08
constexpr uint64_t OFF_WEAPON_INDEX = 0x1778;                     //[RecvTable.DT_WeaponX].m_weaponNameIndex updated 2024/05/08
constexpr uint64_t OFF_PROJECTILESCALE = 0x19c0 + 0x04ec;         //[WeaponSettingsMeta].base + [WeaponSettings].projectile_gravity_scale updated 2024/05/08
constexpr uint64_t OFF_PROJECTILESPEED = 0x19c0 + 0x04e4;         //[WeaponSettingsMeta].base + [WeaponSettings].projectile_launch_speed updated 2024/05/08
constexpr uint64_t OFF_OFFHAND_WEAPON = 0x1944;                   //[DataMap.C_BaseCombatCharacter].m_latestNonOffhandWeapons updated 2024/05/08
constexpr uint64_t OFF_CURRENTZOOMFOV = 0x15d0 + 0x00b8;          //[RecvTable.DT_WeaponX].m_playerData + m_curZoomFOV updated 2024/05/08
constexpr uint64_t OFF_TARGETZOOMFOV = 0x15d0 + 0x00bc;           //[RecvTable.DT_WeaponX].m_playerData + [RecvTable.DT_WeaponPlayerData].m_targetZoomFOV updated 2024/05/08
constexpr uint64_t OFF_WEAPON_AMMO = 0x1580;                      //[RecvTable.DT_WeaponX_LocalWeaponData].m_ammoInClip updated 2024/05/08
constexpr uint64_t OFF_RELOADING = 0x159a;						  //[RecvTable.DT_WeaponX_LocalWeaponData].m_bInReload updated 2024/05/08

constexpr uint64_t OFF_GLOW_HIGHLIGHTS = 0xADE39C0;               //HighlightSettings updated 2024/04/09
constexpr uint64_t OFF_GLOW_ENABLE = 0x28C;                       //updated OFFSET_GLOW_CONTEXT_ID 7 = enabled, 2 = disabled
constexpr uint64_t OFF_GLOW_THROUGH_WALL = 0x26C;                 //Script_Highlight_SetVisibilityType updated 2 = enabled, 5 = disabled
constexpr uint64_t OFF_GLOW_FIX = 0x268;						  //updated 2024/04/12
constexpr uint64_t OFF_GLOW_HIGHLIGHT_ID = 0x028d;                //[RecvTable.DT_HighlightSettings].m_highlightGenericContexts updated 2024/05/08 [DT_HighlightSettings].m_highlightServerActiveStates    
constexpr uint64_t OFF_GLOW_HIGHLIGHT_TYPE_SIZE = 0x34;			  //updated 2024/04/12

constexpr long OFF_TIME_BASE = 0x2088;							  //[DataMap.C_Player].m_currentFramePlayer.timeBase updated 2024/05/08
constexpr long OFFSET_TRAVERSAL_START_TIME = 0x2af0;			  //[DataMap.C_Player].m_traversalStartTime updated 2024/05/08
constexpr long OFFSET_TRAVERSAL_PROGRESS = 0x2aec;                //[DataMap.C_Player].m_traversalProgress updated 2024/05/08

constexpr long OFF_GRAPPLE_ACTIVE = 0x2cd0;						  //[RecvTable.DT_Player].m_grappleActive updated 2024/05/08
constexpr long OFF_GRAPPLE = 0x2c40;							  //[RecvTable.DT_Player].m_grapple updated 2024/05/08
constexpr long OFF_GRAPPLE_ATTACHED = 0x0048;					  //[RecvTable.DT_GrappleData].m_grappleAttached updated 2024/05/08