/*FUP que peça um número inteiro e verifique se o número é par ou ímpar
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
		
	int number;
	
	cout<< "\n\t ===========================";	
	cout<< "\n\t =======PAR OU IMPAR?=======";
	cout<< "\n\t ==========================="; 
	
	cout<< "\n\n\n\t Insira um NÚMERO a verificar: \t";
	cin>> number; 													
	
	if(number%2 == 0){
		cout<< "\n\n\n\t " <<number<< " é PAR!";
	} else {
		cout<< "\n\n\n\t " <<number<< " é IMPAR!";
	}
	
}
