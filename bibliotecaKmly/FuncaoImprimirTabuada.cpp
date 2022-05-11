#include <iostream> 
#include <iomanip>
#include "bibliotecaKmly.h"
using namespace std; 

main()
{	
	int numero,limite;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\n\t----------------------------------";
	cout<< "\n\t------------TABUADA---------------";
	cout<< "\n\t----------------------------------";
	
	cout<< "\n\n\t Insira o número que deseja saber a TABUADA: ";
	cin>> numero;
	
	imprimirTabuada(numero);
}
