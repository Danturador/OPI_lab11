#include <iostream>
#include <windows.h>
using namespace std;

void GoForward(int *I, int *horse)
{
	--*I;
	--*horse;
	cout << "Вы не спасли ни себя, ни коня" << endl;
}