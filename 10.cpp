#include <iostream>
using namespace std;
int main()
{	
	setlocale(0, "");
	cout << "¬ведите стороны параллелепипеда"<<endl;
	double a, b, c;
	cin >> a >> b >> c;
	cout << "его объем равен " << a * b * c << endl;
	cout << "его площадь поверхности равна " << 2 * (a * b + b * c + a * c);
}