#include <iostream>
#include <random>
using namespace std;

int main(){
  //Вариант 6
srand(time(0));
  int a = 0, b = 0, n= 0, sum=0, elnum=0;
  cout << "Введите a, A[a][b]: "; cin >> a;
  cout << "Введите b, A[a][b]: "; cin >> b;
  cout << "Введите число N: "; cin >> n;
  int** array{new int*[a]};
  for (int i = 0; i < a; i++) {
    array[i] = new int[b];
    for (int j = 0; j < b; j++) {
      array[i][j] = rand() % 101 - 50;
      cout << array[i][j] << " ";
    }
    cout << '\n';
  }
  cout << '\n';
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if (abs(i - j) % 5 == 0 && array[i][j]<n){
        sum+=1;
        elnum+=1;
        cout <<"Элемент "<< elnum << ": " << array[i][j] << " с индексом - A["<<i<<"]"<<"["<<j<<"]"<<endl;
      }
    }

  }

  cout << "Количество элементов: " << sum << '\n';
  return 0;
  for (int i{}; i < a; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}