/*Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15*/


#include <iostream>

using namespace std;

int main()
{
    int N,sum=0; // N dato a ingresar, sum acomula la suma
    cout<<"Por favor ingrese el entero al que quiere hacer sumatoria: "<<endl;
    cin>>N;

    for(int i=1; i<=N; i++){
       sum=sum+i;
     }
    cout<<"La sumatoria desde 0 hasta "<< N<<" es: "<<sum<<endl;
    return 0;
}
