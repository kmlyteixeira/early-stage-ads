/*FUP que imprima a TABUADA	
ALUNA: Kemily Teixeira
DATA: 14/03/2022
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	int numero;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\n\t----------------------------------";
	cout<< "\n\t------------TABUADA---------------";
	cout<< "\n\t----------------------------------";
	
	cout<< "\n\n\t Insira o número que deseja saber a TABUADA: ";
	cin>> numero;
	cout<< "\n\t\t------------";
	for(int i = 0; i <= 10; i++){
		cout<< "\n\t\t" <<numero<< " X " <<i<< " = " <<numero*i<<"\n";
	}
	cout<< "\n\t\t------------";
}

