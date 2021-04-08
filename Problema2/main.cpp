/* Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes y
monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000, $20.000, $10.000,
$5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50. Hacer un programa que entregue el número
de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y
monedas disponibles no se puede lograr la cantidad deseada,
el sistema deberá decir lo que resta para lograrla.Ej: si se ingresa 47810,
el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10 */


#include <iostream>

using namespace std;

int main()
{
    int N,auxN,Cb50k=0,Cb20k=0,Cb10k=0,Cb5k=0,Cb2k=0,Cb1k=0,Cm500=0,Cm200=0,Cm100=0,Cm50=0;
    cin>>N;
    auxN=N;
    if((auxN/50000)>0){
        Cb50k=auxN/50000;
        auxN=auxN-(50000*Cb50k);} //Devuelve la mayor cantidad de billetes de 50k posibles, y me guarda lo que me falta

    if((auxN/20000)>0){
        Cb20k=auxN/20000;         //Devuelve la mayor cantidad de billetes de 20K si no se pueden devolver mas de 50k
        auxN=auxN-(20000*Cb20k);} // y me guarda lo que falta por devolver

    if ((auxN/10000)>0){
        Cb10k=auxN/10000;          //Sigue la logica de los dos if anteriores, la idea del codigo es
        auxN=auxN-(10000*Cb10k);   // analizar cuantos billetes de mayor denominacion puedo devolver
    }                              // antes de pasar a el otro billete o moneda de menor valor
    if((auxN/5000)>0){
        Cb5k=auxN/5000;            // y se va restando al valor principal lo que se vaya devolviendo
        auxN=auxN-(5000*Cb5k);     // Asi se asegura devolver la minima combinacion de billetes posibles
    }
    if((auxN/2000)>0){
        Cb2k=auxN/2000;
        auxN=auxN-(2000*Cb2k);
    }
    if((auxN/1000)>0){
        Cb1k=auxN/1000;
        auxN=auxN-(1000*Cb1k);
    }
    if((auxN/500)>0){
        Cm500=auxN/500;
        auxN=auxN-(500*Cm500);
    }
    if((auxN/200)>0){
        Cm200=auxN/200;
        auxN=auxN-(200*Cm200);
    }
    if((auxN/100)>0){
        Cm100=auxN/100;
        auxN=auxN-(100*Cm100);
    }
    if((auxN/50)>0){
        Cm50=auxN/50;
        auxN=auxN-(50*Cm50);
    }
    cout<<endl<<"50000 : "<<Cb50k<<endl<<"20000 : "<<Cb20k<<endl<<"10000 : "<<Cb10k<<endl;
    cout<<"5000 : "<<Cb5k<<endl<<"2000 : "<<Cb2k<<endl<<"1000 : "<<Cb1k<<endl;
    cout<<"500 : "<<Cm500<<endl<<"200 : "<<Cm200<<endl<<"100 : "<<Cm100<<endl<<"50 : "<<Cm50<<endl;
    cout<<"faltante : "<<auxN<<endl;


    return 0;
}
