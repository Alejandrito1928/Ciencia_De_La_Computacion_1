#include <iostream>
using namespace std;

int main() {
  int rango = 1000;
  int valor = 0;
  for (int i = 0;i<=rango;i++){
    for (int j = 0;j<=rango;j++){
      for (int k = 0;k<=rango;k++){
        int i2 = (i*i);
        int j2 = (j*j);
        int k2 = (k*k);
        if((i2<j2)&& (j2<k2)&& (i2<k2)){
          if ((i2+j2+k2)==rango){
            cout<<i2<<" + "<<j2<<" + "<<k2<<": multiplicados son 1000:"<<endl;
          }
        }
          
      }
    }  
  }
}