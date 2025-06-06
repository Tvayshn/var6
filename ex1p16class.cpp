#include <iostream>
#include <cmath>
using namespace std;
//Вариант 6
class FunctionCalculator {
private:
    double x;
    double y;

    double part1() const {
        return pow(asin(x * x / (x * x + 1)), 7);
    }

    double part2() const {
        return cbrt(sqrt(2 * fabs(x + 3)) + 4);
    }

    double part3() const {
        return log(pow(3, 1/tan(x)) + pow(fabs(x), cos(x))) / log(7);
    }

public:
    FunctionCalculator(double x_val) : x(x_val) {
        y = part1() + part2() + part3();
    }

    double getX() const { return x; }
    double getY() const { return y; }

    bool isInDomainD() const {
        return (x >= 0) && (y >= 0) && (y <= 1 - x);
    }
};

int main() {
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    FunctionCalculator calculator(x);
    
    cout << "x = " << calculator.getX() << "\n";
    cout << "y(x) = " << calculator.getY() << "\n";
    cout << "Принадлежит области D: " 
              << (calculator.isInDomainD() ? "True" : "False") << "\n";
    return 0;
}