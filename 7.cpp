#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b;
	cout << "������� 2 ����� �����" << endl;
	cin >> a >> b;
	cout << "����� �� ��������� ����� ����� " << a % 10 + b % 10;
}