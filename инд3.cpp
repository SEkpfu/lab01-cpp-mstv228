#include <iostream>
using namespace std;
int main() {
	double a, b, c, d; // d ���� �� � b
	cin >> a >> b >> c;
	d = (a > c) ? a : c;
	(a * c > 100) ? cout << d : cout << a * a << " " << b * b << " " << c * c;

}