/*FUP que Imprima os numeros entre o intervalo que o usuário desejar
Aluna: Kemily Teixeira
Dta: 14/03/2022
Dta Versão 2: 23/03/2022 - USANDO DO WHILE
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	int iniRep = 0, fimRep = 0, i = 0;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t----------------------------------------------------------------";
	cout<< "\n\t------------IMPRIMINDO NUMEROS em Ordem Crescente---------------";
	cout<< "\n\t----------------------------------------------------------------";
	
	cout<< "\n\n\t Insira o número para estabelecer um INICIO: ";
	cin>> iniRep;
	
	cout<< "\n\n\t Insira o número para estabelecer um LIMITE: ";
	cin>> fimRep;
	
	i = iniRep;
	
	cout<< "\n\t\t";
	do{
		cout<< " " << i << " ";
		i++;
	} while (i<=fimRep);
}
