#pragma once
#include "../Engine/AGame.h"
#include <SFML/Graphics.hpp>
#include "../Content/PernamentContent.h"
#include "LevelManager.h"


class Game :public AGame
{

public:
	Game();

	void Update(GameTime time);
	void Render(GameTime time);
	void HandleInput(GameTime time);
	void PreInitGame();

	void InitGame();

	void Run();


private:
	sf::Text text;

	LevelManager lm;


};

