#pragma once
class Actor;

class NewEngine
{
public:
	NewEngine();
	~NewEngine();

	void Run();

private:
	void Initialize();
	void Terminalize();
	void BeginPlay();
	void Input();
	void Process();
	void Render();
	void BeginOverlap();

	Actor* Actors[1000];
};

