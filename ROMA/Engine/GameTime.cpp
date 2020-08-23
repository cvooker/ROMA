#include "GameTime.h"

GameTime::GameTime()
{
    time = 0;
    speed = 1;

}

GameTime::GameTime(float x)
{
    time = 0;
    speed = x;
}

void GameTime::Update()
{
    time = time + 0.01 * speed;

}

void GameTime::Reset()
{
    time = 0;
}

void GameTime::SetSped(float x)
{
    speed = x;
}

float GameTime::GetTime()
{
    return time;
}

float GameTime::GetSpeed()
{
    return speed;
}

std::string GameTime::Text()
{

    return std::to_string(time);
}
