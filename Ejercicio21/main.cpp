/*Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K */


#include <iostream>

using namespace std;

int main()
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
    char C; // Caracter de entrada
    int check=0; // Me guarda la posicion en la que se encuentre la letra(Si esta en el alfabeto)
    cout<<"Por favor ingrese la letra a convertir (Solo ingrese letras del alfabeto ingles): "<<endl;
    cin>>C;
    for(int i=0;i<=25;i++) //Este ciclo me recorre el arreglo de minusculas y mayusculas
    {
        if(ListMayus[i]==C){
            check=i;
            cout<<"Letra convertida: "<<listMinus[check]<<endl;
            break;}
        else if (listMinus[i]==C) {
            check=i;
            cout<<"Letra convertida: "<<ListMayus[check]<<endl;
            break;
        }
        }




    return 0;
}
