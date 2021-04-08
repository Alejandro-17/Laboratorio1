/*Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
++++
+  +
+  +
++++ */

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout<<"Por favor ingrese la longitud de un lado del cuadro: "<<endl;
    cin>>N;        //dato de ingreso N= Longitud de un lado del cuadro

    char lista[N]; // Declaro una lista de tamaño N

    char simbolo=43,AuxSim; //Simbolo =43 es igual a "+", Auxsim me guarda lo mismo

    int contador=0; //cuenta el numero de espacios que hay entre lado y lado

    for(int i=0;i<N;i++) //Ciclo que me sirve para imprimir el lado superior
    {   lista[i]=simbolo;
        cout<<lista[i];}

    for (int i=0;i<N-2;i++) // Con este ciclo imprimo lo que me resta de los lados laterales sin contar el lado inferior
    {
        cout<<endl;
        contador=0;
        AuxSim=lista[0];
          for (int j=0;j<N-(N-2);j++) {
              cout<<AuxSim;
                while(contador<N-2) //Imprimo los espacios entre lados laterales
                {
                 cout<<" ";
                    contador++;
                  }
          }
        }
    cout<<endl;
    for(int i=0;i<N;i++) // Ciclo con el que imprimo el lado inferior=Superior
    {
        lista[i]=simbolo;
        cout<<lista[i];}
    cout<<endl;



    return 0;
}
