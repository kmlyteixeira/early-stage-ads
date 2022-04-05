/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

ALUNA: Kemily Teixeira da Rosa

Data: 04/04/2022 
(Altere a data conforme a entrega)

*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();

int x,op, numero=0, inicio, fim;
char escolha;

using namespace std;
main ()
{
setlocale(LC_ALL, "Portuguese");
system ("color B");
system ("cls"); 
cout << fixed << setprecision(2);

   cout<<"ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO \n";
   cout<<"INDICADORES: \n";
   cout<<"1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
   cout<<"2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
   cout<<"3. Utiliza operações aritméticas em programas.\n";
   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
   cout<<"6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
   cout<<"7. Utiliza vetores para solução de problemas computacionais em determinado contexto. \n";
   
   do{
	   system ("cls");
	   cout<<"\n ====================================================================================";
	   cout<<"\n [1] Questão 01 - Será liberada no dia 06/04/2022";
	   cout<<"\n [2] Questão 02 - Será liberada no dia 06/04/2022";
	   cout<<"\n [3] Questão 03 - Será liberada no dia 11/04/2022";
	   cout<<"\n [4] Questão 04 - Será liberada no dia 11/04/2022";
	   cout<<"\n [5] Questão 05 - Será liberada no dia 13/04/2022";
	   cout<<"\n [6] Questão 06 - Será liberada no dia 13/04/2022";
	   cout<<"\n [7] Questão 07 - Números Primos";
	   cout<<"\n [8] FIM.";
	   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
	   cin>>op;
	  switch (op)
	  {/*
	    case  1:{
	         system ("color 2");
	         cout<<"\n Opção 01";
	         cout<<" \n APERTE UMA TECLA";
	         getch(); // espera digitar algo
	         break;
	           }
	    case 2:{
             system ("color 3");
             cout<<"\n Opção 02";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
        
             
             break;
	           }
	    */
	    case 7:{
	    /* QUESTÃO 07:
		Números Primos
		Escolha uma opção:
		[P] - Verifica se o informado é um Número Primo ou Não 
		[L] - Mostra os números primos entre um intervalo de números fornecido pelo usuário. Peça o limite incial e o final.*/
		
	    	cout<<"\n =================================";
			cout<<"\n == QUESTÃO 07 - NÚMEROS PRIMOS ==";
			cout<<"\n =================================";
			cout<<"\n\n [P] - Verificar se é um Número Primo";
			cout<<"\n [L] - Mostrar os Numeros Primos entre determinado intervalo";
			cout<<"\n\n Selecione uma das opções acima >>>> \t";
			cin>> escolha;
			escolha=toupper(escolha);
			
			switch(escolha){
				case 'P':{
					cout<<"\n\n Insira um número para iniciarmos a verificação >>> \t";
					cin>> numero;
						for(int i=2;i=(numero/2);i++){
							if(numero%i!=0){
								cout<<"\n\n\t O número "<<numero<< " não é PRIMO!\n\n";	
								break;
							} else {
								cout<<"\n\n\t O número "<<numero<< " está na casa dos PRIMOS!\n\n";
								break;
							}

						}
					system("pause");
					break;
				}
				case 'L':{
					cout<<"\n\n Insira um número para iniciar a amostragem >>> \t";
					cin>> inicio;
					cout<<"\n\n Agora defina um limite para sua seleção >>> \t";
					cin>> fim;
					
						for(int i=inicio;i<fim;i++){
							cout<<"\n\n Insira o "<<i<<"º número >>> \t";
							cin>> numero;
									do{
										cout<< " " << numero << " ";
										numero++;
									} while ((numero%numero==0)&&(numero%1==0));
								}	
						}
					system("pause");
					break;
				}
			}
			break;
		
	    case 8:{
             system ("color 8");
             cout<<"\n\n Finalizando seu PROGRAMA! See you later :) \n ";
             getch();
             break;
	            }
	    default: {
	         cout<<"\n Escolha Inválida! Tente novamente >>> ";
	         cin>> op;
	         getch();
	         break;
	            }
	  }
	  
	} while(op!=8);
}

