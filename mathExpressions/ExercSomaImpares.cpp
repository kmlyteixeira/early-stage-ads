/*FUP que calcule a soma de todos os n�meros �mpares que s�o 
m�ltiplos de cincoe que se encontram no conjunto dos n�meros de 1 at� 1000.
Aluna: Kemily Teixeira
Data: 14/03/2022
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{		
	int soma;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t-------------------------------------------------------------";
	cout<< "\n\t--------------NUMEROS IMPARES MULTIPLOS DE CINCO-------------";
	cout<< "\n\t-------------------------------------------------------------";
	

	for (int i=1;i<1000;i++){
		if((i%2!=0)&&(i%5==0)){
			soma = soma + i;	
			}
		}
		
	cout<< " "<< soma << " ";
	
}
