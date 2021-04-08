/*Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12*/

#include <iostream>

using namespace std;

int main()
{
    int A,B,mayor;
    cout<<"Por favor ingrese el primer numero: "<<endl;
    cin>>A;
    cout<<"\nPor favor ingrese el segundo numero: "<<endl;
    cin>>B;
    if(A>=B)mayor=A; //condicional para hallar el numer mayor entre los dos ingresados
    else {mayor=B;}
    int n=mayor,mcm=1;
    while(n%A!=0 || n%B!=0) //ciclo para hallar el mcm
    {
        n++;
        mcm=n;
    }
    cout<<"El MCM de "<<A<<" y "<<B<<" es: "<<mcm<<endl;

    return 0;
}
