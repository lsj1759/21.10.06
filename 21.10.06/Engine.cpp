#include "Engine.h"
#include "Actor.h"

Engine::Engine()
{
}

Engine::~Engine()
{
	//Heap ªË¡¶
	for (size_t i = 0; i < Actors.size(); ++i)
	{
		//if (Actors[i] != nullptr)
		//{
		delete Actors[i];
		//}
	}

	Actors.clear();
}

void Engine::Run()
{
}

void Engine::SpawnActor()
{
	Actors.push_back(new Actor());
}

void Engine::DestroyActor(int Index)
{
	delete Actors[Index];
	Actors.erase(Actors.begin() + Index);
}

void Engine::Init()
{
}

void Engine::Term()
{
}

void Engine::Tick()
{
}

void Engine::BeginPlay()
{
}

void Engine::Input()
{
}

void Engine::Render()
{
}

void Engine::BeginOverlap()
{
}

