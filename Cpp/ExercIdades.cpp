/*FUP que leia a idade de 15 pessoas. Após calcule e imprima:
a. A menor idade do grupo;
b. A maior maiordo grupo;
Aluna: Kemily
Data: 16/03/2022
*/

#include <iostream> 
#include <iomanip>
#define TAM 15 
using namespace std; 

main()
{	
	int idade, maior, menor;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t----------------------------------------------------------";
	cout<< "\n\t------------VERIFICANDO MAIOR E MENOR IDADE---------------";
	cout<< "\n\t----------------------------------------------------------";
	
	cout<< "\n\n\t Insira a idade de " << TAM << " pessoas \n";
	for(int i = 1; i <= TAM; i++){
		cin>> idade;
		if (i==1){
            maior=idade;
            menor=idade;
        	}
        if (maior<idade){
            maior=idade;
        	}
        if (menor>idade){
            menor=idade;
        	}
  		}
		
		cout<< "\n\nA pessoa mais nova tem " << menor<< " anos!"; 
		cout<< "\n\nA pessoa mais velha tem " << maior<< " anos!";
	   
	}
		
