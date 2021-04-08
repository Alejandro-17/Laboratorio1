/* Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.
Ej: si se ingresan 8 y 3 se debe imprimir:
8/3=3
Si se ingresan 7 y 3 se debe imprimir:
7/3=2 */

#include <iostream>

using namespace std;

int main()
{
    float A,B,C,res,com;
    int D;

   cout<<"Por favor ingrese el dividendo: "<<endl;
   cin>>A;
   cout<<" \n Por favor ingrese el divisor; "<<endl;
   cin>>B;
  C=A/B;
  D=int(C);
  res=C-D;
  com=0.5;
  if (res>com){

  cout<< "El resultado de la division redondeada es: "<<D+1<< endl;
  }

  else {
      cout<<"El resultado de la divison redondeada es: "<<D<<endl;
  }



    return 0;
}
