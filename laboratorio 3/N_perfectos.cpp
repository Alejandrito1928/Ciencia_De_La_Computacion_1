#include <iostream>
using namespace std;
//numeros perfectos
int main() {
  int num1 = 500;
  int contador = 2;

  while (contador <= num1) {
    int Divisores = 1; 
    int divisor = 2;
    
    while (divisor <= contador / 2) {
      if (contador % divisor == 0) {
        Divisores += divisor; 
      }
      divisor++;
    }
    
    if (Divisores == contador) {
      cout << contador << " es un número perfecto." << endl;
    }
    
    contador++;
  }
  
  return 0;
}
