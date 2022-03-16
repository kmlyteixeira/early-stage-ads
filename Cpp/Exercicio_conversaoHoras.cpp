/* 3.FUP que leia uma valor em horas e converta para segundos.*/

#include <iostream> 								
using namespace std; 
main()
{ 

setlocale(LC_ALL, "Portuguese");
system ("color B");

float valorHora, valorMinutos, valorSegundos;
char sValorSegundos;

cout<< "\n\n\t *** CONVERSÃO DE HORA p/ SEGUNDOS *** ";
cout<< "\n\n\t Insira a quantidade de horas a ser convertida: ";
cin>> valorHora;

valorMinutos = valorHora*60;
valorSegundos = valorMinutos*60;

cout<< "\n\n\t Valor HORA convertida para SEGUNDOS: " << valorSegundos; 

cout<< "\n\n\n\n\n\n ";

}
