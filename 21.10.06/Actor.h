#pragma once
#include <iostream>


class Actor
{
public:
	Actor();
	~Actor();


private:

	void BeginOverlap();
	void BeginPlay();
	void Tick();
	void Input();
	void Render();

};