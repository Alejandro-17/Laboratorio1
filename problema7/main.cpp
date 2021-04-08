/*Problema 7. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10 */

#include <iostream>

using namespace std;

int main()
{
    cout<<"Por favor ingrese n para hallar la suma de los i numeros menores que n en la serie: "<<endl;
    int n,c; // n dato de entrada --> c el total de numeros que tomo de la serie
    cin>>n;

    c=30;
    int f[c]; // arreglo que guarda los c primeros numeros de la serie
    f[0]=1;
    f[1]=1;
    for(int i=2;i<c;i++) // Este ciclo me guarda en cada posicion el numero correspondiente
    {
        f[i]=f[i-2]+f[i-1];
    }
    int suma=0;
    for(int i=0;i<c;i++) //Este ciclo me recorre cada numero del arreglo
    {
        if(f[i]<n){          // verifico que sea menor que n y que sea par
            if(f[i]%2==0){
            suma=suma+f[i]; //voy sumando los numero que cumplan la condicion
            }
        if (f[i]>n)break; // si es mayor que n paro el ciclo

            }
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
    return 0;
}
