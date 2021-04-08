/*Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6 */
#include <iostream>

using namespace std;

int main()
{
    int N,sumador=0;// N guarda los datos de ingreso, sumador los va sumando

    while(1){
        cout<<"Por favor ingrese un entero: "<<endl;
        cin>>N;
        sumador=sumador+N;
        if(N==0)break;
    }
    cout<<"El resultado de la sumatoria de numeros ingresados es: "<<sumador<<endl;
    return 0;
}
