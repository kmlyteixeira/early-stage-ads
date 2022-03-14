/*FUP que Imprima todos os numeros de 1 ao numero que o usuário desejar
Aluna: Kemily Teixeira
Dta: 14/03/2022
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	int numero;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t---------------------------------------------";
	cout<< "\n\t------------IMPRIMINDO NUMEROS---------------";
	cout<< "\n\t---------------------------------------------";
	
	cout<< "\n\n\t Insira o número para estabelecer um limite: ";
	cin>> numero;
	
	cout<< "\n\t\t------------\n";
	
	for(int i = 0; i <= numero; i++){
		cout<< " " <<i<< " ";
	}
	cout<< "\n\t\t------------";
}
