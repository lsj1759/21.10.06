#include "Engine.h"
#include "Actor.h"

Engine::Engine()
{
}

Engine::~Engine()
{
	for (int i = 0; i < CountOfActors; ++i)
	{
		if (Actors[i] != nullptr)
		{
			delete Actors[i];
		}
	}
}

void Engine::Run()
{
}

void Engine::SpawnActor()
{
	Actors[CountOfActors++] = new Actor();
}

void Engine::DestroyActor(int Index)
{
	delete Actors[Index];
	Actors[Index] = nullptr;
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

