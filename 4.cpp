#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const double pi = 3.14159;
	double r;
	cout << "������� ������ ����"<<endl;
	cin >> r;
	cout << "����� ���� ����� " << 4.0 / 3.0 * pi * r * r * r;
}