#include <iostream>
#include <windows.h>
using namespace std;

void DoWithNumber()
{

	char n;
	unsigned char Z;
	cout << "������� ������� ��� �� ������ ������ �������: ";
	cin >> n;
	if (n >= '0' && n <= '9') {

	printf("������� �����: ");
	for (int i = 0; i < n; i++)
	{
		cin >> Z;
		if (Z >= '0' && Z <= '9')
		{
			printf("����� %c\n", Z);
			printf("��� ASCII � 10 ������� ��������� %d\n", Z);
			printf("��� ASCII � 16 ������� ��������� %x\n", Z);
		}
		else
		{
			printf("��������� ��������� ��������!\n");
		}
		cout << endl;
	}
	}
	
}