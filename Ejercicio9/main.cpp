/*Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
Ej: si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416 */

#include <iostream>

using namespace std;

int main()
{
    double N,NN,Perimetro,Area; //Radio del circulo a ser pedido
    double Pi=3.1416;
    cout<< "Por favor ingrese el radio del circulo: "<<endl;
    cin>>N;
    Perimetro=2.0*Pi*N;
    NN=N*N;
    Area=Pi*NN;
    cout<<"Perimetro: "<<Perimetro<<"\nArea= "<<Area<<endl;


    return 0;
}
