#include "Actor.h"
#include <iostream>

using namespace std;

Actor::Actor()
{
	cout << "Actor »ý¼º" << endl;
}

Actor::~Actor()
{
	cout << "Actor ÆÄ±«" << endl;
}

void Actor::BeginOverlap()
{
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay" << endl;
}

void Actor::Tick()
{
	cout << "Actor Tick" << endl;
}

void Actor::Input()
{
	cout << "Actor Input" << endl;
}

void Actor::Render()
{
	cout << "Actor Render" << endl;
}
