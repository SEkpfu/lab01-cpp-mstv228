#include <iostream>
using namespace std;
int main() {
	double x, x2, x3, x5, x13;
	cin >> x;
	x2 = x * x;
	x3 = x * x2;
	x5 = x2 * x3;
	x13 = x5 * x5 * x3;
	cout << x13 - x5 + x2 - 2;
}