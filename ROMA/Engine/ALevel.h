#pragma once
#include <SFML/Graphics.hpp>
#include "../Content/PernamentContent.h"
#include "GameTime.h"

class ALevel
{

public:
	ALevel();

	ALevel(std::string name);

	virtual void Update(GameTime time);

	virtual void Render(sf::RenderWindow& window, GameTime time);

	virtual bool LoadLevel(); // naète data a concen se soubnoru
	virtual bool SaveLevel(); // uloží data a content do souboru

	virtual void FreeContent(); //uvolní grafiku levelu
	virtual void LoadContent(PernamentContent* cm); //naète grafiku levelu


protected:
	std::string name;

	std::vector<sf::Texture> textures;
	std::vector<sf::Font> fonts;




};

