﻿// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int mass[3][3], chet=0, kchet=0, sred; //объявляем массива и необходимые переменные
	cout << "Двумерный массив: " << endl; 
	for (int i = 0; i < 3; i++) //цикл для задания массива
	{
		for (int j = 0; j < 3; j++)
		{
			mass[i][j] = rand() % 99; //задаем рандомный массив
			cout << mass[i][j] << "|";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) //цикл для поиска четных чисел
	{
		for (int j = 0; j < 3; j++)
		{
			if (mass[i][j] % 2 == 0)
			{
				chet += mass[i][j]; //суммируем четные числа
				kchet++; //суммируем количество четных чисел
			}
		}
	}
	sred = chet / kchet; //высчитываем среднеее арифметическое четных чисел
	cout << "Среднее арифметическое четных чисел массива = " << sred << endl;
	system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
