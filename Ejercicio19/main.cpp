/*Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int N,contador=0;//N dato de ingreso, contador se usa para contar el numero de divisores
    cout<<"Por favor ingrese un numero entero mayor que 1: "<<endl;
    cin>>N;

    for (unsigned int i=1;i<=N;i++) {
        if(N%i==0)
            contador++;    }
    if(contador<=2)cout<<N<<" Es un numero primo. "<<endl;
    else cout<<N<<" No es un numero primo. "<<endl;


    return 0;
}
