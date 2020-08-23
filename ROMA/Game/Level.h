#pragma once
#include "../Engine/ALevel.h"


class Level : public ALevel
{

public:
	Level();
	virtual void Render(sf::RenderWindow& window, GameTime time);

};

