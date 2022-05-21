/*FUP que peça três números e imprima o número maior e o número menor. 
Aula: 07/03/2022
Aluna: Kemily Teixeira
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	setlocale(LC_ALL, "Portuguese");
	system ("color B");	
		
	int number1, number2, number3;
	
	cout<< "\n\t =================================================";	
	cout<< "\n\t =======IMPRIMINDO O MAIOR NÚMERO e O MENOR=======";
	cout<< "\n\t ================================================="; 
	
	cout<< "\n\n\n\t Insira o 1ª número:";
	cin>> number1; 							
	cout<< "\n\n\n\t Insira o 2ª número:";
	cin>> number2;
	cout<< "\n\n\n\t Insira o 3ª número:";
	cin>> number3; 							
	 							
	
	if((number1>number2)&&(number1>number3)){
		cout<< "\n\n\n\t " <<number1<< " é o MAIOR número!";
	} else if ((number2>number1)&&(number2>number3)) {
		cout<< "\n\n\n\t " <<number2<< " é o MAIOR número!";
	} else {
		cout<< "\n\n\n\t " <<number3<< " é o MAIOR número!";
	}
	
	if((number1<number2)&&(number1<number3)){
		cout<< "\n\n\n\t " <<number1<< " é o MENOR número!";
	} else if ((number2<number1)&&(number2<number3)) {
		cout<< "\n\n\n\t " <<number2<< " é o MENOR número!";
	} else {
		cout<< "\n\n\n\t " <<number3<< " é o MENOR número!";
	}
	
}
