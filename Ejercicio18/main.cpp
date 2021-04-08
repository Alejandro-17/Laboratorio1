/*Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto */

#include <iostream>

using namespace std;

int main()
{
    int N,potencia=0,bit=0; //N numero de entrada, div lo uso para guardar division entre N y su posible raiz cuadrada, bit lo uso para verificar condicion

    cout<<"Por favor ingrese un numero entero hasta el 10000: "<<endl;
    cin>>N;
    for(int i=1; i<=100; i++){
        potencia=i*i;
        if(potencia==N){
            bit=1;
            break;                     }
    }
    if(bit==1)cout<<N<<" es un cuadrado perfecto. "<<endl;
    else {
        cout<<N<<" no es un cuadrado perfecto. "<<endl;
    }
    return 0;
}
