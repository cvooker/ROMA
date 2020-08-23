#pragma once
#include "SFML/Graphics.hpp"
#include "../Engine/ALevelManager.h"
#include "LMainMenu.h"


class LevelManager : public  ALevelManager
{
public:
	LevelManager();

	
	void Render(sf::RenderWindow& windown, GameTime time);

	void Update(GameTime time);

	void InitLevel();

	void UnlodLevel(std::string name, bool full);

	void LoadLevel(std::string name, bool full);


private:
	LMainMenu l_mainMenu;


};

