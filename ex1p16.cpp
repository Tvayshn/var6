#include <iostream>
#include <cmath>
using namespace std;
//Вариант 6
int main() {
    double x;
    cout << "Введите x: ";
    cin >> x;

    double part1 = pow(asin(x*x / (x*x + 1)), 7);
    double part2 = cbrt(sqrt(2 * fabs(x + 3)) + 4);
    double part3 = log(pow(3, 1/tan(x)) + pow(fabs(x), cos(x))) / log(7);
    double y = part1 + part2 + part3;

    // Проверяем принадлежность
    bool insideD = (x >= 0) && (y >= 0) && (y <= 1 - x);

    cout << "y(x) = " << y << "\n";
    cout << "Принадлежит области D: " << boolalpha << insideD << endl;

    return 0;
}