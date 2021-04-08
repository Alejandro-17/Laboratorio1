/*Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:
    *
    ***
    *****
    *******
    ******
    ***
    *
    6
    El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
    ejemplo mostrado, el tamaño de la gura es 7*/

#include <iostream>

using namespace std;

int main()
{
    int N,fila=1,i=0,s=0; //N dato de ingreso, me ayuda a operar cada fila, i para imprimir espacios, s para imprimir el simbolo
    cout<<"Por favor ingrese un numero impar: "<<endl;
    cin>>N;
    char simbolo=32,simbolo2=42; // Simbolo 32 representa espacio en blanco, simbolo 42 el simbolo que me imprime

    while(fila<=(N/2)) // Este ciclo me recorre todas las filas de la primera parte menos la que imprime N veces el simbolo
    {
        int j=0;
        j=j+i;
        i++;
        while(N/2>j) // este ciclo me imprime los espacios de cada fila
        {
            cout<<simbolo;
            j++;
        }
        int k=j-1;
        k=k+s;
        while(k<j) // Este ciclo me imprime los simbolos correspondientes a cada fila
        {
            cout<<simbolo2;
            k++;
        }
        s=s-2; // Me ayuda en cada fila aumentarle dos simbolos mas para formar el triangulo
        cout<<endl;
         fila++;}
    for(int f=0;f<N;f++)cout<<simbolo2;
    cout<<endl;

    //Ahora imprimamos la segunda parte del triangulo
    fila=1;
    s=0;
    i=0;
    while(fila<=(N/2)) //Este ciclo me recorre todas las filas faltantes de la mitad para abajo
    {
    int k=(N/2)-1;
    k=k+s;
    while (k<N/2) //Este ciclo me imprime los espacios por fila
    {
        cout<<simbolo;
        k++;}
        s=s-1;
    int j=0;
    j=j+i;
    i=i+2;
    while((N/2)+((N/2)-1)>j) //Este ciclo me imprime los simbolos en fomra decendente por fila
    {
        cout<<simbolo2;
        j++;}

    cout<<endl;
        fila++;
  }

    return 0;
}
