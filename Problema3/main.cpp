/* Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir posiblemente año bisiesto.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto. */


#include <iostream>

using namespace std;

int main()
{
    int M,D,check=0;
    cout<<"Por favor ingrese el numero del mes: "<<endl;
    cin>>M;
    cout<<endl<<"Por favor ingrese el dia de dicho mes: "<<endl;
    cin>>D;
    switch (M) //Estructura de control donde cada caso equivale a el numero de un mes, dentro del caso se crea una lista
               // con los dias que tiene cada mes y se confirma si el dia ingresado hace parte del mes
    {
    case 1: {int D1[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
                   for(int j=0;j<31;j++){
                   if (D1[j]==D){
                       check=1;
                       cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
                       break;}
                   }
                if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
        break;}

    case 2: {int D2[29]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
                for(int j=0;j<29;j++){
                if (D2[j]==D){
                check=1;
                if(D==29)cout<<D<<"/"<<M<<" es una fecha valida en bisiesto."<<endl;
                else cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
                break;}
                }
                if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
        break;}

    case 3: {int D1[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
        for(int j=0;j<31;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
        break;}

    case 4: {int D1[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
        for(int j=0;j<30;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
        break;}

    case 5: {int D1[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
        for(int j=0;j<31;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
    break;}

    case 6: {int D1[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
        for(int j=0;j<30;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
    break;}

    case 7: {int D1[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
        for(int j=0;j<31;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
    break;}

    case 8: {int D1[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
        for(int j=0;j<31;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
    break;}


    case 9 : {int D1[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
        for(int j=0;j<30;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
    break;}

    case 10 : {int D1[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
        for(int j=0;j<31;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
    break;}

    case 11 : {int D1[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
        for(int j=0;j<30;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
    break;}

    case 12: {int D1[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
        for(int j=0;j<31;j++){
        if (D1[j]==D){
            check=1;
            cout<<D<<"/"<<M<<" es una fecha valida."<<endl;
            break;}
        }
     if(check==0)cout<<D<<"/"<<M<<" es una fecha invalida."<<endl;
    break;}


    default : {cout<<D<<"/"<<M<<" es una fecha invalida."<<endl; // Si se ingresa un mes incorrecto pasa a default
                break;}                                          // Que solo imprime que la fecha es invalida
    }

    return 0;
}
