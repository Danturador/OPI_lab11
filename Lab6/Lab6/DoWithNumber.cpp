#include <iostream>
#include <windows.h>
using namespace std;

void DoWithNumber()
{

	char n;
	unsigned char Z;
	cout << "Введите сколько раз вы хотите ввести символы: ";
	cin >> n;
	if (n >= '0' && n <= '9') {

	printf("Введите число: ");
	for (int i = 0; i < n; i++)
	{
		cin >> Z;
		if (Z >= '0' && Z <= '9')
		{
			printf("Число %c\n", Z);
			printf("Код ASCII в 10 системе счисления %d\n", Z);
			printf("Код ASCII в 16 системе счисления %x\n", Z);
		}
		else
		{
			printf("Проверьте введенное значение!\n");
		}
		cout << endl;
	}
	}
	
}