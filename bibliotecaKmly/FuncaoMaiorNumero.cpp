#include <iostream> 
#include <iomanip>
#include "bibliotecaKmly.h" 
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
	
	imprimirMaiorNumero(number1,number2);
}
