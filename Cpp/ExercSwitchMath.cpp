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
int i, opcao, numero=0, numero2, numero3, fat = 1, ultimo, penultimo, prox, mes, qntDias, numeroMaior, 
numeroMenor, soma, aux, ano, dia=0, mmc;

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
	            cout<<"\n\n Escolha o número para calcular: ";
	           		cin>>numero;
		            	for (i=1;i<=numero;i++){
		            		fat *= i; /*armazena o produto*/
						}
				cout<< "\n O Fatorial de " << numero << " é: " <<fat;
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
    	                	cout<< "\n\n Sua resposta depende... Qual o ANO que se refere este mês?";
    	                	cin>> ano;
    	                		if (ano%4==0){
    	                			qntDias=qntDias-2;	
								}else{
									qntDias=qntDias-3;
								}
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
	        	cout<<"\n\n Insira o 1º numero: \t";
				cin>> numero;
				cout<<"\n\n Insira o 2º numero: \t";
				cin>> numero2;
				cout<<"\n\n Insira o 3º numero: \t";
				cin>> numero3;
				
				if ((numero3 < numero) && (numero < numero2)){
					aux = numero;
					numeroMaior=numero2;
					soma = (numero + numero2);
				} else if ((numero2 < numero) && (numero < numero3)){
					aux = numero;
					numeroMaior=numero3;
					soma = (numero + numero3);	
				}else{
					aux = numero2;
					numeroMaior=numero3;
					soma = (numero2 + numero3);
				}
				
                cout<<"\n\n A soma dos dois MAIORES numeros da sua sequência: ";
				cout<< "\n\t " << aux << " + " << numeroMaior<< " = " << soma;
	            cout<<"\n\n";
				system("pause");
	            break;
	            }
 		            
	    case 5:{
	            cout<<"\n Calcule e imprima o MMC (Minímo Múltiplo Comum) de um número";
	                for(i=1;i<=2;i++){
	                        if(i==1){
	                           cout<<"\n Insira o " <<i<<"º numero >>> \t";
	                           cin>> numero;
	                        } else {
	                           cout<<"\n Insira o " <<i<<"º numero >>> \t";
	                           cin>> numero2;
	                        }
	                }
	            if(numero>numero2)
                    mmc = numero;
                    else
                    mmc = numero2;
                
                while(1) {
                    if(mmc%numero==0 && mmc%numero2==0) {
                        cout<<"\n\t O MMC de "<<numero<<" e "<<numero2<<" é "<<mmc;
                        break;
                    }
                    mmc++;
                }
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
					while((mes<1)||(mes>12)){
						cout<<"\n\n MÊS inválido, tente novamente >>> \t ";	
						cin>>mes;
					}
				
				if((mes=2)&&(ano%4==0)){
					cout<<"\n\n Por último, insira o dia >>> \t";
					cin>> dia;
					do{
			           cout<<"\n\n DIA inválido, tente novamente >>> \t ";
			           cin>> dia;
				     } while(dia>29);
				     
				} else if ((mes=2)&&(ano%4!=0)){
					cout<<"\n\n Por último, insira o dia >>> \t";
					cin>> dia;
					do{
			           cout<<"\n\n DIA inválido, tente novamente >>> \t ";
			           cin>> dia;
				     } while(dia>28);
				     
				} else if ((mes=4)||(mes=6)||(mes=9)||(mes=11)){
					cout<<"\n\n Por último, insira o dia >>> \t";
					cin>> dia;
					do{
			           cout<<"\n\n DIA inválido, tente novamente >>> \t ";
			           cin>> dia; 
			        } while(dia>30);
				} else {
					cout<<"\n\n Por último, insira o dia >>> \t";
					cin>> dia;
					do{
			           cout<<"\n\n DIA inválido, tente novamente >>> \t ";
			           cin>> dia; 
			        } while(dia>31);
				}
			    cout<<"\n\n"; 
			    system("pause");
			    break;
	            }

	    default : {
	            cout<<"\n  Escolha Inválida! Tente novamente >>> \n\n";
	            cout<<"\n\n";
	            system("pause");
	            break;
	                }                   
		}
	} while (opcao!=7);
}
