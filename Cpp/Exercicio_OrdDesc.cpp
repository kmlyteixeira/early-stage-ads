/*FUP   que   leia   tr�s   n�meros   e   mostre-os   em   ordem decrescente. 
Aula: 07/03/2022
Aluna: Kemily


#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	setlocale(LC_ALL, "Portuguese");
	system ("color B");	
		
	int number1, number2, number3;
	char primeiro, segundo, terceiro;
	
	cout<< "\n\t ==========================================";	
	cout<< "\n\t =======NUMEROS EM ORDEM DECRESCENTE=======";
	cout<< "\n\t =========================================="; 
	
	cout<< "\n\n\n\t Insira o 1� n�mero:";
	cin>> number1; 							
	cout<< "\n\n\n\t Insira o 2� n�mero:";
	cin>> number2;
	cout<< "\n\n\n\t Insira o 3� n�mero:";
	cin>> number3; 							
	 							
	if(number1>number3)&&(number1<number2){
		number1 = primeiro;	
		number2 = segundo;
		number3 = terceiro;
	} else if (number1>number2) {
		number1 = terceiro;
		
	} else {
		number1 = segundo;
	}
	
	if(number1>number3)&&(number1<number2){
		number1 = primeiro;	
	} else if (number1>number2) {
		number1 = terceiro;
	} else {
		number1 = segundo;
	}
	
	
}*/
