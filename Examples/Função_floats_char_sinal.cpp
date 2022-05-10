/*
FUP que leia dois números floats e um caractere 
referente ao um dos sinais; + - * /  e que devem ser 
passados para a função.
Conforme o sinal deverá ser realizado o cálculo e
retornado o valor para ser impresso no programa
principal. 
*/
#include<iostream>
using namespace std;

//Protótipo da Função == a declaração da função
float calcular (float num1, float num2, char sinal);

float num1, num2, result;
char sinal;
main()
{
      
      setlocale(LC_ALL, "Portuguese");
      cout<<"\n PROGRAMA FOFINHO DA PROFESSORA QUERIDA SALVE...SALVE ";
      cout<<"\n\n\n Informe um número: ";
      cin>>num1;
      cout<<"\n\n\n Informe outro número: ";
      cin>>num2;
      cout<<"\n\n\n Informe o sinal [+] ou [-] ou [*] ou [/]:  ";
      cin>>sinal;
      result = calcular (num1, num2, sinal);
      
      cout<<" \n\n "<< num1<<"  "<< sinal << " " << num2 <<" = " << result;
      
      cout<<" \n \n \n ";
}
//=========================================
//função Calcula o valor conforme o sinal
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
 
