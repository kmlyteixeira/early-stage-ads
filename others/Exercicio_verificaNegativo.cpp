/*FUP  que  peça  um  valor  e  mostre  na  tela se  o  valor  é positivo ou negativo.
AULA: 07/03/2022
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

	cout<< "\n\t =============================================";	
	cout<< "\n\t =======VERIFICANDO SE VALOR É NEGATIVO=======";
	cout<< "\n\t ============================================="; 
	
	cout<< "\n\n\n\t Insira o valor a verificar:";
	cin>> number; 													
	
	if(number>0){
		cout<< "\n\n\n\t " <<number<< " não é um numero negativo, é POSITIVO!";
	} else {
		cout<< "\n\n\n\t " <<number<< " é um numero NEGATIVO!";
	}
	
}
