#include "AGame.h"

AGame::AGame(std::string NameWindow)
{
    //sf::RenderWindow gameWindow(sf::VideoMode(1240, 720), "Template");
    //sf::RenderWindow window(sf::VideoMode(600, 800), "Tmplate", sf::Style::Default, graphicSettings);
    
   


}

void AGame::PreInitGame()
{
    gameTime = new GameTime();

    graphicSettings.antialiasingLevel = 8;

    gameWindow.create(sf::VideoMode(600, 800), "Tmplate", sf::Style::Default, graphicSettings);

}

void AGame::Run()
{
   
    while (gameWindow.isOpen()) 
    {      

        sf::Time delta = clock.getElapsedTime() - elapsed;
        if (delta > per_frame) 
        {
            gameTime->Update();

            HandleInput(*gameTime);

            Update(*gameTime);

            Render(*gameTime);

            elapsed = clock.getElapsedTime(); //èas framu
        }
    }

}

void AGame::HandleInput(GameTime time)
{
    sf::Event event;
    while (gameWindow.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            gameWindow.close();
    }
}

void AGame::Update(GameTime time)
{
}

void AGame::Render(GameTime time)
{

    

}
