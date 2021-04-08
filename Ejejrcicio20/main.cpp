/*Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo.*/

#include <iostream>

using namespace std;

int main()
{
    int num,aux,resto,numInv=0; //Num dato de ingreso, aux copia de num, resto y numInv van guardando el numero al reves

    cout<<"Ingrese numero"<<endl;
    cin>>num;

    aux=num;

    while(aux>0)  //voy sacando digito por digito y le invierto el orden
    {
         resto=aux%10;
         aux=aux/10;
         numInv=numInv*10+resto;
    }

    if(numInv==num){
     cout<<num<<" Es un numero palindromo. "<<endl;
    }
    else{
     cout<<num<<" No es un numero palindromo. "<<endl;
    }

    return 0;
}
