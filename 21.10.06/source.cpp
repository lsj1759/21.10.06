#include <iostream>
#include "engine.h"
#include "actor.h"
#include <vector> //stl
#include <list>
#include <algorithm>
#include <string>




using namespace std;

int main()
{
	string HelloWorld = "Hello World";

	for (auto S : HelloWorld)
	{
		cout << static_cast<char>(toupper(S));
	}

	return 0;
}




int main()
{
	list<int> intliststore;
	for (int i = 1; i <= 10; ++i)
	{
		intliststore.push_back(i);
	}
	
	for (auto v : intliststore) //range for
	{
		cout << v << endl;
	}
	
	
	for (auto iter = intliststore.begin(); iter != intliststore.end(); ++iter)
	/*for (list<int>::iterator iter = intliststore.begin(); iter != intliststore.end(); ++iter)*/
	{
		cout << *iter << endl;
	}

	
	
	
	vector<int> intstore;

	for (int i = 1; i <= 10; ++i)
	{
		intstore.push_back(i);
	}

	intstore.erase(intstore.begin() + 3);
	intstore.insert(intstore.begin() + 2, 11);
	
	for (size_t i = 0; i < intstore.size(); ++i)
	{
		cout << intstore[i] << endl;
	}

	return 0;
}







//template function
template<typename t, typename t1, typename t2>
t2 add(t a, t1 b)
{
	return a + b;
}

//template class
template<typename t>
class numerstore
{
public:
	t store[100];
};

//function overloding
int add(int a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}



int main()
{
	numerstore<int> intstore;
	numerstore<float> floatstore;

	floatstore.store[0] = 10.0f;
	intstore.store[0] = 10;

	int a = 2;
	int b = 3;

	cout << add<int, int, int>(a, b) << endl;
	cout << add<int, float, float>(2, 3.0f) << endl;

	return 0;
}

int main()
{
	Engine* engine = new Engine();

	(*engine).SpawnActor();
	//wall, player, goal(object)
	engine->SpawnActor();

	//	engine->destroyactor(0);

	engine->Run();

	delete engine;

	return 0;
}