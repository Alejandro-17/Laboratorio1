/*Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1=0,num2=0,limite; //num 1 y num 2 Guarda los numeros que se van imprimiendo en cada hilera, limite es el maximo numero
    int j=1,k=1;// se inicializan para que no se reinicien en el ciclo
    cout<<" Por favor ingrese un entero: "<<endl;
    cin>>limite;
    num2=limite+1;
    for (int i=1;i<=limite;i++) {


        for (;j<=i;j++){
        ++num1;
        cout<<num1;
    }
        cout<<"    ";

        for (;k<=i;k++) {
            --num2;
            cout<<num2;
        }
        cout<<endl;
     }




    return 0;
}
