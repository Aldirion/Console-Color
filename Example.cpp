#include "InteractiveConsole.h"
#define n 3

const char **menu = new char*[n] {"First", "Second", "Third"};

int main()
{
	//Переменная для условия останова цикла работы меню 
	setlocale(LC_ALL, "");
//	cout << setlocale(LC_ALL, NULL);
	bool exit_m = false;
	//Здесь в case могут быть любые действия, вызовы соответствующих функций и т.д.
	//Возвращаемое значение соответствует порядковому номеру поля меню, или индексу массива + 1
	//При нажатии клавиши ESCAPE вернётся значение -1, для него в организации вашего меню нужно создать отдельный case,
	//В котором соответствующей переменной (exit_m) будет присвоено значение, после которого цикл закончит свою работу
	while (!exit_m)
	{
		int choose = menu_interface(menu, n);
		//команда cls очищает консоль
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
	//Так же в библиотеке предусмотрен вывод текущего времени: time()
	//Эта функция возвращает си-строку, поэтому её необходимо вызывать с помощью оператора вывода << или присваивания её соответствующей переменной
	//Для вывода даты на русском языке необходимо подключить русскую локаль
	char *TIME = time();
	cout << TIME;
	//cout << time();
	system("pause");
	return 0;
}
