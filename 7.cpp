#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b;
	cout << "¬ведите 2 целых числа" << endl;
	cin >> a >> b;
	cout << "—умма их последних цифер равна " << a % 10 + b % 10;
}