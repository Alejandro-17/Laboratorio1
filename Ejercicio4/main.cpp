/* Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3 */


#include <iostream>

using namespace std;

int main()
{
    int A,B; //Valores a solicitar
    cout << " Por favor ingrese un numero: "<<endl;
    cin >> A;
    cout << " \n Por favor ingrese el otro numero: " <<endl;
    cin >> B;

    if(A>B){
        cout<< "\n Es: " << B << " menor que "<< A<<endl;
    }
    else if (A==B) {
        cout << "\n Los numero ingresados son iguales " << endl;
         }
    else {
        cout << "\n Es: " << A << " menor que " << B<<endl;
    }
    return 0;
}
