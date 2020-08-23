#include "Widget.h"

Widget::Widget()
{
	_texture = new sf::Texture();
	_texture->create(1, 1);

	textureRec.Start_X = 0;
	textureRec.Start_Y = 0;
	textureRec.End_X = _texture->getSize().x;
	textureRec.End_y = _texture->getSize().y;

	position = sf::Vector2f(0, 0);
	size = sf::Vector2f(100, 100);

	transform = sf::VertexArray(sf::Quads, 4);

	transform[0].position = position;
	transform[1].position = sf::Vector2f(position.x + size.x, position.y);
	transform[2].position = sf::Vector2f(position.x + size.x, position.y + size.y);
	transform[3].position = sf::Vector2f(position.x, position.y + size.y);

	transform[0].color = sf::Color::White;
	transform[1].color = sf::Color::White;
	transform[2].color = sf::Color::White;
	transform[3].color = sf::Color::White;

	transform[0].texCoords = sf::Vector2f(textureRec.Start_X, textureRec.Start_Y);
	transform[1].texCoords = sf::Vector2f(textureRec.End_X, textureRec.Start_Y);
	transform[2].texCoords = sf::Vector2f(textureRec.End_X, textureRec.End_y);
	transform[3].texCoords = sf::Vector2f(textureRec.Start_X, textureRec.End_y);
}

Widget::Widget(sf::Texture* texture)
{
	_texture = texture;
	textureRec.Start_X = 0;
	textureRec.Start_Y = 0;
	textureRec.End_X = _texture->getSize().x;
	textureRec.End_y = _texture->getSize().y;

	position = sf::Vector2f(0, 0);
	size = sf::Vector2f(100, 100);

	transform = sf::VertexArray(sf::Quads, 4);

	transform[0].position = position;
	transform[1].position = sf::Vector2f(position.x + size.x, position.y);
	transform[2].position = sf::Vector2f(position.x + size.x, position.y + size.y);
	transform[3].position = sf::Vector2f(position.x, position.y + size.y);

	transform[0].color = sf::Color::White;
	transform[1].color = sf::Color::White;
	transform[2].color = sf::Color::White;
	transform[3].color = sf::Color::White;

	transform[0].texCoords = sf::Vector2f(textureRec.Start_X, textureRec.Start_Y);
	transform[1].texCoords = sf::Vector2f(textureRec.End_X, textureRec.Start_Y);
	transform[2].texCoords = sf::Vector2f(textureRec.End_X, textureRec.End_y);
	transform[3].texCoords = sf::Vector2f(textureRec.Start_X, textureRec.End_y);
}

Widget::Widget(sf::Texture* texture, TextureTile sourceRec)
{
	_texture = texture;
	textureRec = sourceRec;

	position = sf::Vector2f(0, 0);
	size = sf::Vector2f(100, 100);

	transform = sf::VertexArray(sf::Quads, 4);

	transform[0].position = position;
	transform[1].position = sf::Vector2f(position.x + size.x, position.y);
	transform[2].position = sf::Vector2f(position.x + size.x, position.y + size.y);
	transform[3].position = sf::Vector2f(position.x, position.y + size.y);

	transform[0].color = sf::Color::White;
	transform[1].color = sf::Color::White;
	transform[2].color = sf::Color::White;
	transform[3].color = sf::Color::White;

	transform[0].texCoords = sf::Vector2f(textureRec.Start_X, textureRec.Start_Y);
	transform[1].texCoords = sf::Vector2f(textureRec.End_X, textureRec.Start_Y);
	transform[2].texCoords = sf::Vector2f(textureRec.End_X, textureRec.End_y);
	transform[3].texCoords = sf::Vector2f(textureRec.Start_X, textureRec.End_y);

}

void Widget::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	if (visitible)
	{
		if (backgroud)
		{
			target.draw(transform, _texture);
		}


	}



}

void Widget::Update(GameTime time)
{

	if  (time.GetTime()>5)
	{
		SetVisition(false);
	}


}

void Widget::SetPosition(sf::Vector2f pos)
{
	this->position = pos;
	ReCalculate();
}

void Widget::SetSize(sf::Vector2f size)
{
	this->size = size;
	ReCalculate();
}

void Widget::SetVisition(bool vis)
{
	this->visitible = vis;
}

bool Widget::GetVisition()
{
	return visitible;
}

bool Widget::PointInMe(sf::Vector2f point)
{
	return false;
}

bool Widget::PointOnMyElement(sf::Vector2f point)
{
	return false;
}

void Widget::AddElements(AUIElement& element, std::string name)
{
	element.SetName(name);
	elements.push_back(element);
}

AUIElement* Widget::GetElemnts(std::string name)
{
	for (size_t i = 0; i < elements.size(); i++)
	{
		if (elements[i].GetName() == name)
		{
			return &elements[i];
		}

	}
	return nullptr;
}

bool Widget::GetAcive()
{
	return active;
}

void Widget::SetActive(bool status)
{
	this->active = status;
}

void Widget::ReCalculate()
{

	transform[0].position = position;
	transform[1].position = sf::Vector2f(position.x + size.x, position.y);
	transform[2].position = sf::Vector2f(position.x + size.x, position.y + size.y);
	transform[3].position = sf::Vector2f(position.x, position.y + size.y);

}
