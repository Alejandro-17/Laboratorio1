/* Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
tiplicar hasta 10xN.

Ej: si se ingresa 7 se debe imprimir:
1x7=7 */

#include <iostream>

using namespace std;

int main()
{
    int N,multiplicacion;//N recibe el dato, multiplicacion me recibe cada operación
    cout<<"Por favor ingrese un numero entero : "<<endl;
    cin>>N;

    for (int i=1;i<=10;i++) {
        multiplicacion=i*N;
        cout<<i<<"x"<<N<<"="<<multiplicacion<<endl;
    }

    return 0;
}
