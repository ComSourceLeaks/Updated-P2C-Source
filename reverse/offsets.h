#pragma once
#pragma once
#include <Windows.h>
#define OFFSET_UWORLD 0x1714D538 //
//

namespace OFFSETS


{
    uintptr_t Gameinstance = 0x210;
    uintptr_t LocalPlayers = 0x38;
    uintptr_t PlayerController = 0x30;
    uintptr_t LocalPawn = 0x350;
    uintptr_t PlayerState = 0x2C8;
    uintptr_t RootComponet = 0x1B0;
    uintptr_t GameState = 0x198;
    uintptr_t PersistentLevel = 0x30;

    uintptr_t ActorCount = 0xA0;
    uintptr_t Cameramanager = 0x360;
    uintptr_t AActor = 0x98;
    uintptr_t CurrentActor = 0x8;
    uintptr_t Mesh = 0x328;
    uintptr_t Revivefromdbnotime = 0x4530;
    uintptr_t TeamId = 0x1259;
    uintptr_t ActorTeamId = 0x1259;

    uintptr_t LocalActorPos = 0x128;
    uintptr_t ComponetToWorld = 0x1E0;
    uintptr_t BoneArray = 0x5C8;
    uintptr_t Velocity = 0xb8;
    uintptr_t PawnPrivate = 0x320;
    uintptr_t PlayerArray = 0x2C0;
    uintptr_t relativelocation = 0x2E8;
    uintptr_t UCharacterMovementComponent = 0x318;//havent got
    uintptr_t entity_actor = 0x310;//havent got
    uintptr_t bIsReloadingWeapon = 0x331;
    uintptr_t GlobalAnimRateScale = 0xa58;
    uintptr_t CurrentWeapon = 0x908;
}