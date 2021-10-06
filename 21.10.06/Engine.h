#pragma once


//STL, C++
#include <vector>

using namespace std;

class Actor;

class Engine
{
public:
	Engine();
	~Engine();

	void Run();

	void SpawnActor();
	void DestroyActor(int Index);

private:
	void Init();
	void Term();
	void Tick();
	void BeginPlay();
	void Input();
	void Render();
	void BeginOverlap();

	vector<Actor*> Actors;
};




