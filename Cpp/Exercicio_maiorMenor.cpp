/*FUP que pe�a tr�s n�meros e imprima o n�mero maior e o n�mero menor. 
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
	cout<< "\n\t =======IMPRIMINDO O MAIOR N�MERO e O MENOR=======";
	cout<< "\n\t ================================================="; 
	
	cout<< "\n\n\n\t Insira o 1� n�mero:";
	cin>> number1; 							
	cout<< "\n\n\n\t Insira o 2� n�mero:";
	cin>> number2;
	cout<< "\n\n\n\t Insira o 3� n�mero:";
	cin>> number3; 							
	 							
	
	if((number1>number2)&&(number1>number3)){
		cout<< "\n\n\n\t " <<number1<< " � o MAIOR n�mero!";
	} else if ((number2>number1)&&(number2>number3)) {
		cout<< "\n\n\n\t " <<number2<< " � o MAIOR n�mero!";
	} else {
		cout<< "\n\n\n\t " <<number3<< " � o MAIOR n�mero!";
	}
	
	if((number1<number2)&&(number1<number3)){
		cout<< "\n\n\n\t " <<number1<< " � o MENOR n�mero!";
	} else if ((number2<number1)&&(number2<number3)) {
		cout<< "\n\n\n\t " <<number2<< " � o MENOR n�mero!";
	} else {
		cout<< "\n\n\n\t " <<number3<< " � o MENOR n�mero!";
	}
	
}
