#pragma once
class Actor
{
public:
	Actor();
	~Actor();

	void BeginOverlap();
	void BeginPlay();
	void Tick();
	void Input();
	void Render();
};

