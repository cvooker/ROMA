#include "ALevelManager.h"

ALevelManager::ALevelManager()
{

	pGameContent = new PernamentContent();

}


void ALevelManager::LoadPenrnament()
{
	pGameContent->LoadData();

}
