#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int n,ch,m,s;//��� ������ �������
	cin >> n;
	ch = (24 * 3600 - n) / 3600;
	m = (24 * 3600 - ch * 3600 - n) / 60;
	s = (24 * 3600 - n) % 60;
	cout <<  "�������� " << ch << " ���(a)(��) " << m << " ����� " << s << " ������";
}