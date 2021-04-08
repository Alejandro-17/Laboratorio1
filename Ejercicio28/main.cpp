/*Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
suma infita:
π = 4(1 −1/3+1/5−1/7+1/9...)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 π = 4(1 −1/3 +1/5) = 3,46667, por lo que se debe imprimir:
pi es aproximadamente: 3.46667 */

#include <iostream>

using namespace std;

int main()
{
   int N; //Dato de entrada, entre mayor sea mas exacto es pi
   float n=3,n2=-1; // variables usadas para la suma
   float dec=0,dec0;
   double pi;
   cout<<"Por favor ingrese el numero de sumas que quiere realizar para obtener un valor aproximado de pi:"<<endl;
   cin>>N;
   for(int i=0;i<(N-1);i++) //Hallo el numero de divisiones que debo sumar de la serie
   {
       dec0=(1/n)*n2;
       dec=dec+dec0;
       n=n+2;
       n2=n2*-1;
   }
   pi=4*(1+dec);
   cout<<pi<<endl;
       return 0;
}
