#pragma once
#include <string>

class GameTime
{
public:
	GameTime();
	GameTime(float x);
	void Update();
	void Reset();
	void SetSped(float x);
	float GetTime();
	float GetSpeed();

	std::string Text();

private:
	float time;
	float speed;
	

};

