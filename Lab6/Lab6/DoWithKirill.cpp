#include <iostream>
#include <windows.h>
using namespace std;

void DoWithKirill()
{
	int difference, n;
	unsigned char Y, y;
	cout << "������� ������� ��� �� ������ ������ �������: ";
	cin >> n;
	printf("������� ��� ������� 1 ����� �������� ��������� � ��������� � 1 � �������� ����������: ");
	for (int i = 0; i < n; i++)
	{
		cin >> Y >> y;
		printf("��� Windows-1251 � 10 ������� ���������:\n%c = %d\n%c = %d\n", Y, Y, y, y);
		printf("��� Windows-1251 � 16 ������� ���������:\n%c = %x\n%c = %x\n", Y, Y, y, y);
		if (Y >= 192 && Y <= 223 && y >= 224 && y <= 255)
		{
			difference = y - Y;
			printf("������� ��� Windows-1251 � 10 ������� ��������� %d\n", difference);
			printf("������� ��� Windows-1251 � 16 ������� ��������� %x\n", difference);
		}
		else if (y >= 192 && y <= 223 && Y >= 224 && Y <= 255)
		{
			difference = Y - y;
			printf("������� ����� Windows-1251 � 10 ������� ��������� %d\n", difference);
			printf("������� ����� Windows-1251 � 16 ������� ��������� %x\n", difference);
		}
		else
		{
			printf("��������� ��������� ��������!\n");
		}
		cout << endl;
	}
}