#include <iostream>

using namespace std;

int main() {
  int mil=1000;
  int contador=0;
  int almacenar_numeros =0 ;

  while (contador <= mil)
  {
    if (((contador %3)==0) || ((contador % 5)==0)){
      almacenar_numeros += contador;

           
    }
    contador++;

  }
  cout<<"los multiplos de 1000 son: "<<almacenar_numeros<<endl;
  
}