/* Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impar*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Escriba un numero entero" << endl;
    cin >> numero; //Se pide numero por consola

    cout<< "El numero que usted escribio es:"<<endl << numero <<endl;


    if(numero%2==0){
        cout << "El numero es par" << endl;
    }
    else{
        cout << "El numero es impar" << endl;
        }
   return 0;
}


