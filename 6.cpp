#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(0, "");

	double r, h;
	cout << "������� ������ � ������ ��������" << endl;
	cin >> r >> h;
	cout << "����� �������� ����� " << M_PI * r * r * h<<endl;
	cout << "�������� ����������� ������� ����� " << 2 * (M_PI * r * r) + 2 * M_PI * r * h;

}