/*Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2
*/
#include <iostream>

using namespace std;

int main()
{
    int N,contador=0,sumador=0;// N guarda los datos de ingreso, sumador los va sumando, contador lleva la cuenta de los numero ingresados

    while(1){
        cout<<"Por favor ingrese un entero: "<<endl;
        cin>>N;
        sumador=sumador+N;
        if(N==0)break;
        ++ contador;
    }
    cout<<"El promedio de los numeros ingresados es: "<<sumador/contador<<endl;
    return 0;
}
