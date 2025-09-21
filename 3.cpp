#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double tc, tf, tk;
	cout << "введите температуру в цельсиях" << endl;
	cin >> tc;
	cout << "Температура в кельвинах равна " << tc +273 <<endl;
	cout << "Температура в фаренгейтах равна " <<5.0/9.0*tc + 32.0<<endl;

}