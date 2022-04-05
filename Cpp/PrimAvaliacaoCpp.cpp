/* 
Faculdade SENAC - Joinville - SC
Prof�: Cl�udia Werlich
Atividade Avaliativa de Introdu��o a Programa��o de Computadores

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

   cout<<"ATIVIDADE AVALIATIVA DE INTRODU��O A PROGRAMA��O \n";
   cout<<"INDICADORES: \n";
   cout<<"1. Realiza opera��es matem�ticas de acordo com os fundamentos e o contexto apresentado.\n";
   cout<<"2. Utiliza adequadamente os tipos de vari�veis em algoritmos de acordo com o contexto.\n";
   cout<<"3. Utiliza opera��es aritm�ticas em programas.\n";
   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
   cout<<"6. Utiliza as estruturas de repeti��o em algoritmos de acordo com o contexto. \n";
   cout<<"7. Utiliza vetores para solu��o de problemas computacionais em determinado contexto. \n";
   
   do{
	   system ("cls");
	   cout<<"\n ====================================================================================";
	   cout<<"\n [1] Quest�o 01 - Ser� liberada no dia 06/04/2022";
	   cout<<"\n [2] Quest�o 02 - Ser� liberada no dia 06/04/2022";
	   cout<<"\n [3] Quest�o 03 - Ser� liberada no dia 11/04/2022";
	   cout<<"\n [4] Quest�o 04 - Ser� liberada no dia 11/04/2022";
	   cout<<"\n [5] Quest�o 05 - Ser� liberada no dia 13/04/2022";
	   cout<<"\n [6] Quest�o 06 - Ser� liberada no dia 13/04/2022";
	   cout<<"\n [7] Quest�o 07 - N�meros Primos";
	   cout<<"\n [8] FIM.";
	   cout<<"\n\n\n\n ESCOLHA UMA OP��O --> ";
	   cin>>op;
	  switch (op)
	  {/*
	    case  1:{
	         system ("color 2");
	         cout<<"\n Op��o 01";
	         cout<<" \n APERTE UMA TECLA";
	         getch(); // espera digitar algo
	         break;
	           }
	    case 2:{
             system ("color 3");
             cout<<"\n Op��o 02";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
        
             
             break;
	           }
	    */
	    case 7:{
	    /* QUEST�O 07:
		N�meros Primos
		Escolha uma op��o:
		[P] - Verifica se o informado � um N�mero Primo ou N�o 
		[L] - Mostra os n�meros primos entre um intervalo de n�meros fornecido pelo usu�rio. Pe�a o limite incial e o final.*/
		
	    	cout<<"\n =================================";
			cout<<"\n == QUEST�O 07 - N�MEROS PRIMOS ==";
			cout<<"\n =================================";
			cout<<"\n\n [P] - Verificar se � um N�mero Primo";
			cout<<"\n [L] - Mostrar os Numeros Primos entre determinado intervalo";
			cout<<"\n\n Selecione uma das op��es acima >>>> \t";
			cin>> escolha;
			escolha=toupper(escolha);
			
			switch(escolha){
				case 'P':{
					cout<<"\n\n Insira um n�mero para iniciarmos a verifica��o >>> \t";
					cin>> numero;
						for(int i=2;i=(numero/2);i++){
							if(numero%i!=0){
								cout<<"\n\n\t O n�mero "<<numero<< " n�o � PRIMO!\n\n";	
								break;
							} else {
								cout<<"\n\n\t O n�mero "<<numero<< " est� na casa dos PRIMOS!\n\n";
								break;
							}

						}
					system("pause");
					break;
				}
				case 'L':{
					cout<<"\n\n Insira um n�mero para iniciar a amostragem >>> \t";
					cin>> inicio;
					cout<<"\n\n Agora defina um limite para sua sele��o >>> \t";
					cin>> fim;
					
						for(int i=inicio;i<fim;i++){
							cout<<"\n\n Insira o "<<i<<"� n�mero >>> \t";
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
	         cout<<"\n Escolha Inv�lida! Tente novamente >>> ";
	         cin>> op;
	         getch();
	         break;
	            }
	  }
	  
	} while(op!=8);
}

