/*FUP que leia 10 número e verifique quantos destes valores são negativos. 
Imprima uma mensagem na tela.
Aluna: Kemily
Data: 14/03/2022
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	int numero,negativos;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t--------------------------------------------------------";
	cout<< "\n\t------------VERIFICANDO NUMEROS NEGATIVOS---------------";
	cout<< "\n\t--------------------------------------------------------";
	
	cout<< "\n\n\t Insira [10] números: \n";
	for (int i=0;i<10;i++){
		cin>> numero;
		if(numero<0){
			negativos++;
			}
		}	
			
	cout<< "\t"<< negativos<< " são negativos!";
}
