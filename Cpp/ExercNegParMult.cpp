/*FUP altere o programa anterior para imprimir:
�A quantidade de n�meros negativos
�A quantidade de pares
�A quantidade de n�meros m�ltiplos de 7
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
	cout<< "\n\t------------VERIFICANDO NUMEROS NEGATIVOS---------------";
	cout<< "\n\t--------------------------------------------------------";
	
	cout<< "\n\n\t Insira [10] n�meros: \n";
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
			
	cout<< "\t"<< negativos<< " s�o negativos!";
	cout<< "\t"<< pares << " s�o pares!";
	cout<< "\t"<< multiplosSete<< " s�o multiplos de SETE!";
}
