#include <iostream>
using namespace std;

int main() {
  long long int numero = 600851475143;
  long long int factor = 2;
  long long int Factor_Grande = 0;

  while (numero > 1) {
    if (numero % factor == 0) {
      cout <<factor<<endl;
      Factor_Grande = factor;
      numero = numero / factor;
    } else {
      factor++;
    }
  }
  cout << "El factor primo más grande de 600851475143 es: " << Factor_Grande << endl;

  return 0;
}
