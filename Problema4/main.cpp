/* Escriba un programa para leer dos números enteros con el siguiente significado:
 *  el valor del primer número representa una hora del día en un reloj de 24 horas,
 *  de modo que 1245 representa las doce y cuarenta y cinco de la tarde.
 *  El segundo entero representa un tiempo de duración de la misma manera,
 *  por lo que 345 representa tres horas y 45 minutos.
 * El programa debe sumar esta duración al primer número,
 * y el resultado será impreso en la misma notación, en este caso 1630,
 * que es el tiempo de 3 horas y 45 minutos después de 12:45.
*/
#include <iostream>

using namespace std;

int main()
{
    int hora,duracion,Timefinal,check=0;//hora=hora ingresada , duracion=Tiempo que tarda , Timefinal=hora sumada a lo que se tarda , check=variable verificador //
    cout <<"Ingrese los dos numeros con el siguiente formato(hhmm):"<<endl;
    while(check==0){
    cin >>hora>>duracion;
    if(hora%100>=60 || hora>2400 || hora<0) // Verifico que la hora ingresada es correcta
    {
    cout<<"La hora ingresada no es valida,favor ingresar una hora correcta"<<endl;
    }
    if(hora%100<60 && hora < 2400 && hora>0 && duracion>0)  // Verifico formato de hora y duracion positiva
    {
        Timefinal=hora+duracion;
        if(Timefinal<2400 && Timefinal%100<60) // verifico que el tiempo final haga parte del mismo dia y que los minutos sean menores de 60
        {
            cout<<"La hora es:"<<Timefinal<<endl;
            check=1;
        }
        else{
            while(Timefinal%100>=60) // si los minutos son mayores de 60 sumo de a 10 hasta que tiempo final avance 1 hora
            {
                Timefinal=Timefinal+10;
            }
            if(Timefinal<2400 && Timefinal>0) // verificio que el tiempo final haga parte del mismo dia, despues lo imprimo
            {
            cout<<"La hora es:"<<Timefinal<<endl;
            check=1;}
            else{cout<<"Oh,segun lo que tardaste ya termino el dia,intenta tardandote menos"<< endl<<endl<<"Ingrese los dos numeros con el siguiente formato(hhmm):"<<endl;}
        }
    }
    if(duracion<0){cout<<"Oye, aun no existen los viajes en el tiempo, tu duracion no puede ser negativa"<< endl<<endl<<"Ingrese los dos numeros con el siguiente formato(hhmm):"<<endl;}
    }

    return 0;
}
