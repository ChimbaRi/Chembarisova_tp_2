#include "List.h"
#include <Windows.h>

void Menu() {
	cout << "Выберите действие: " << endl;
	cout << "0. Завершение работы программы" << endl;
	cout << "1. Вывод списка на экран" << endl;
	cout << "2. Добавление элемента" << endl;
	cout << "3. Удаление элемента" << endl;
	cout << "4. Редактирование" << endl;
	cout << "5. Поиск" << endl;
}

void main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	List list;
	int a = 1;
	char c;
	while (1) {
		Menu();
		cin >> a;
		switch (a) {
		case 0:
			return;
		case 1:
			list.Print();
			break;
		case 2:
			list.AddTrain();
			break;
		case 3:
			try {
				list.DeleteTrain();
			}
			catch (int e)
			{
				if (e == -1)
					cout << "Исключение: неверный индекс" << endl;
				if (e == 0)
					cout << "Исключение: объекты еще не добавлены" << endl;
			}
			break;
		case 4: 
			try {
				list.EditTrain();
			}
			catch (int e)
			{
				if (e == -1)
					cout << "Исключение: неверный индекс" << endl;
				if (e == 0)
					cout << "Исключение: объекты еще не добавлены" << endl;
			}
			break;
		case 5:
			try {
				list.FindTrain();
			}
			catch (int e)
			{
				if (e == 0)
					cout << "Исключение: объекты еще не добавлены" << endl;
			}
			break;
		case 6:
			list.FlipFlag();
			break;
		default:
			cout << "Неизвестное действие" << endl;
		}
		cout << "Для продолжения введите любой символ: ";
		cin >> c;
		system("cls");
	}
}