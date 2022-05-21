#include <iostream> 
#include <iomanip> 
using namespace std; 

void imprimirTabuada (int number){
	int i = 0;
	do{
		cout<< "\n\t\t" <<number<< " X " <<i<< " = " <<number*i<<"\n";
		i++;
	} while (i<=10);		
}

main()
{	
	int numero,limite;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\n\t----------------------------------";
	cout<< "\n\t------------TABUADA---------------";
	cout<< "\n\t----------------------------------";
	
	cout<< "\n\n\t Insira o número que deseja saber a TABUADA: ";
	cin>> numero;
	
	imprimirTabuada(numero);
}
