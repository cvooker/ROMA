#include "LevelManager.h"

LevelManager::LevelManager() : ALevelManager()
{



}

void LevelManager::Render(sf::RenderWindow& windown, GameTime time)
{

	l_mainMenu.Render(windown, time);

}

void LevelManager::Update(GameTime time)
{

	l_mainMenu.Update(time);

}

/// <summary>
/// Nainizaluje v�echny leveli nic nena��ta jen kvluli pam�ti poto to bude d�lat pole toti�
/// </summary>
/// <param name="name"></param>
void LevelManager::InitLevel()
{

	l_mainMenu = LMainMenu();

}


/// <summary>
/// Odna�te level bud upln� nebo jen content
/// </summary>
/// <param name="name"></param>
/// <param name="full"></param>
void LevelManager::UnlodLevel(std::string name, bool full)
{



}
/// <summary>
/// Na�te level cel� o znovu nebo jen content
/// </summary>
/// <param name="name"></param>
/// <param name="full"></param>
void LevelManager::LoadLevel(std::string name, bool full)
{

	l_mainMenu.LoadContent(pGameContent);

}

