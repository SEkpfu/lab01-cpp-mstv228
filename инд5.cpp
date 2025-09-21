#include <iostream>
#include <iomanip> // для удобного нам выводы 

using namespace std;
int main() {
	double x,y,v1,v2;
	cin >> x >> y;
	v1 = log(abs(cos(x))) / log(1 + x * x);
	v2 = (3 + exp(y - 1)) / (1 + x * x * abs(y - tan(x)));
	// шоупос показывает знак
	// саентифик вывод с экспонентой
	// фиксед вкомбинации с сетприсишн показывает знаки после точки в скобках колво знаков
	cout << showpos << fixed <<setprecision(5)<<v1<<endl;
	cout << showpos <<scientific << v2;




}