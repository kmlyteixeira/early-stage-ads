/*FUP altere o programa anterior para imprimir:
•A quantidade de números negativos
•A quantidade de pares
•A quantidade de números múltiplos de 7
Aluna: Kemily Teixeira
Data: 14/03/2022
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	int numero,negativos,pares,multiplosSete;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t--------------------------------------------------------";
	cout<< "\n\t------------PROGRAMA P/ VERIFICAR NUMEROS---------------";
	cout<< "\n\t--------------------------------------------------------";
	
	cout<< "\n\n\t Insira [10] números: \n";
	for (int i=0;i<10;i++){
		cin>> numero;
		if(numero<0){
			negativos++;
			}
		if(numero%2==0){
			pares++;
			}
		if(numero/7==7){
			multiplosSete++;
			}
		}
			
	cout<< "\t"<< negativos<< " são negativos!";
	cout<< "\t"<< pares << " são pares!";
	cout<< "\t"<< multiplosSete<< " são multiplos de SETE!";
}
