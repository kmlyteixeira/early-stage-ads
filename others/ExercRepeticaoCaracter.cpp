/*FUP que peça ao usuário que digite um caractere
 quantidade de vezes que deseja que esse caractere seja impresso na tela.
 Alunos: Kemily Teixeira
 Dta: 14/03/2022
 */
 
#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	char caracter;
	int qtdImpressao;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t--------------------------------------------------------";
	cout<< "\n\t------------IMPRESSÃO DE CARACTER EM TELA---------------";
	cout<< "\n\t--------------------------------------------------------";
	
	cout<< "\n\n\t Insira o CARACTER que deseja IMPRIMIR: \t";
	cin>> caracter;
	
	cout<< "\n\n\t Insira a quantidade de VEZES que deseja IMPRIMIR: \t";
	cin>> qtdImpressao;
	
	
	for (int i=0;i<qtdImpressao;i++){
		cout<< " " <<caracter<< " ";
		}
}
