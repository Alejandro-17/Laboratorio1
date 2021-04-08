/* Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múlti-
plos de dicho número entre 1 y 100.

Ej: si se ingresa 33 se debe imprimir:
Multiplos de 33 menores que 100: */

#include <iostream>

using namespace std;

int main()
{
    int N,i=1,multiplo=1; //N dato de ingreso, i multiplicador-contador, multiplo guarda el valor de cada multiplo de N
    cout<<"Por favor ingrese un entero menor que 100 "<<endl;
    cin>>N;

    if(N<=100){

     cout << "Los multiplos de "<<N<<" son: "<<endl;

     while (1){
         multiplo=N*i;
         if(multiplo>=100)break;
         cout<< multiplo<<endl;
         i++;
     }
        }

    return 0;
}
