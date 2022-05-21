#include <iostream> 
#include <iomanip> 
using namespace std; 

//FINALIZAR ESTE EXERCICIO

int verificaData (int ano,int mes,int dia){
	
	int x = 0;
	
	if((ano<1)||(ano>9999)){
		x++;
	} else if ((mes<1)||(mes>12)){
		x++;
	} else if ((mes=2)&&(ano%4==0)&&(dia>29)){
		x++; 	
	} else if ((mes=2)&&(ano%4!=0)&&(dia>28)){
		x++;
	} else if (((mes=4)||(mes=6)||(mes=9)||(mes=11))&&(dia>30)){
		x++;		
	} else if (dia>31){
		x++;
	}
	
	if (x>0){
		return 0;
	} else {
		return 1;
	}
}

main()
{	
	int ano, mes, dia;
	int result;

	cout<<"\n Verifique se a data informada é válida. Formato: DD/MM/YYYY";
    cout<<"\n\n Comece inserindo o ANO (DC) >>> \t ";
	cin>> ano;
	
	cout<<"\n\n Agora o numero que corresponte ao mês desejado >>> \t";
    cout<<"\n [1]JANEIRO 	[2]FEVEREIRO   [3]MARÇO ";
    cout<<"\n [4] ABRIL  	[5] MAIO  	   [6] JUNHO ";
    cout<<"\n [7] JULHO  	[8] AGOSTO     [9] SETEMBRO ";
    cout<<"\n [10] OUTUBRO  [11] NOVEMBRO  [12] DEZEMBRO \n\t";
	cin>> mes;
	
	cout<<"\n\n Por último, insira o dia >>> \t";
	cin>> dia;
	
	result = verificaData(ano,mes,dia);	
	
	if(result = 0){
		cout<<"\n\n INVÁLIDA \t";	
	} else {
		cout<<"\n\n VÁLIDA \t";
	}	
}
