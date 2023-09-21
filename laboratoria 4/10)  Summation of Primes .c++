#include <iostream>
using namespace std;

int main() {
  long rango = 2000000;
  //int rango = 10;
  long numeros = 0;
  long primos = 0;

  for(long i=0; i <=rango;i++)
  {
    
    //cout<<i<<endl;
    long divisor = 2;
    
    while (divisor < numeros) 
    {
      if (numeros % divisor == 0) {
        break; 
      }
      divisor++;
    }
    if (divisor == numeros) {
      primos += numeros;
      
    }
    
    numeros++;
  }
  cout<<primos;
  
  //janito
  return 0;
}