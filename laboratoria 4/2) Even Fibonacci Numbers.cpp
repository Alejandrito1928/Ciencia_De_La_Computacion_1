#include <iostream>
using namespace std;

int main() {
  int num1 = 0;
  int num2 = 1;
  int num3 = 1;
  int num4 = 0;
  int total=0;

  for (int i = 1; num3 <= 4000000; i++) {
    if ((num3 % 2) == 0) {
      num4 += num3;
    }
    num3 = num1 + num2;
    num1 = num2;
    num2 = num3;
  }
  total+=num4;

  cout << "la suma es: " << total;

  return 0;
}