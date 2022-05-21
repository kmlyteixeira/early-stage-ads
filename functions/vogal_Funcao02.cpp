/*
FUF que receba um caractere, verifique se é uma vogal.?
--> use ==>> verificarLetra(char letra)
RETORNE:
        UM   PARA  VOGAL
       ZERO  PARA NÃO VOGAL
*/

#include <iostream>
#include <ctype.h>
using namespace std; 


int verificarLetra(char letra); //Declaração da Função ou Protótipo

main()
{
  char letra;
  int resposta;
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\n\t\t ****  Programa Vogal  *** ";
  cout<<"\n\n Digite uma letra, descubra se é vogal  ";
  cin>>letra; 
  letra = toupper(letra); //transforma o caracter em maiúsculo
  resposta = verificarLetra(letra); //Chamando a função
  if (resposta==1)
      cout<<"\n\n Você Digitou uma: VOGAL";
  else
     cout<<"\n\n O que você Digitou: NÃO ERA VOGAL";
  cout<<"\n\n\n\n";
 }
//Área de Implementação das Funções
int verificarLetra(char letra)
  {
   if ((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U')) {
       return 1;	
   } else{    
      return 0; 
         }
        
}
 
  

