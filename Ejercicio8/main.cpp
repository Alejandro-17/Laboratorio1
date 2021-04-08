/* Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120 */

#include <iostream>

using namespace std;

int main()
{
    int N; //N dato a ingresar
    long long int fac=1; // fac acomula los productos
    cout<<"Por favor ingrese el entero al que quiere halla su factorial: "<<endl;
    cin>>N;

    for(int i=1; i<=N; i++){
       fac=fac*i;
     }
    cout<<"El factorial de "<< N<<" es: "<<fac<<endl;
    return 0;
}
