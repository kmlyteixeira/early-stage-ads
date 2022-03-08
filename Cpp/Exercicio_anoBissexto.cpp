/*Faça  um  Programa  que  peça  para  entrar  com  um  ano  com  4  dígitos  e determine se o mesmo é ou não bissexto
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
		
	int ano;
	
	cout<< "\n\t ==================================";	
	cout<< "\n\t =======ESTE ANO É BISSEXTO?=======";
	cout<< "\n\t =================================="; 
	
	cout<< "\n\n\n\t Qual o ano que você deseja verificar? \t";
	cin>> ano; 													
	
	if(ano%4 == 0){
		cout<< "\n\n\n\t " <<ano<< " é um ano BISSEXTO!";
	} else {
		cout<< "\n\n\n\t " <<ano<< " NÃO é um ano BISSEXTO!";
	}
	
}
