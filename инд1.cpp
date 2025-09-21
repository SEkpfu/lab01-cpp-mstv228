#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double r, s,v;
	cin >> s;

	r = sqrt(s / 4 / M_PI);
	v = 4.0 / 3.0 * M_PI * r * r * r;
	
	cout << v;

}