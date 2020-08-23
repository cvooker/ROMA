#pragma once
#include <SFML/Graphics.hpp>

class PernamentContent
{

public:
	PernamentContent();

	bool LoadData();

	sf::Font* GetFont(int id);

	sf::Texture* GetTexture(int id);

private:
	
	sf::Texture _backgroud;
	sf::Font _FontBase;



};

