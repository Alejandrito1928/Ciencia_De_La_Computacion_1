#include <iostream>
#include <string>
using namespace std;

int main() {
  int numero1 = 999;
  int mayor_palindromo = 0;

  for (int contador = 100; contador <= numero1; contador++) {
    for (int contador2 = 100; contador2 <= numero1; contador2++) {
      int palindromo = contador * contador2;

      // Convertir el palíndromo a una cadena de caracteres para poder comparar dígitos
      string palindromoStr = to_string(palindromo);

      int lon_palindromo = palindromoStr.length();
      bool esPalindromo = true;

      for (int i = 0; i < lon_palindromo; i++) {
        if (palindromoStr[i] != palindromoStr[lon_palindromo - i - 1]) {
          esPalindromo = false;
          break;
        }
      }

      if (esPalindromo && (palindromo > mayor_palindromo)) {
        mayor_palindromo = palindromo;
      }
    }
  }

  cout << "El palíndromo más grande de 3 dígitos es: " << mayor_palindromo << endl;

  return 0;
}
