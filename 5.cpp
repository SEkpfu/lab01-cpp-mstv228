#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double radius, length, area;
    cout << "������� ������� S = ";
    cin >> area;

    radius = sqrt(area / M_PI); 
    length = 2.0 * M_PI * radius;

    cout << "������ = " << radius << endl;
    cout << "����� ���������� = " << length;

    return 0;
}