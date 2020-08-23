#include "LMainMenu.h"



LMainMenu::LMainMenu()
{
	

}

void LMainMenu::Update(GameTime time)
{
	if (BaseMenu.GetAcive())
	{
		BaseMenu.Update(time);
	}

}

void LMainMenu::Render(sf::RenderWindow& window, GameTime time)
{

	window.draw(BaseMenu);

}

void LMainMenu::LoadContent(PernamentContent* cm)
{

	BaseMenu = Widget(cm->GetTexture(0));
	BaseMenu.SetVisition(true);
	BaseMenu.SetPosition(sf::Vector2f(150, 300));
	BaseMenu.SetActive(true);
}
