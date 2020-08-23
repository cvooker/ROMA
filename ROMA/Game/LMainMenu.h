#pragma once
#include "Level.h"
#include "../Engine/GUII/AButton.h"

#include "../Engine/Widget.h"

class LMainMenu :
    public Level
{

public:
    LMainMenu();

    void Update(GameTime time);

    void Render(sf::RenderWindow& window, GameTime time);

    void LoadContent(PernamentContent* cm);

private:

    Widget BaseMenu;


    


};

