/*
FUP que leia UM n�mero, passe para uma fun��o o 
n�mero que foi lido 





e verifique se o n�mero � par ou 
�mpar. 
Aten��o: Retorne 1 se o n�mero for PAR
                 Retorne 0 se o n�mero for �MPAR
*/

#include<iostream>
using namespace std;

//Prot�tipo da Fun��o == a declara��o da fun��o

int Par_ou_Impar (int num);


int num, result;

main()
{
      
      setlocale(LC_ALL, "Portuguese");
      cout<<"\nPROGRAMA FOFINHO DA PROFESSORA ";
      cout<<"\n\n\n Informe um n�mero e veja se � Par ou �mpar: ";
      cin>>num;
      result = Par_ou_Impar (num);
      if (result ==1)
         cout<<" \n\n O n�mero informado � Par";
      if (result ==0)
         cout<<" \n\n O n�mero informado � �mpar";
      cout<<" \n \n \n ";
}
//===================
//fun��o Verifica se � Par ou �mpar
//===================
      int Par_ou_Impar (int num)
      {
       if (num %2==0)
           return 1; // Retorna 1 para os pares
       else
           return 0; //Retorna 0 para os �mpares
      }
 
