/*FUP que tenha a seguinte lista de op��es:
[1] - Calcule um fatorial de um n�mero. Ex.: 5!= 5*4*3*2*1
[2] - Imprima os 10 primeiros termos da S�rie de Fibonacci. 
Ex.: 
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...  
[3] - Leia um n�mero equivalente ao m�s e imprima a quantidade de dias deste m�s.
[4] - Leia 3 valores e imprima a soma dos 2 maiores.
[5] - Calcule e imprima o MMC (Min�mo M�ltiplo Comum) de um n�mero.
[6] - Verifique se a data informada � v�lida. Leia a data no formato:
      dd (dia) - mm (m�s) - aaaa (ano)
[7] - FIM*/

#include <iostream> 
#include <iomanip> 
using namespace std; 
int i, opcao, numero, fat = 1, ultimo, penultimo, prox; 

main()
{
 setlocale(LC_ALL, "Portuguese"); 
 system ("color B");
 do{
 	 system ("cls");
	 cout<<" \n\t===========================================  "; 
	 cout<<" \n\t\a  OPERA��ES MATEM�TICAS - MENU SWITCH ";
	 cout<<" \n\t===========================================  "; 
	 cout<<"\n\n WELCOME :) >> Fa�a a sua escolha << ";
	 cout<<"\n\n [1] - Calcular fatorial de um n�mero.";
	 cout<<"\n [2] - Imprimir os 10 primeiros termos da S�rie de Fibonacci";
	 cout<<"\n [3] - Leia um n�mero equivalente ao m�s e imprima a quantidade de dias deste m�s";
	 cout<<"\n [4] - Leia 3 valores e imprima a soma dos 2 maiores.";
	 cout<<"\n [5] - Calcule e imprima o MMC (Min�mo M�ltiplo Comum) de um n�mero.";
	 cout<<"\n [6] - Verifique se a data informada � v�lida. Formato: DD/MM/YYYY";
	 cout<<"\n [7] - Fim";
	 cout<<"\n\n Insira uma das op��es >>> \t ";
	 cin>>opcao;
	 switch (opcao)
	 {
	  	case 1:{
	            cout<<"\n\n ------FATORIAL de um N�MERO------";
	            do{
	            	cout<<"\n\n Escolha o n�mero para calcular: ";
	           		cin>>numero;
		            	for (i=1;i<=numero;i++){
		            		fat *= i; /*armazena o produto*/
						}
					cout<< "\n O Fatorial de " << numero << " �: " <<fat;
				} while (numero);
	            cout<<"\n\n";
				system("pause");
				break;
	            }
/*		            --- FINALIZAR A PARTIR DAQUI -------
		case 2:{
	            cout<<"\n\n Consultando os 10 primeiros termos da S�rie de Fibonacci";
	            ultimo = 1;
	            penultimo = 1;
		            for (i=0;i<=10;i++){
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
	
	    default : {
	            cout<<"\n  Escolha Inv�lida! Tente novamente >>> \n\n";
	            cout<<"\n\n";
	            system("pause");
	            break;
	                }   */                   
		}
	} while (opcao!=8);
}
