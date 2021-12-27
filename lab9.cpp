/*Задание 1: */
#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "enter the sequence of symbols\n";
	do
	{
		cin >> ch;
		cout << (int)ch << endl;
	}
	while (ch != '.');
	cout << "finish";
	cin.get();
}

/*Задание 2: */	
#include <iostream>
using namespace std;
int main()
{
	int val, s = 0;
	cout << "enter the sequence of numbers\n";
	while (s <= 100)
	{
		cin >> val;
		s = s + val * val;
	}
	cout <<" s= " << s;
	cin.get();
}

/*Алгоритм решения задачи в словесной форме:
      1)Инициализируем переменные сумму(sum), I и произведение больше 15 (mul)
      2)Создаём цикл:
Внутри цикла запрашиваем ввод значения I и сравниваем с нулём, и если оно равно нулю, то прерываем цикл, а иначе, если I принадлежит промежутку (10;25), то прибавляем его к сумме и если I > 15, то тогда умножаем произведение на I. 
Сравниваем сумму с произведением и выводим наименьшее. */
#include<iostream>
using namespace std;
int main()
{
	int sum = 0, mul = 1, i = 0;
	setlocale(0, "");
	cout << "Введите последовательность чисел, которая обязана заканчиваться 0: " << endl;
	while (true) //бесконечный цикл
	{
		cin >> i;
		if (i == 0)
			break;
		else
		{
			if (i > 10 && i < 25)
			{
				sum = sum + i;
			}
			if (i > 15)
			{
				mul = mul * i;
			}
		}
	}
	if (sum > mul)
		cout << mul;
	else
		cout << sum;
	cin.get();
}

/*Задание 4: */
#include<iostream>
using namespace std;
int main()
{
	int f = 5;
	for (int i = 1; i < 6; i++)
	{
		for (int j = f; j > 0; j--)
		{
			cout << i << " ";
		}
		cout << endl;
		f--;
	}
}

/*Задание 5: */
#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int h = 0, min = 0, sec = 0, res = 0;
		cout << "Введите количество часов: ";
		cin >> h;
		if (h >= 0)
		{
			cout << "Введите количество минут: ";
			cin >> min;
			if (min >= 0 && min <= 60)
			{
				cout << "Введите количество секунд: ";
				cin >> sec;
				if (sec >= 0 && sec <= 60)
				{
					res = sec + min * 60 + h * 3600;
					cout << "Результат: " << res <<" сек" << endl;
				}
				else
					cout << "Введено некорректное значение " << endl;
			}
			else
				cout << "Введено некорректное значение" << endl;
		}
		else
			cout << "Введено некорректное значение" << endl;
	cin.get();
}
