#include <iostream>
#include "Engine.h"
#include "Actor.h"
#include <vector> //STL

using namespace std;

//template function
template<typename T, typename T1, typename T2>
T2 Add(T a, T1 b)
{
	return a + b;
}

//template class
template<typename T>
class NumerStore
{
public:
	T Store[100];
};

//function overloding
int Add(int A, int B)
{
	return A + B;
}

float Add(float A, float B)
{
	return A + B;
}



int main()
{
	NumerStore<int> IntStore;
	NumerStore<float> FloatStore;

	FloatStore.Store[0] = 10.0f;
	IntStore.Store[0] = 10;

	int a = 2;
	int b = 3;

	cout << Add<int, int, int>(a, b) << endl;
	cout << Add<int, float, float>(2, 3.0f) << endl;


	//	Engine* engine = new Engine();
	//
	//	(*engine).SpawnActor();
	//	 //Wall, Player, Goal(Object)
	//	engine->SpawnActor();
	//
	////	engine->DestroyActor(0);
	//
	//	engine->Run();
	//
	//	delete engine;
	//
	return 0;
}