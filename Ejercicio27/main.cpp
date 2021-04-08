/*Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
Ej: si se ingresan 3, + y 5 se debe imprimir:
3+5=8*/

#include <iostream>

using namespace std;

int main()
{
    int i;//Tipo de funcion a realizar
    int A,B;
    cout<<"Por favor indique el numero de la funcion que desea realizar"<<endl;
    cout<<"1. Suma"<<endl<<"2. Resta"<<endl<<"3. Multiplicacion"<<endl<<"4. Division"<<endl;
    cout<<endl;
    cin>>i;
    switch (i)
    {
    case 1: int suma; // Caso en para la suma
            cout<<endl<<"Por favor ingrese el primer numero a sumar: "<<endl;
            cin>>A;
            cout<<endl<<"Por favor ingrese el segundo numero a sumar: "<<endl;
            cin>>B;
            suma=A+B;
            cout<<endl<<A<<"+"<<B<<"="<<suma<<endl;
        break;

    case 2: int resta; // Caso para la resta
            cout<<endl<<"Por favor ingrese el primer numero a restar: "<<endl;
            cin>>A;
            cout<<endl<<"Por favor ingrese el segundo numero a restar: "<<endl;
            cin>>B;
            resta=A-B;
            cout<<endl<<A<<"-"<<B<<"="<<resta<<endl;
        break;

    case 3: int producto; // caso para el producto
            cout<<endl<<"Por favor ingrese el primer numero a multiplicar: "<<endl;
            cin>>A;
            cout<<endl<<"Por favor ingrese el segundo numero a multiplicar: "<<endl;
            cin>>B;
            producto=A*B;
            cout<<endl<<A<<"*"<<B<<"="<<producto<<endl;
        break;

    case 4: float a,b,div; // caso para la division
            cout<<endl<<"Por favor ingrese el numerador: "<<endl;
            cin>>a;
            cout<<endl<<"Por favor ingrese el dividendo: "<<endl;
            cin>>b;
            div=a/b;
            cout<<endl<<a<<"/"<<b<<"="<<div<<endl;
        break;

    default: cout<<"Lo siento, el numero que ingresaste no identifica una operacion disponible"<<endl;
    }
    return 0;
}
