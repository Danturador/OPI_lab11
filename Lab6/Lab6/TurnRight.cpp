#include <iostream>
#include <windows.h>
using namespace std;

void TurnRight(int *horse)
{
	--*horse;
	cout << "Вы не спасли коня" << endl;
}