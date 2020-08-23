#include "PernamentContent.h"

#include "ContentLoader.h"


PernamentContent::PernamentContent()
{
}

bool PernamentContent::LoadData()
{
	this->_backgroud= ContentLoader::GetInstance()->LoadTexture("Resource/Texture/mars.png");
	this->_FontBase= ContentLoader::GetInstance()->LoadFont("Resource/Font/CaviarDreams.ttf");

	return false;
}

sf::Font* PernamentContent::GetFont(int id)
{
	return &this->_FontBase;
}

sf::Texture* PernamentContent::GetTexture(int id)
{
	return &this->_backgroud;
}
