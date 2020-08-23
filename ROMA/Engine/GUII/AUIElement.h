#pragma once
#include "SFML/Graphics.hpp"


class AUIElement : public sf::Drawable, sf::Transform
{
public:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	std::string GetName();

	void SetName(std::string name);

	virtual bool FocosOnMe(sf::Vector2f point);

protected:
	std::string name;
	bool visitible;

	sf::Vector2f position;


};

