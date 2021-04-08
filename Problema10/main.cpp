/*Problema 10. Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.*/

#include <iostream>

using namespace std;


int main()
{
   int n,posicion=0,contador=0;
   cout<<"Por favor ingrese el n-esimo numero primo que desea conocer(maximo hasta el 168):" <<endl;
   cin>>n;
   int primos [168]; // arreglo que contiene los 168 primeros primos
    for ( int i=2;i<998;i++) {
        contador=0;                 // con estos ciclos creo la lista de primos
        for (int div=1;div<=i;div++){
            if(i%div==0){
               contador++;    }}
            if(contador<=2){
                primos[posicion]=i;
                posicion ++;
            } }
    cout<<"El primo numero "<<n<<" es : "<<primos[n-1]<<endl; //Imprimo la n-1 ya que la posicion en las listas empieza en 0

    return 0;
}
