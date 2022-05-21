/*
FUP que leia UM número, passe para uma função o 
número que foi lido 





e verifique se o número é par ou 
ímpar. 
Atenção: Retorne 1 se o número for PAR
                 Retorne 0 se o número for ÍMPAR
*/

#include<iostream>
using namespace std;

//Protótipo da Função == a declaração da função

int Par_ou_Impar (int num);


int num, result;

main()
{
      
      setlocale(LC_ALL, "Portuguese");
      cout<<"\nPROGRAMA FOFINHO DA PROFESSORA ";
      cout<<"\n\n\n Informe um número e veja se é Par ou Ímpar: ";
      cin>>num;
      result = Par_ou_Impar (num);
      if (result ==1)
         cout<<" \n\n O número informado é Par";
      if (result ==0)
         cout<<" \n\n O número informado é Ímpar";
      cout<<" \n \n \n ";
}
//===================
//função Verifica se é Par ou Ímpar
//===================
      int Par_ou_Impar (int num)
      {
       if (num %2==0)
           return 1; // Retorna 1 para os pares
       else
           return 0; //Retorna 0 para os ímpares
      }
 
