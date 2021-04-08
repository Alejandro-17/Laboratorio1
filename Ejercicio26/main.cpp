/*Ejercicio 26. Escriba un programa que pida tres números e imprima el tipo de triangulo
 (isósceles, equilátero, escaleno) que se formaría, si sus lados tienen la longitud definida por los números
ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo*/

#include <iostream>

using namespace std;

int main()
{
    int A,B,C; //Datos de entrada correspondientes a los 3 lados de un triangulo
    cout<<"Por favor ingrese la longitud del primer lado: "<<endl;
    cin>>A;
    cout<<"Por favor ingrese la longitud del segundo lado: "<<endl;
    cin>>B;
    cout<<"Por favor ingrese la longitud del primer lado: "<<endl;
    cin>>C;
    if(A+B>C && A+C>B && B+C>A) // condicional que comprueba si se puede formar un triangulo con A,B y C
    {
        if((A==B && A!=C) || (A==C && A!=B) || (B==C && B!=C) ) cout<<"Se forma un triangulo isoceles"<<endl;
        if(A==B && A==C)cout<<"Se forma un triangulo equilatero"<<endl;
        if(A!=B && A!=C && B!=C)cout<<"Se forma un triagulo escaleno"<<endl;
            }
    else cout<<"Las longitudes ingresadas no forman un triangulo"<<endl;

    return 0;
}
