#pragma once
#include "SFML/Graphics.hpp"
#include "AUIElement.h"
#include "../../Content/PernamentContent.h"

class AButton : AUIElement
{
public:
	AButton();

	AButton(int pos_x, int pos_y, int size_x, int size_y);

	AButton(int pos_x, int pos_y, int size_x, int size_y, sf::Texture& texture);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	bool FocosOnMe(sf::Vector2f point) override;

	void SetText(std::string text);


	sf::Text& GetText();

private:
	bool enable;

	sf::Text text;

	sf::RectangleShape transform;


};

