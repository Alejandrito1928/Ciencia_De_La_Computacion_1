#include <iostream>
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
using namespace std;
  
int main() {
  //cuadrado de los 100 primeros numeros naturales 

  int contador1 = 0;
  int contador2 = 0;
  int suma_resul1=0;
  int suma_resul2=0;
  int suma_numeros =0;
  int eleva_numeros =0;
  
  for (int i=0;i<=100;i++){
    suma_resul1 = contador1*contador1; 
    suma_numeros +=suma_resul1;

    contador1++;
  
  }
  for (int j=0;j<=100;j++){
    suma_resul2 += j; 
    contador2++;
  }
  eleva_numeros = suma_resul2*suma_resul2;
  cout<<"el cuadrado de los 100 primeros numeros mas su suma :"<<suma_numeros<<endl;
  cout<<"la suma de los 100 primeros numero elevado al cuadrado :"<<eleva_numeros<<endl;
  
  if (suma_numeros < eleva_numeros){
    int total= eleva_numeros - suma_numeros;
  }else{
    int total= suma_numeros - eleva_numeros;
  }
  
  int total= suma_numeros - eleva_numeros;
  cout<<"la suma es : "<<total;
  return 0;
}