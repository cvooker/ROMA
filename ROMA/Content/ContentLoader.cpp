#include "ContentLoader.h"

ContentLoader* ContentLoader::GetInstance()
{
    static ContentLoader* _instance;
    return _instance;
}

sf::Texture ContentLoader::LoadTexture(std::string name)
{
    sf::Texture tex;
    if (tex.loadFromFile(name))
    {

    }
    return tex;
}

sf::Font ContentLoader::LoadFont(std::string name)
{
    sf::Font fon;
    if (fon.loadFromFile(name))
    {

    }
    return fon;
}
