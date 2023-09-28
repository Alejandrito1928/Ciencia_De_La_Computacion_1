#include <iostream>
using namespace std;

int main() {
  //numeros primos
  int contador = 2;
  int numero1;
  cout << "Ingrese hasta qué número se hallarán los números primos: ";
  cin >> numero1;

  if (numero1 >= 2) 
  {  
    while (contador <= numero1) 
    {
      int divisor = 2;
      
      while (divisor < contador) 
      {
        if (contador % divisor == 0) {
          break; 
        }
        divisor++;
      }
      if (divisor == contador) {
        cout << contador << " "; // Si no es divisible por ningún divisor, es primo
      }
      contador++;
    }
    cout << endl;
  } else {
    cout << "El número debe ser mayor a 2." << endl;}
  return 0;
}
