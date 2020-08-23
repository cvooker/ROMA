#include "AUIElement.h"

void AUIElement::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
}

std::string AUIElement::GetName()
{
	return name;
}

void AUIElement::SetName(std::string name)
{
	this->name = name;
}

bool AUIElement::FocosOnMe(sf::Vector2f point)
{
	return false;
}
