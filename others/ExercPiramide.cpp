/*FUP utilizando a estrutura for para imprimir a seguinte torre de caracteres:
***********
**********
*********
********
*******
******
*****
****
***
**
*
Aluna: Kemily
Data: 16/03/2022
*/


#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{		
	char caracter;
	int tam;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t-------------------------------------------";
	cout<< "\n\t--------------IMPRIMINDO TORRE-------------";
	cout<< "\n\t-------------------------------------------\n\n";
	
	cout<< "\n\tInsira um caracter especial: \t";
	cin>> caracter;
	
	cout<< "\n\tInsira o tamanho maximo da sua torre: \t";
	cin>> tam;
	
	
	for (int i=tam;i>=1;i--){
			for(int j=1;j<i;j++){
				cout<< caracter;
			}
			cout<< "\n";
		}
	}
