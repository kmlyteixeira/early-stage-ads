/*FUP que pe�a um n�mero inteiro e verifique se o n�mero � par ou �mpar
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
	
	cout<< "\n\n\n\t Insira um N�MERO a verificar: \t";
	cin>> number; 													
	
	if(number%2 == 0){
		cout<< "\n\n\n\t " <<number<< " � PAR!";
	} else {
		cout<< "\n\n\n\t " <<number<< " � IMPAR!";
	}
	
}
