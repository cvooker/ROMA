#pragma once
#include "../Content/ContentLoader.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <string>

#include "GameTime.h"


class AGame
{
	
public:
	AGame(std::string NameWindow);

	//void PreInitGame();
	void Run();

	virtual void PreInitGame();
	virtual void HandleInput(GameTime time);
	virtual void Update(GameTime time);
	virtual void Render(GameTime time);
protected:
	sf::RenderWindow gameWindow;
	sf::ContextSettings graphicSettings;
private:

	sf::Time per_frame = sf::seconds(1.0f / 30.0f);
	sf::Clock clock;
	sf::Time elapsed;
	//TO DO pøedelat
	GameTime* gameTime;


};

