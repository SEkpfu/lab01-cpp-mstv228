#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const double pi = 3.14159;
	double r;
	cout << "Введите радиус шара"<<endl;
	cin >> r;
	cout << "Объем шара равен " << 4.0 / 3.0 * pi * r * r * r;
}