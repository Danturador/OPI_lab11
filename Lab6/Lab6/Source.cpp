#include <iostream>
#include <windows.h>
#include <typeinfo>
#include "DoWith.h"
#include "Additional_task.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*char num;
	do
	{
		printf("\n������� ����� ��� ������ ��������:\n1 - ������� ����� ����. � �����. ���� ���������� ��������\n2 - ������� ����� ����. � �����. ���� ��������� ��������\n3 - ����� ���� �������, ���������� � ����������\n4 - ����� �� ���������\n");
		cin >> num;

			switch (num)
			{
			case '1':
				DoWithLatin();
				break;
			case '2':
				DoWithKirill();
				break;
			case '3':
				DoWithNumber();
				break;
			default:
				if (num != '4')
				{
					ShowInputError();
				}
				break;

			}
	} while (num != '4');*/


	//�������������� �������
	
	int I = 1, horse = 1, choice;
	ShowStartMessage();
	cin >> choice;
	if (choice == 1) {
		TurnRight(&horse);
	}
	else if (choice == 2) {
		TurnLeft(&I);
	}
	else if (choice == 3) {
		GoForward(&I, &horse);
	}
	else ShowError();
	

	return 0;
}