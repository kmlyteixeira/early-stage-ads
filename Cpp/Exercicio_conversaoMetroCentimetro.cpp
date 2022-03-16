/*
1.FUP que leia um valor em metros e converta para centímetros.
2.FUP que leia um valor em quilometros e converta para metros.
*/

#include <iostream> 								
using namespace std; 
main()
{ 

setlocale(LC_ALL, "Portuguese");
system ("color B");

float valorUsuario, valorCentimetro, valorMetro;


cout<< "\n\n\t *** CONVERSÃO DE UNIDADES DE MEDIDA *** ";
cout<< "\n\n\t *** METRO >> CENTIMETROS *** ";
cout<< "\n\n\t *** KM >> METROS *** ";
cout<< "\n\n\t Informe o valor a ser convertido:  ";
cin>> valorUsuario;

	valorCentimetro = valorUsuario*100;
	cout<< "\n\n\t Seu valor convertido de METRO para CENTIMETRO: " << valorCentimetro;
	
	valorMetro = valorUsuario/100;
	cout<< "\n\n\t Seu valor convertido de KM para METRO: " << valorMetro;

}
