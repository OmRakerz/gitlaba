/*Задание 1: */
#include <iostream>
using namespace std;

int main()
{
	int code;
	char ch;
	cout << "type characters and press Enter: ";
	cin >> ch;
	code = (int)ch;
	cout << "ASCII - code is: " << code << endl;
	cout << "the previous character is: " << (char)(code - 1) << endl;
	cout << "the next character is: " << (char)(code + 1) << endl;
	cin.get();
	cout << endl << "press Enter to exit";
}

/* Задание 2: */
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	setlocale(0, "");
	int a, b, c, p;
	float S;
	cout <<"Введите длину 1 стороны треугольника: ";
	cin >> a;
	cout <<"Введите длину 2 стороны треугольника: ";
	cin >> b;
	cout <<"Введите длину 3 стороны треугольника: ";
	cin >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout <<"Площадь треугольника равна: " <<S;
	cin.get();
}
