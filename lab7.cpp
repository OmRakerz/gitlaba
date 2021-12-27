/*Задание 1: */	
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double num;
	cout << "Введите произвольное число: ";
	cin >> num;
	if (num < 10)
	{
		cout << "Это число меньше 10." << endl;
	}
	else if (num == 10)
	{
		cout << "Это число равно 10." << endl;
	}
	else
	{
		cout << "Это число больше 10." << endl;
	}
}

/*Задание 2: */
#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "enter point coordinates: " << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	if (((x >= -0.9) && (x < 0) && (y <= 0.9) && (y >= 0)) || ((x <= 0.9) && (x >= 0) && (y <= 0) && (y >= -0.9)))
	{
		cout << "this point belongs to area";
	}
	else
	{
		cout << "this point does not belong to area";
	}
	cin.get();
}

/*Задание 3: */
#include <iostream>
using namespace std;

int main()
{
	char n;
	float x = 0, y = 0;
	cout << "enter number 1: ";
	cin >> x;
	cout << "then enter sign: ";
	cin >> n;
	cout << "then enter number 2: ";
	cin >> y;
	cout << "result = ";
	if (n == '+')
	{
		cout << x + y;
	}
	else if (n == '-')
		cout << x - y;
	else if (n == '*')
		cout << x * y;
	else if (n == '/')
		cout << x / y;
	else
		cout << "error: wrong symbol";
	if ((x == 0 || y == 0) && (x / y))
		cout << "error: division by zero";
	cin.get();
}
