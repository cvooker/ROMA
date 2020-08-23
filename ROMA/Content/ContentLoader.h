#pragma once
#include <SFML/Graphics.hpp>


class ContentLoader
{

public:
	static ContentLoader* GetInstance();

	sf::Texture LoadTexture(std::string name);
	sf::Font LoadFont(std::string name);
private:
	ContentLoader();

};

