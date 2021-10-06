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
	//Heap ����
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
	cout << "������ Tick" << endl;

	for (size_t i = 0; i < Actors.size(); ++i)
	{
		 Actors[i]->Tick();
	}
}

void Engine::BeginPlay()
{
	cout << "���� ó�� ����" << endl;
}

void Engine::Input()
{
	cout << "������ �Է�ó��" << endl;
	for (size_t i = 0; i < Actors.size(); ++i)
	{
		Actors[i]->Input();
	}
}

void Engine::Render()
{
	cout << "������ ������" << endl;
	for (size_t i = 0; i < Actors.size(); ++i)
	{
		Actors[i]->Render();
	}
}

void Engine::BeginOverlap()
{
}

