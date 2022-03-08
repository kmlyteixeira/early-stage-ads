/*FUP   que   leia   três   números   e   mostre-os   em   ordem decrescente. 
Aula: 07/03/2022
Aluna: Kemily */
#include <iostream> 
#include <iomanip> 
using namespace std; 
main()
{	
	setlocale(LC_ALL, "Portuguese");
	system ("color B");	
		
	int ordenador, number1, number2, number3;
	
	cout<< "\n\t ==========================================";	
	cout<< "\n\t =======NUMEROS EM ORDEM DECRESCENTE=======";
	cout<< "\n\t =========================================="; 
	
	cout<< "\n\n\n\t Insira o 1ª número:";
	cin>> number1; 							
	cout<< "\n\n\n\t Insira o 2ª número:";
	cin>> number2;
	cout<< "\n\n\n\t Insira o 3ª número:";
	cin>> number3; 							
	 							
    if(number2 < number1){
        ordenador = number1;
        number1 = number2;
        number2 = ordenador;
    }

    if(number3 < number1){
        ordenador = number1;
        number1 = number3;
        number3 = ordenador;
    }

    if(number3 < number2){
        ordenador = number2;
        number2 = number3;
        number3 = ordenador;
    }
	
	cout <<"\n\n\tOrdenando seus números em Ordem Decrescente: \n\t "<<number3<<", "<<number2<<", "<<number1;
}
