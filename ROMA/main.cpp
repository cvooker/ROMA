#include <SFML/Graphics.hpp>
#include <iostream>

#include "Game/Game.h"


int main(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++) {
        if (std::string(argv[i]) == "-info") {
          
            std::cout << "haha" << std::endl;
            std::cout << "hahaha" << std::endl;
            return 0;
        }
    }

    Game* game = new Game();

    game->PreInitGame();
    game->InitGame();
    game->Run();
   
    return 0;
}