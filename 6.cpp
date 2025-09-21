#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(0, "");

	double r, h;
	cout << "Введите радиус и высоту цилиндра" << endl;
	cin >> r >> h;
	cout << "Объем цилиндра равен " << M_PI * r * r * h<<endl;
	cout << "Плоащадь поверхности цлиндра равна " << 2 * (M_PI * r * r) + 2 * M_PI * r * h;

}