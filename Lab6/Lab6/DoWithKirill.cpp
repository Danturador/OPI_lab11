#include <iostream>
#include <windows.h>
using namespace std;

void DoWithKirill()
{
	int difference, n;
	unsigned char Y, y;
	cout << "Введите сколько раз вы хотите ввести символы: ";
	cin >> n;
	printf("Введите без пробела 1 букву алфавита кириллицы в прописном и 1 в строчном написаниях: ");
	for (int i = 0; i < n; i++)
	{
		cin >> Y >> y;
		printf("Код Windows-1251 в 10 системе счисления:\n%c = %d\n%c = %d\n", Y, Y, y, y);
		printf("Код Windows-1251 в 16 системе счисления:\n%c = %x\n%c = %x\n", Y, Y, y, y);
		if (Y >= 192 && Y <= 223 && y >= 224 && y <= 255)
		{
			difference = y - Y;
			printf("Разница код Windows-1251 в 10 системе счисления %d\n", difference);
			printf("Разница код Windows-1251 в 16 системе счисления %x\n", difference);
		}
		else if (y >= 192 && y <= 223 && Y >= 224 && Y <= 255)
		{
			difference = Y - y;
			printf("Разница кодов Windows-1251 в 10 системе счисления %d\n", difference);
			printf("Разница кодов Windows-1251 в 16 системе счисления %x\n", difference);
		}
		else
		{
			printf("Проверьте введенное значение!\n");
		}
		cout << endl;
	}
}