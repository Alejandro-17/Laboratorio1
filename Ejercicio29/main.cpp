/* Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
repetira el proceso hasta acertar el número seleccionado por usuario.
*/

#include <iostream>

using namespace std;

int main()
{
    int A,B=50;
    char mayor=62,menor=60,comparacion;
    cout<<"Por favor ingrese el numero que quieres que el programa adivine entre 0 y 100: "<<endl;
    cin>>A;
    while (1){
        cout<<"creo que es: "<<B<<endl;
        if(A==B){
            cout<<"Adivinaste"<<endl;

            break;}
        else{cout<<"No? Es > o < "<<endl;}
        cin>>comparacion;
        if(comparacion==mayor){
            B=B+1;}
        if(comparacion==menor){
            B=B-1;
        }

    }

    return 0;
}
