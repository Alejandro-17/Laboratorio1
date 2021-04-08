/*Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N*/

#include <iostream>

using namespace std;

int main()
{
    int N; // valor de entrada

   cout<<"Por favor ingrese un entero positivo"<<endl;
   cin>>N;
   cout<<"Los divisores de "<<N<<" son:"<<endl;
   for (int i=1;i<=N;i++){

       if(N%i==0) cout<<i<<endl;
   }
    return 0;
}
