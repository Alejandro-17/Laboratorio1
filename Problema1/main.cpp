/* Problema 1. Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna
de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
5 no es una letra.
a es una vocal.
C es una consonante.*/

#include <iostream>

using namespace std;

char MayusAMinus(char C); //Llamo la funcion
int main()
{
    int r1=0,r2=0; // Me recorren los dos arreglos que inicializo
    char letra=97; //Empiezo desde la representacion de a
    char consonates [21]; //En este arreglo guardo las consonantes
    char vocales[5]; // En este arreglo guardo las vocales
    while(letra<123) // Por Acsii a=97 y z=122 entonces recorro hasta que letra=z
    {
    if (letra !=97 && letra!=101 && letra!=105 && letra!=111 && letra !=117) // Mientras que letra no sea una vocal
    {
       consonates[r1]=letra;  // Añado cada consonante en orden
       r1++;
       letra++;
    }
    else {
        vocales[r2]=letra; //añado cada vocal en orden
        r2++;
        letra++;
    }    }

    int check=0;
    char C;
    cout<<"Por favor ingrese una letra: "<<endl;
    cin>>C;       // Pido al usuario la letra
    MayusAMinus(C); // convierto la letra en minuscula en caso de que la ingrese en mayuscula
    C=MayusAMinus(C);
    for (int i=0;i<5;i++) {
        if (C==vocales[i]){cout<<"La letra ingresada es una vocal"<<endl; // Si la letra se encuentra en el arreglo de vocales
        check=1;}
    }
    for (int i=0;i<21;i++) {
        if (C==consonates[i]){cout<<"La letra ingresada es una consonante"<<endl; //Si la letra se encuentra en el arreglo de consonantes
        check=1;}
    }
    if(check==0)cout<<"El valor ingresado no es una letra."<<endl; //Si no esta en vocales o consonantes no es una letra
    return 0;
}




char MayusAMinus (char C) //Funcion que convierte la letra de Mayuscula a Minuscula
{

int contador=0;
char mayusculas,minusculas; //cada variable me va guardando temporal mente un caracter segun su especificacion
char ListMayus[26],listMinus[26];
for (int i=65;i<=90;i++) //este ciclo me crea una arreglo de mayusculas
{   mayusculas=i;
    ListMayus[contador]=mayusculas;
    contador++;
    }
contador=0;
for (int i=97;i<=122;i++) // este ciclo me crea un arreglo de minusculas
{
    minusculas=i;
    listMinus[contador]=minusculas;
    contador++;
}
int check=0; // Me guarda la posicion en la que se encuentre la letra(Si esta en el alfabeto)
for(int i=0;i<=25;i++) //Este ciclo me recorre el arreglo de minusculas y mayusculas
{
    if(ListMayus[i]==C){
        check=i;
        C=listMinus[check];
        break;}
}
    return C;
}
