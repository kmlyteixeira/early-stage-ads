/*
FUP que leia dois n�meros floats e um caractere 
referente ao um dos sinais; + - * /  e que devem ser 
passados para a fun��o.
Conforme o sinal dever� ser realizado o c�lculo e
retornado o valor para ser impresso no programa
principal. 
*/
#include<iostream>
using namespace std;

//Prot�tipo da Fun��o == a declara��o da fun��o
float calcular (float num1, float num2, char sinal);

float num1, num2, result;
char sinal;
main()
{
      
      setlocale(LC_ALL, "Portuguese");
      cout<<"\n PROGRAMA FOFINHO DA PROFESSORA QUERIDA SALVE...SALVE ";
      cout<<"\n\n\n Informe um n�mero: ";
      cin>>num1;
      cout<<"\n\n\n Informe outro n�mero: ";
      cin>>num2;
      cout<<"\n\n\n Informe o sinal [+] ou [-] ou [*] ou [/]:  ";
      cin>>sinal;
      result = calcular (num1, num2, sinal);
      
      cout<<" \n\n "<< num1<<"  "<< sinal << " " << num2 <<" = " << result;
      
      cout<<" \n \n \n ";
}
//=========================================
//fun��o Calcula o valor conforme o sinal
//=========================================
      float calcular (float num1, float num2, char sinal)
      {
       if (sinal =='+')
           return (num1 + num2);
       if (sinal == '-')
           return (num1 - num2);
       if (sinal == '*')
           return (num1 * num2);
       if (sinal == '/')
           return (num1 / num2);
      }
 
