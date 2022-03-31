/*FUP que tenha a seguinte lista de opções:
[1] - Calcule um fatorial de um número. Ex.: 5!= 5*4*3*2*1
[2] - Imprima os 10 primeiros termos da Série de Fibonacci. 
Ex.: 
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...  
[3] - Leia um número equivalente ao mês e imprima a quantidade de dias deste mês.
[4] - Leia 3 valores e imprima a soma dos 2 maiores.
[5] - Calcule e imprima o MMC (Minímo Múltiplo Comum) de um número.
[6] - Verifique se a data informada é válida. Leia a data no formato:
      dd (dia) - mm (mês) - aaaa (ano)
[7] - FIM*/

#include <iostream> 
#include <iomanip> 
using namespace std; 
int i, opcao, numero, fat = 1, ultimo, penultimo, prox, mes, qntDias, numeroMaior, 
numeroMenor, soma, aux, ano, dia;

main()
{
 setlocale(LC_ALL, "Portuguese"); 
 system ("color B");
 do{
 	 system ("cls");
	 cout<<" \n\t===========================================  "; 
	 cout<<" \n\t\a  OPERAÇÕES MATEMÁTICAS - MENU SWITCH ";
	 cout<<" \n\t===========================================  "; 
	 cout<<"\n\n WELCOME :) >> Faça a sua escolha << ";
	 cout<<"\n\n [1] - Calcular fatorial de um número.";
	 cout<<"\n [2] - Imprimir os 10 primeiros termos da Série de Fibonacci";
	 cout<<"\n [3] - Leia um número equivalente ao mês e imprima a quantidade de dias deste mês";
	 cout<<"\n [4] - Leia 3 valores e imprima a soma dos 2 maiores.";
	 cout<<"\n [5] - Calcule e imprima o MMC (Minímo Múltiplo Comum) de um número.";
	 cout<<"\n [6] - Verifique se a data informada é válida. Formato: DD/MM/YYYY";
	 cout<<"\n [7] - Fim";
	 cout<<"\n\n Insira uma das opções >>> \t ";
	 cin>>opcao;
	 switch (opcao)
	 {
	  	case 1:{
	            cout<<"\n\n ------FATORIAL de um NÚMERO------";
	            do{
	            	cout<<"\n\n Escolha o número para calcular: ";
	           		cin>>numero;
		            	for (i=1;i<=numero;i++){
		            		fat *= i; /*armazena o produto*/
						}
					cout<< "\n O Fatorial de " << numero << " é: " <<fat;
				} while (numero);
	            cout<<"\n\n";
				system("pause");
				break;
	            }

		case 2:{
	            cout<<"\n\n Imprimindo os 10 primeiros termos da Série de Fibonacci \n\t";
	            ultimo = 1;
	            penultimo = 1;
		            for (i=0;i<8;i++){
		            	if (i==0){
		            		cout<<" "<< ultimo;
		            		cout<<" "<< penultimo;	
						}
						prox = ultimo+penultimo;
        				cout<<" "<< prox;
        				penultimo = ultimo;
        				ultimo = prox;
					}
	                
	            cout<<"\n\n";
				system("pause");
	            break; 
	            }
	            
	    case 3 :{
	            cout<<"\n\n Leia um número equivalente ao mês e imprima a quantidade de dias deste mês ";
	            cout<<"\n\n Insira o numero que corresponte ao mês desejado >>> \t";
	            cout<<"\n [1] JANEIRO ";
	            cout<<"\n [2] FEVEREIRO ";
	            cout<<"\n [3] MARÇO ";
	            cout<<"\n [4] ABRIL ";
	            cout<<"\n [5] MAIO ";
	            cout<<"\n [6] JUNHO ";
	            cout<<"\n [7] JULHO ";
	            cout<<"\n [8] AGOSTO ";
	            cout<<"\n [9] SETEMBRO ";
	            cout<<"\n [10] OUTUBRO ";
	            cout<<"\n [11] NOVEMBRO ";
	            cout<<"\n [12] DEZEMBRO \n\t";
	            cin>> mes;
	            qntDias = 31;
    	            switch(mes)
    	            {
    	                case 4: case 6: case 9: case 11:{
    	                    qntDias= qntDias-1;
    	                    break;
    	                }
    	                case 2: {
    	                    qntDias=qntDias-2;
    	                    break;
    	                }
    	                default : {
    	                    qntDias = qntDias;
    	                    break;
    	                }
    	            }
    	            
    	        cout<<"\n\n O mês selecionado acima possui "<<qntDias<< " dias.";     
    	        cout<<"\n\n";
        		system("pause");
        	    break;  
	            }  
        				  
	    case 4 :{
	            cout<<"\n Leia 3 valores e imprima a soma dos 2 maiores.";
	                for(int i=1;i<=3; i++){
	                	cout<<"\n\n Insira o " << i<< "º numero: \t";
						cin>> numero;
						if (i==1){
				            numeroMaior=numero;
				        	}
				        if (numeroMaior<numero){
				        	aux=numeroMaior;
				            numeroMaior=numero;
				        	}
				        if (numeroMaior>numero){
				            aux=numero;
				        	}
				  		}
	                    soma = numeroMaior+aux;
	                    cout<<"\n\n A soma dos dois MAIORES numeros da sua sequência :";
	                    cout<<"\n\n " << numeroMaior << " + " << aux << " = " << soma;
	
	            cout<<"\n\n";
				system("pause");
	            break;
	            }
 /*		            --- FINALIZAR A PARTIR DAQUI -------   		            
	    case 5:{
	            cout<<"\n Calcule e imprima o MMC (Minímo Múltiplo Comum) de um número";
	            cout<<"\n Insira dois numeros para calcular >>> \t";
	     		cin>> num1;
	     		cin>> num2;
	     		
				a = num1;
				b = num2;

				    do {
				        resto = a % b;
				        a = b;
				        b = resto;
				
				    } while (resto != 0);

				cout<<"";
	            cout<<"\n\n";
				system("pause");
	            break;
	            }

	    case 6:{
		        cout<<"\n Verifique se a data informada é válida. Formato: DD/MM/YYYY";
		        cout<<"\n\n Comece inserindo o ANO (DC) >>> \t ";
				cin>> ano;
					while((ano<1)||(ano>9999)){
						cout<<"\n\n ANO inválido, tente novamente >>> \t ";	
						cin>>ano;
					}
				
				cout<<"\n\n Agora o numero que corresponte ao mês desejado >>> \t";
	            cout<<"\n [1]JANEIRO 	[2]FEVEREIRO   [3]MARÇO ";
	            cout<<"\n [4] ABRIL  	[5] MAIO  	   [6] JUNHO ";
	            cout<<"\n [7] JULHO  	[8] AGOSTO     [9] SETEMBRO ";
	            cout<<"\n [10] OUTUBRO  [11] NOVEMBRO  [12] DEZEMBRO \n\t";
				cin>> mes;
					while((mes<1)&&(mes>12)){
						cout<<"\n\n MÊS inválido, tente novamente >>> \t ";	
						cin>>mes;
					}
				
				cout<<"\n\n Por último, insira o dia >>> \t";
				cin>> dia;
					do{
						cout<<"\n\n DIA inválido para o mês selecionado, tente novamente >>> \t";
						cin>>dia;
					} while((mes=2)&&(ano%4==0)&&(dia>29));
					
					do{
						cout<<"\n\n DIA inválido para o mês selecionado, tente novamente >>> \t";
						cin>>dia;
					} while((mes=2)&&(ano%4!=0)&&(dia>28));
					
					do{
						cout<<"\n\n DIA inválido para o mês selecionado, tente novamente >>> \t";
						cin>>dia;
					} while((mes=4)||(mes=6)||(mes=9)||(mes=11)&&(dia>30));

			    cout<<"\n\n"; 
			    system("pause");
			    break;
	            }
*/	            
	    default : {
	            cout<<"\n  Escolha Inválida! Tente novamente >>> \n\n";
	            cout<<"\n\n";
	            system("pause");
	            break;
	                }                   
		}
	} while (opcao!=7);
}
