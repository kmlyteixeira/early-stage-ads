/*Fa�a  um  Programa  que  pe�a  para  entrar  com  um  ano  com  4  d�gitos  e determine se o mesmo � ou n�o bissexto
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
	cout<< "\n\t =======ESTE ANO � BISSEXTO?=======";
	cout<< "\n\t =================================="; 
	
	cout<< "\n\n\n\t Qual o ano que voc� deseja verificar? \t";
	cin>> ano; 													
	
	if(ano%4 == 0){
		cout<< "\n\n\n\t " <<ano<< " � um ano BISSEXTO!";
	} else {
		cout<< "\n\n\n\t " <<ano<< " N�O � um ano BISSEXTO!";
	}
	
}
