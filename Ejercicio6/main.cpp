/*Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5∧3=125 */

#include <iostream>

using namespace std;

int main()
{
    float Num1,Num2,mul,sum=1;  //numeros que se pediran, sum es el resultado de la potenciación

    cout<<"Por favor ingrese la base: "<<endl;
    cin>>Num1;
    cout<<"Por favor ingrese la potencia: "<<endl;
    cin>>Num2;

    if(Num2==0 && Num1!=0)
    {cout<< Num1 << " Elevado a la potencia " << Num2 << " Es igual a: " << "1"<<endl;
    }

    if(Num2==0 && Num1==0)
    {cout<< Num1 << " Elevado a la potencia " << Num2 <<" No esta definido"<<endl;
    }

    if (Num2>0)
    { for(float i=1; i<=(Num2); i++){
            mul=Num1;  // El la misma base, se usa de multiplicador
            sum=sum*mul;
        }
    cout<< Num1 << " Elevado a la potencia " << Num2 << " Es igual a: " <<sum<<endl;
    }

    if (Num2<0)
    { for(float i=-1; i>=(Num2); i--){
            mul=Num1;  // El la misma base, se usa de multiplicador
            sum=sum*mul;
        }
    cout<< Num1 << " Elevado a la potencia " << Num2 << " Es igual a: " <<1/sum<<endl;
    }
    return 0;
}
