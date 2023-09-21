#include <iostream>
using namespace std;

int main() {
    int contador = 2;
    int numero1 = 10001;
    int st = 1;

    if (numero1 >= 2) 
    {  
        while (st <= numero1) 
        {
            int divisor = 2;
            bool primo = true;

            while (divisor < contador) 
            {
                if (contador % divisor == 0) {
                    primo = false;
                    break; 
                }
                divisor++;
            }
            if(primo){
                if (divisor == contador) {
                    if (st == numero1) {
                        cout << "El " << st << "st número primo es: " << contador << endl;
                    }
                    st++;
                }
            }
            contador++;
        }
    }
    else {
        contador++;
    }
    return 0;
}
