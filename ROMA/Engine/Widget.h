#pragma once
#include "SFML/Graphics.hpp"
#include "GameTime.h"
#include "StructureTexture.h"
#include "GUII/AUIElement.h"

class Widget : public sf::Drawable , sf::Transform
{


public:
	Widget();

	Widget(sf::Texture* texture);
	Widget(sf::Texture* texture, TextureTile sourceRec);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	virtual void Update(GameTime time);

	void SetPosition(sf::Vector2f pos);

	void SetSize(sf::Vector2f size);

	void SetVisition(bool vis);

	bool GetVisition();

	bool PointInMe(sf::Vector2f point);

	bool PointOnMyElement(sf::Vector2f point);
	
	void AddElements(AUIElement& element, std::string name);

	AUIElement* GetElemnts(std::string name);


	bool GetAcive();
	void SetActive(bool status);

protected:
	bool backgroud;
	bool visitible;
	bool active = false;

	sf::Texture* _texture;
	TextureTile textureRec;

	sf::VertexArray transform;

	sf::Vector2f position;
	sf::Vector2f size;


	std::vector<AUIElement> elements;
private:
	void ReCalculate();

};

