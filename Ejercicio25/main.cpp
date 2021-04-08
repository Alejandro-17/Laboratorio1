/* Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N. */
#include <iostream>

using namespace std;

int main()
{
    signed int N,auxN; //N=dato de entrada --->auxN me guarda N para poder modificarlo
    unsigned int contador=0; //me cuenta el numero de digitos
    cout<<"Por favor ingrese un entero para determinar su cantidad de digitos: "<<endl;
    cin>>N;
    auxN=N;
    if(auxN>0) //Para numero mayores que cero
    {
    while(N>0){
        N=N/10;
        contador++;
    }
     cout<<"La cantidad de digitos de N es: "<<contador<<endl;}

    if(auxN<0) //Para numeros menores que cero
    {
        while(N<0){
            N=N/10;
            contador++;}
     cout<<"La cantidad de digitos de N es: "<<contador<<endl;
    }
    if (auxN==0)cout<<"El numero de digitos de N es: 1"<<endl; //En caso de que se ingrese cero
    return 0;
}
