/*FUP que peça dois numeros e imprima o maior deles
AULA: 07/03/2022
ALUNA: Kemily Teixeira
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	setlocale(LC_ALL, "Portuguese");
	system ("color B");	
		
	int number1, number2;
	
	cout<< "\n\n\n\t =======================================";	
	cout<< "\n\t =======IMPRIMINDO O MAIOR NÚMERO=======";
	cout<< "\n\t ======================================="; 
	
	cout<< "\n\n\n\t Insira o 1ª número:";
	cin>> number1; 							
	cout<< "\n\n\n\t Insira o 2ª número:";
	cin>> number2; 							
	
	if(number1>number2){
		cout<< "\n\n\n\t " <<number1<< " é o maior valor!";
	} else {
		cout<< "\n\n\n\t " <<number2<< " é o maior valor!";
	}
	
}


