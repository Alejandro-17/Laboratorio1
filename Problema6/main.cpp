/* Problema 6. Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma infinita:

                                e= 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5!

El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 e = 1/0! + 1/1! + 1/2! = 2.5
Nota: el formato de salida debe ser: e es aproximadamente: 2.5
*/

#include <iostream>

using namespace std;

double factorial(int N); // esta funcion me recibe un entero y me devuelve su factorial
int main()
{
    double e=0;
    int N;
    cout<<"Por favor ingrese el numero de sumas que quiere hacer para aproximar el valor de euler : "<<endl;
    cin>>N;
    for (int i=0;i<N;i++) {
        e=e+(1/factorial(i)); //voy sumando cada cociente de 1/n!
    }
    cout<<"e es aproximadamente: "<<e<<endl;
    return 0;
}

double factorial(int N){
    long long int fac=1; // fac acomula los productos
        for(int i=1; i<=N; i++){
           fac=fac*i;}
        return fac;
}
