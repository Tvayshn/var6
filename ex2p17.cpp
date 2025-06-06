#include <iostream>
using namespace std;

int main() {
//Вариант 6
    int number;

    cout << "Введите трехзначное число: ";
    cin >> number;
    
    if (number < 100 || number > 999) {
        cout << "Число должно быть трехзначным!" << endl;
        return 1;
    }
    
    int num1 = number / 100;        
    int num2 = (number / 10) % 10;  
    int num3 = number % 10;     
    
    int sum = num1 + num2 + num3;
    
    cout << "Сумма цифр числа " << number << " равна: " << sum << endl;
    
    return 0;
}