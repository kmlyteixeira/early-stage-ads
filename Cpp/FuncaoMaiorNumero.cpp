#include <iostream> 
#include <iomanip> 
using namespace std; 

void imprimirMaiorNumero(int firstNumber, int secondNumber){
	if(firstNumber>secondNumber){
		cout<< "\n\n\n\t " <<firstNumber<< " � o maior valor!";
	} else {
		cout<< "\n\n\n\t " <<secondNumber<< " � o maior valor!";
	}
}

main()
{	
	setlocale(LC_ALL, "Portuguese");
	system ("color B");	
		
	int number1, number2;
	
	cout<< "\n\n\n\t =======================================";	
	cout<< "\n\t =======IMPRIMINDO O MAIOR N�MERO=======";
	cout<< "\n\t ======================================="; 
	
	cout<< "\n\n\n\t Insira o 1� n�mero:";
	cin>> number1; 							
	cout<< "\n\n\n\t Insira o 2� n�mero:";
	cin>> number2;	
	
	imprimirMaiorNumero(number1,number2);
}
