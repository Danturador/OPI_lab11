#include <iostream>
#include <windows.h>
using namespace std;

void DoWithLatin()
{
	int difference, n;
	unsigned char X, x;
	cout << "������� ������� ��� �� ������ ������ �������: ";
	cin >> n;
	printf("������� ��� ������� 1 ����� ���������� �������� � ��������� � 1 � �������� ����������:\n");
	for (int i = 0; i < n; i++)
	{
		cin >> X >> x;
		printf("��� ASCII � 10 ������� ���������:\n%c = %d\n%c = %d\n", X, X, x, x);
		printf("��� ASCII � 16 ������� ���������:\n%c = %x\n%c = %x\n", X, X, x, x);
		if (X >= 'A' && X <= 'Z' && x >= 'a' && x <= 'z')
		{
			difference = x - X;
			printf("������� ����� ASCII � 10 ������� ��������� %d\n", difference);
			printf("������� ����� ASCII � 16 ������� ��������� %x\n", difference);
		}
		else if (x >= 'A' && x <= 'Z' && X >= 'a' && X <= 'z')
		{
			difference = X - x;
			printf("������� ����� ASCII � 10 ������� ��������� %d\n", difference);
			printf("������� ����� ASCII � 16 ������� ��������� %x\n", difference);
		}
		else
		{
			printf("��������� ��������� ��������!\n");
		}
		cout << endl;
	}
}