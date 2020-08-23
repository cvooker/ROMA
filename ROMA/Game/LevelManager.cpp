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
/// Nainizaluje vèechny leveli nic nenaèíta jen kvluli pamìti poto to bude dìlat pole totiž
/// </summary>
/// <param name="name"></param>
void LevelManager::InitLevel()
{

	l_mainMenu = LMainMenu();

}


/// <summary>
/// Odnaète level bud uplnì nebo jen content
/// </summary>
/// <param name="name"></param>
/// <param name="full"></param>
void LevelManager::UnlodLevel(std::string name, bool full)
{



}
/// <summary>
/// Naète level celí o znovu nebo jen content
/// </summary>
/// <param name="name"></param>
/// <param name="full"></param>
void LevelManager::LoadLevel(std::string name, bool full)
{

	l_mainMenu.LoadContent(pGameContent);

}

