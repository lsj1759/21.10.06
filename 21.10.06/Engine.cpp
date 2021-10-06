#include "Engine.h"
#include "Actor.h"
#include <iostream>

using namespace std;

Engine::Engine()
{
	Init();
}

Engine::~Engine()
{
	Term();
}

void Engine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
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
	//Heap 삭제
	for (size_t i = 0; i < Actors.size(); ++i)
	{
		delete Actors[i];
	}

	Actors.clear();
}

void Engine::Tick()
{
	if (bFirstRun)
	{
		bFirstRun = false;
		BeginPlay();
	}
	cout << "엔진이 Tick" << endl;

	for (size_t i = 0; i < Actors.size(); ++i)
	{
		 Actors[i]->Tick();
	}
}

void Engine::BeginPlay()
{
	cout << "엔진 처음 실행" << endl;
}

void Engine::Input()
{
	cout << "엔진이 입력처리" << endl;
	for (size_t i = 0; i < Actors.size(); ++i)
	{
		Actors[i]->Input();
	}
}

void Engine::Render()
{
	cout << "엔진이 렌더링" << endl;
	for (size_t i = 0; i < Actors.size(); ++i)
	{
		Actors[i]->Render();
	}
}

void Engine::BeginOverlap()
{
}

