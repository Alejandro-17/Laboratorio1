/* Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N^1
hasta N^5
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    long int potencia=1;
    cout<<"Por favor ingrese un numero entero "<<endl;
    cin>>N;
    for (int i=1;i<=5;i++){
        potencia=potencia*N;
        cout<<N<<"^"<<i<<"="<<potencia<<endl;

    }
    return 0;
}
