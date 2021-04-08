/*Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37*/

#include <iostream>

using namespace std;

int main()
{
    int N,H,M,S; //N dato de entrada, H hora,M minutos, S segundos
    cout<<"Por favor ingrese una cantidad entera de segundos: "<<endl;
    cin>>N;
    H=N/3600;
    int CHS,CHM;// Cantidad de horas representada en segundos - Cantidad de minutos en segundo
    CHS=H*3600;
    M=(N-CHS)/60;
    CHM=M*60;
    S=N-CHS-CHM;
    cout<<H<<":"<<M<<":"<<S<<endl;


    return 0;
}
