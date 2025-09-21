#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double radius, length, area;
    cout << "¬ведите площадь S = ";
    cin >> area;

    radius = sqrt(area / M_PI); 
    length = 2.0 * M_PI * radius;

    cout << "радиус = " << radius << endl;
    cout << "длина окружности = " << length;

    return 0;
}