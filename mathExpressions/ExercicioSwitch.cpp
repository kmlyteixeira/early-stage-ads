/*Criar um programa que onde o usu�rio poder� escolher entre as op��es
Estrutura de MENU - utilizando SWITCH
Aluna Kemily
Data: 28/03/2022
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 
int i, inicio, fim, tabuada, tam, opcao, ano, numero,negativos,pares,dSete; 
char caracter, escolha;

main()
{
 setlocale(LC_ALL, "Portuguese"); 
 system ("color B");
 do{
 	 system ("cls");
	 cout<<" \n\t====================================  "; 
	 cout<<" \n\t\a  PROGRAMA UTILIZANDO O SWITCH ";
	 cout<<" \n\t====================================  "; 
	 cout<<"\n\n WELCOME :) >> Fa�a a sua escolha << ";
	 cout<<"\n\n [1] - Tabuada utilizando comando FOR";
	 cout<<"\n [2] - Tabuada utilizando comando DO_WHILE";
	 cout<<"\n [3] - N�meros �mpares de 0 a 200, utilizando comando DO_WHILE";
	 cout<<"\n [4] - Sequ�ncia de n�meros, da sua escolha, utilizando comando FOR";
	 cout<<"\n [5] - Sequ�ncia de n�meros, da sua escolha, utilizando comando DO_WHILE";
	 cout<<"\n [6] - Sequ�ncia de n�meros, da sua escolha, utilizando comando WHILE";
	 cout<<"\n [7] - Tabuada de um numero usando o WHILE";
	 cout<<"\n [8] - Imprimir uma pequena torre de caracteres, com FOR";
	 cout<<"\n [9] - Verifica��o de ano BISSEXTO, utilizando o IF";
	 cout<<"\n [10] - Verifica��o BONITINHA de n�meros";
	 cout<<"\n [11] - Fim";
	 cout<<"\n\n Insira uma das op��es >>> \t ";
	 cin>>opcao;
	 switch (opcao)
	 {
	  	case 1:{
	            cout<<"\n\n TABUADA utilizando o comando FOR";
	            cout<<"\n\n Escolha o n�mero para calcular: ";
	            cin>>tabuada;
	            	for (i=1;i<=10;i++){            
	                   cout<<"\n\n"<<tabuada<<" X "<<i<<" = "<<tabuada*i;
	               	}
	            cout<<"\n\n";
				system("pause");
				break;
	            }
	            
		case 2:{
	            cout<<"\n\n TABUADA utilizando o comando DO WHILE";
	            cout<<"\n\n Escolha o n�mero para calcular: ";
	            cin>>tabuada;
	            i=1;
	                do {
	                    cout<<"\n\n"<<tabuada<<" X "<<i<<" = "<<tabuada*i;
	                    i++;
	                } while (i<=10);
	            cout<<"\n\n";
				system("pause");
	            break; 
	            }
	            
	    case 3 :{
	            cout<<"\n\n N�meros �mpares de 0 a 200, utilizando comando DO_WHILE";
	            cout<<"\n\n";
	            i=0;
	                do {
	                    if (i%2!=0)
	                    cout<<" | "<<i;
	                    i++;
	                } while (i<=200);
	            cout<<"\n\n";
				system("pause");
	            break;
	            }  
				  
	    case 4 :{
	            cout<<"\n Sequ�ncia de n�meros da sua escolha, utilizando o FOR";
	            cout<<"\n Escolha o n�mero de in�cio: ";
	            cin>>inicio;
	            cout<<"\n Escolha o n�mero final: ";
	            cin>>fim;
	            cout<<"\n\n";
	                for (i=inicio;i<=fim;i++){
	                   cout<<" | " << i;
	                }
	            cout<<"\n\n";
				system("pause");
	            break;
	            }
	            
	    case 5:{
	            cout<<"\n Sequ�ncia de n�meros da sua escolha, utilizando o DO_WHILE";
	            cout<<"\n Escolha o n�mero de in�cio: ";
	            cin>>inicio;
	            cout<<"\n Escolha o n�mero final: ";
	            cin>>fim;
	            cout<<"\n\n";
	            i=inicio;
	                do {
	                  cout<<" | " << i;
	                  i++;
	                } while (i<=fim);
	            cout<<"\n\n";
				system("pause");
	            break;
	            }
	
	    case 6:{
		        cout<<"\n Sequ�ncia de n�meros da sua escolha, utilizando comando WHILE";
		        cout<<"\n\n Escolha o n�mero de in�cio: ";
		        cin>>inicio;
		        cout<<"\n Escolha o n�mero final: ";
		        cin>>fim;
		        cout<<"\n\n";
		        i=inicio;
			        while (i<=fim){
			         cout<<" | " << i;
			         i++;	
			        }
			    cout<<"\n\n"; 
			    system("pause");
			    break;
	            }
	            
	    case 7:{
	            cout<<"\n\n Tabuada de um numero usando o WHILE";
	            cout<<"\n\n Escolha o n�mero para calcular: ";
	            cin>>tabuada;
	                i=0;
					while (i<=10)
					{            
	                   cout<<"\n\n"<<tabuada<<"*"<<i<<"="<<tabuada*i;
	                   i++;
	               	}
	            cout<<"\n\n";
	            system("pause");
	            break;
	            }
	            
	    case 8:{
	            cout<<"\n\n Imprimir uma pequena(ou n�o t�o pequena) torre de caracteres";
	            cout<< "\n\n Insira um caracter especial: \t";
				cin>> caracter;
				cout<< "\n\tInsira o tamanho maximo da sua torre: \t";
				cin>> tam;
	
					for (int i=tam;i>=1;i--){
							for(int j=1;j<i;j++){
								cout<< caracter;
							}
					}
				cout<<"\n\n";
	            system("pause");
				break;
	            }  
				
		case 9:{
	            cout<<"\n\n Verifica��o de ano BISSEXTO";
	            cout<< "\n\n Qual o ano que voc� deseja verificar?\t";
				cin>> ano;
	
				if(ano%4 == 0){
					cout<< "\n\n\n\t " <<ano<< " � um ano BISSEXTO!";
				} else {
					cout<< "\n\n\n\t " <<ano<< " N�O � um ano BISSEXTO!";
				}
				cout<<"\n\n";
	            system("pause");
				break;
	            }
			
		case 10:{
	            cout<<"\n\n -------Verificando seus N�MEROS------- \n";
	            cout<< "\n\n Qual a quantidade de n�meros que deseja informar?\t";
	            cin>> tam;
	            for (int i=1;i<=tam;i++){
	            	cout<< "\n\n Insira o " <<i<<"� n�mero\t";
	            	cin>> numero;
				}
	            cout<<"\n\n Agora selecione o contador que achar mais interessante: ";
	            cout<<"\n\n [P] Quantidade de PARES ";
	            cout<<"\n [N] Quantidade de NEGATIVOS ";
	            cout<<"\n [M] Quantidade de divis�veis por SETE ";
	            cout<<"\n [F] Nenhuma das OP��ES \n";
	            cin>> escolha;
	            escolha = toupper(escolha);
	            switch (escolha)
	            {
	            	case 'P':{
			            	if(numero%2==0){
							pares++;
							} 
							cout<< "\t"<< pares << " considerado PAR!";
						cout<<"\n\n";
	            		system("pause");	
						break;
					}
					
					case 'N':{
							if(numero<0){
							negativos++;
							}
							cout<< "\t"<< pares << " < que ZERO - ou seja, negativo!";
						cout<<"\n\n";
	            		system("pause");
						break;
					}
					
					case 'M':{
							if(numero%7==0){
							dSete++;
							}
							cout<< "\t"<< dSete<< " podemos dividir por SETE!";
						cout<<"\n\n";
	            		system("pause");	
						break;
					}
					case 'F':{
							cout<< "Thank you :) See you later...";
						cout<<"\n\n";
	            		system("pause");	
						break;
					}
					
				}
				break;
	            }   
	            
	    case 11:{
	            cout<<"\n\n Fim do PROGRAMA! Thank you :)";
				break;
	            }
	
	    default : {
	            cout<<"\n  Escolha Inv�lida! Tente novamente >>> \n\n";
	            cout<<"\n\n";
	            system("pause");
	            break;
	                }                      
		}
	} while (opcao!=8);
}
