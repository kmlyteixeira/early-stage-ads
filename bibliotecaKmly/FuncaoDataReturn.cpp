#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{	
	setlocale(LC_ALL, "Portuguese");
	int ano, mes, dia;
	int result;

	cout<<"\n Verifique se a data informada � v�lida. Formato: DD/MM/YYYY";
    cout<<"\n\n Comece inserindo o ANO (DC) >>> \t ";
	cin>> ano;
	
	cout<<"\n\n Agora o numero que corresponte ao m�s desejado >>> \t";
	cin>> mes;
	
	cout<<"\n\n Por �ltimo, insira o dia >>> \t";
	cin>> dia;
	
	verificaData(ano,mes,dia);	
	
	if(result == 0){
		cout<<"\n\n DATA "<<dia<<"/"<<mes<<"/"<<ano<<" � INV�LIDA \t";	
	} else if (result == 1){
		cout<<"\n\n DATA "<<dia<<"/"<<mes<<"/"<<ano<<" � V�LIDA \t";
	}	
}
