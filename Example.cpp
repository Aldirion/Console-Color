#include "InteractiveConsole.h"
#define n 3

char **menu = new char*[n] {"First", "Second", "Third"};

int main()
{
	//���������� ��� ������� �������� ����� ������ ���� 
	setlocale(LC_ALL, "");
//	cout << setlocale(LC_ALL, NULL);
	bool exit_m = false;
	//����� � case ����� ���� ����� ��������, ������ ��������������� ������� � �.�.
	//������������ �������� ������������� ����������� ������ ���� ����, ��� ������� ������� + 1
	//��� ������� ������� ESCAPE ������� �������� -1, ��� ���� � ����������� ������ ���� ����� ������� ��������� case,
	//� ������� ��������������� ���������� (exit_m) ����� ��������� ��������, ����� �������� ���� �������� ���� ������
	while (!exit_m)
	{
		int choose = menu_interface(menu, n);
		//������� cls ������� �������
		system("cls");
		switch (choose)
		{
		case 1:
		{
			cout << "First\n";
			system("pause");
			system("cls");
			break;
		}
		case 2:
		{
			cout << "Second\n";
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			cout << "Third\n";
			system("pause");
			system("cls");
			break;
		}
		case -1://escbutton
		{
			exit_m = true;
			break;
		}
		}
	}
	system("pause");
	//��� �� � ���������� ������������ ����� �������� �������: time()
	//��� ������� ���������� ��-������, ������� � ���������� �������� � ������� ��������� ������ << ��� ������������ � ��������������� ����������
	//��� ������ ���� �� ������� ����� ���������� ���������� ������� ������
	char *TIME = time();
	cout << TIME;
	//cout << time();
	system("pause");
	return 0;
}