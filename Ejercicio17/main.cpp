/*Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el número cero
 e imprima en pantalla el mayor de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir: El numero mayor fue: 3
*/
#include <iostream>

using namespace std;

int main()
{
    int N,sumador=0;// N guarda los datos de ingreso, sumador va guardando el numero mayor

    while(1){
        cout<<"Por favor ingrese un entero: "<<endl;
        cin>>N;
        if(N==0)break;
        if (N>sumador)
        {sumador=N;}

    }
    cout<<" el numero mayor fue: "<<sumador<<endl;
    return 0;
}
