#include <iostream>
using namespace std;
int main() {
	int nl, ns, i;
	cin >> i;

	ns = i / 100 % 10; // ������ �����
	nl = i % 10; // ��������� �����
	
	i = i - ns * 100 + nl * 100 - nl + ns;
	cout << i;


}