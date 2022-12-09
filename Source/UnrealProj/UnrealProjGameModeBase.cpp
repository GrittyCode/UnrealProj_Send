#include "UnrealProjGameModeBase.h"
#include "Global.h"

AUnrealProjGameModeBase::AUnrealProjGameModeBase()
{
	//ConstructorHelpers::FClassFinder<APawn> pawn(L"Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
	//if (pawn.Succeeded())
	//{
	//	
	//}
	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
}