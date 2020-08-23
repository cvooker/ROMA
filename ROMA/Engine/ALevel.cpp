#include "ALevel.h"
#include "../Content/ContentLoader.h"


ALevel::ALevel()
{


}

ALevel::ALevel(std::string name)
{
	this->name = name;

}

void ALevel::Update(GameTime time)
{
}

void ALevel::Render(sf::RenderWindow& window, GameTime time)
{


}

bool ALevel::LoadLevel()
{
	return false;
}

bool ALevel::SaveLevel()
{
	return false;
}

void ALevel::FreeContent()
{
}

void ALevel::LoadContent(PernamentContent* cm)
{
}
