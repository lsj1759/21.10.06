#include <iostream>
#include "NewEngine.h"

using namespace std;

int main()
{
	NewEngine newengine;
	
	cout << sizeof(newengine) << endl;
	newengine.Run();

	return 0;
}