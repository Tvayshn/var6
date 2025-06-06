#include <iostream>
#include <cmath>
//Вариант 6
using namespace std;

double calculateY(double x) {
    if (x <= 1) {
        double arg = abs(pow(7, x) - pow(abs(x - 3), 7));
        return log(arg) / log(7);
    }
    if (x >1 && x < 3) {
        return log(pow(x, 8) / (1 + x*x));
    }
    return asin(x / (1 + x*x));
}

int main() {
    cout << "Введите x: ";
    double x;
    cin >> x;
    cout << "y(" << x << ") = " << calculateY(x) << endl;
    return 0;
}