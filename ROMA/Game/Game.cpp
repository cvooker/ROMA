#include "Game.h"
#include "../Content/ContentLoader.h"
#include <iostream>


Game::Game() : AGame("Game")
{
    text= sf::Text();
}

void Game::Update(GameTime time)
{
   
    lm.Update(time);

    std::cout << std::to_string(time.GetSpeed()) << std::endl;
}

void Game::Render(GameTime time)
{
	gameWindow.clear(sf::Color::Black);

    //layer 
    lm.Render(gameWindow, time);

    // layer 1
	//gameWindow.draw(text);

	gameWindow.display(); //pushnu to ven
}

void Game::HandleInput(GameTime time)
{
    sf::Event event;

    while (gameWindow.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            gameWindow.close();
        }
           
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {

        }
        if (event.type == sf::Event::KeyPressed) {

            //wasd
            if (event.key.code == sf::Keyboard::A)
            {

            }
            if (event.key.code == sf::Keyboard::D)
            {

            }
            if (event.key.code == sf::Keyboard::W)
            {

            }
            if (event.key.code == sf::Keyboard::S)
            {

            }
            if (event.key.code == sf::Keyboard::Numpad1)
            {
                time.SetSped(0.f);
                std::cout << "KEY presss" << std::endl;
            }
            if (event.key.code == sf::Keyboard::Numpad2)
            {
                time.SetSped(1.f);
            }
            if (event.key.code == sf::Keyboard::Numpad3)
            {
                time.SetSped(5.f);
            }

            //main key
            if (event.key.code == sf::Keyboard::Escape)
            {
                gameWindow.close();
            }
            else if (event.key.code == sf::Keyboard::Return)
            {

            }
        }
    }
}

void Game::PreInitGame()
{
    AGame::PreInitGame();
    lm = LevelManager();

    lm.LoadPenrnament();
    lm.InitLevel();
    lm.LoadLevel("MainLevel", true);

    //text.setFont(this->pernament.GetFont(0));
    //text.setCharacterSize(20);
    //text.setStyle(sf::Text::Bold);
    //text.setFillColor(sf::Color::Red);
    //text.setString("To to je test perma dat");
}

void Game::InitGame()
{
    

}

void Game::Run()
{

    AGame::Run();

}
