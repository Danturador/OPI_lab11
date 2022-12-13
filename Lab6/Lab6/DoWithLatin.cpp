#include <iostream>
#include <windows.h>
using namespace std;

void DoWithLatin()
{
	int difference, n;
	unsigned char X, x;
	cout << "Введите сколько раз вы хотите ввести символы: ";
	cin >> n;
	printf("Введите без пробела 1 букву латинского алфавита в прописном и 1 в строчном написаниях:\n");
	for (int i = 0; i < n; i++)
	{
		cin >> X >> x;
		printf("Код ASCII в 10 системе счисления:\n%c = %d\n%c = %d\n", X, X, x, x);
		printf("Код ASCII в 16 системе счисления:\n%c = %x\n%c = %x\n", X, X, x, x);
		if (X >= 'A' && X <= 'Z' && x >= 'a' && x <= 'z')
		{
			difference = x - X;
			printf("Разница кодов ASCII в 10 системе счисления %d\n", difference);
			printf("Разница кодов ASCII в 16 системе счисления %x\n", difference);
		}
		else if (x >= 'A' && x <= 'Z' && X >= 'a' && X <= 'z')
		{
			difference = X - x;
			printf("Разница кодов ASCII в 10 системе счисления %d\n", difference);
			printf("Рахница кодов ASCII в 16 системе счисления %x\n", difference);
		}
		else
		{
			printf("Проверьте введенное значение!\n");
		}
		cout << endl;
	}
}