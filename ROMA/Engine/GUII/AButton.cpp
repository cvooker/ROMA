#include "AButton.h"
#include "SFML/Graphics.hpp"


AButton::AButton()
{
	text = sf::Text();

}

AButton::AButton(int pos_x, int pos_y, int size_x, int size_y)
{
	text = sf::Text();
	this->position = sf::Vector2f(pos_x,pos_y);
	transform = sf::RectangleShape(sf::Vector2f(size_x,size_y));


}

AButton::AButton(int pos_x, int pos_y, int size_x, int size_y, sf::Texture& texture)
{
	text = sf::Text();
	this->position = sf::Vector2f(pos_x, pos_y);
	transform = sf::RectangleShape(sf::Vector2f(size_x, size_y));

	transform.setTexture(&texture);

}

void AButton::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	if (visitible)
	{
		target.draw(transform);
	}
}

bool AButton::FocosOnMe(sf::Vector2f point)
{

	return transform.getLocalBounds().contains(point);
}

void AButton::SetText(std::string text)
{
	this->text.setString(text);
}

sf::Text& AButton::GetText()
{
	// TODO: insert return statement here
	return text;
}

