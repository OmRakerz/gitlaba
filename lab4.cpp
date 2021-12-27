/*Задание 1: */
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, " ");
	string st;
	char ch;
	cout << "type characters and press Enter: ";
	cin >> st;
	swap(st [0], st [st.length() - 1]);
	cout << "the result is : " << st << endl;
	cin.get();
}

/*Задание 2: */
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float x = 0, y = 0;
	cout << "Введите первое число, потом пробел, а затем второе число: " << endl;
	cin >> x >> y; 
	cout <<"Сложение введённых чисел: " <<x <<" + " <<y <<" = " <<floor ((x + y) *100)/100 <<endl; //floor- округление
	cout <<"Вычитание введённых чисел: " <<x << " - " <<y <<" = "<<floor((x - y)*100)/100 << endl;
	cin.get();
}
