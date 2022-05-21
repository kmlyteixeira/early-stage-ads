/*FUP que imprima a TABUADA	
ALUNA: Kemily Teixeira
DATA: 14/03/2022
Dta Alteração: 23/03/2022 - USANDO DO-WHILE
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	int numero,i,limite;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\n\t----------------------------------";
	cout<< "\n\t------------TABUADA---------------";
	cout<< "\n\t----------------------------------";
	
	cout<< "\n\n\t Insira o número que deseja saber a TABUADA: ";
	cin>> numero;
	cout<< "\n\t Estabeleça um limite para imprimir sua TABUADA: ";
	cin>> limite;
	
	i=0;
	
	do{
		cout<< "\n\t\t" <<numero<< " X " <<i<< " = " <<numero*i<<"\n";
		i++;
	} while (i<=limite);
}
