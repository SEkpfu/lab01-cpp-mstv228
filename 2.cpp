#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b;
	cin >> a >> b;
	cout << "Сумма чисел равна " << a+b <<endl;
	cout << "Разность числе равна " << a-b <<endl;
	cout << "Произведение чисел равно " << a*b <<endl;
}