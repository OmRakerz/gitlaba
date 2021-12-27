/* Задание 1:
Алгоритм решения задачи в словесной форме:
Создаём цикл, в котором будет счётчик, который увеличивается на два шага при каждом повторении. Вводится одно число из прогрессии. Потом проверяем, не равно ли оно нулю и если оно не равно, то прибавляем введённое число, умноженное на счётчик, к ранее объявленной переменной сумме, а если равно нулю, то выходим из цикла. Выводим сумму.

{Инициализируем переменную сумма =0, счётчик =2 и переменную, в которой будем сохранять введённое значение(j) =0
Цикл 
{
Ввод J
Если j = 0, тогда и остановить цикл
Иначе прибавить к сумме j умноженное на счётчик
}
Вывести сумму */

#include <iostream>
using namespace std;
void main()
{
	int s = 0, j = 0;
	for (int i = 2; ;i += 2)
	{
		cout << "Enter next number: ";
		cin >> j;
		if (j == 0)
			break;
		else
			s = s + i * j;
	}
	cout << "The Result is: " << s;
}

/* Задание 2.1: */
#include<iostream>
#include<math.h>
using namespace std;
void main()
{
	int n, i;
	double t, a, f = 0;
	cout << "enter n: ";
	cin >> n;
	cout << "enter t: ";
	cin >> t;
	for (i = 0; i <= n; i++)
	{
		cout << "enter a: ";
		cin >> a;
		f = f + a * pow(t, n - i);
	}
	cout << "f = " << f;
	cin.get();
	cin.get();
}


/*Задание 2.2: */
#include<iostream>
using namespace std;
void main()
{
	int n, i;
	double t, a, f = 0;
	cout << "enter n: ";
	cin >> n;
	cout << "enter t: ";
	cin >> t;
	for (i = 0; i <= n; i++)
	{
		cout << "enter a: ";
		cin >> a;
		f = f + a * pow(t, n - i);
	}
	cout << "f = " << f;
	cin.get();
	cin.get();

}
int pow(int a, int  b)
{
	int res = 1;
	if (a==0)
{
	res=1;
}
else
{
	for (int i = 0; i < b; i++)
	{
		res = res * a;
	}
	}
	return res;
}
