/*
FUF que receba um caractere, verifique se é uma vogal.?
--> use ==>> verificarLetra(char letra)
*/

#include <iostream>
#include <ctype.h>
using namespace std; 
char letra;
void verificarLetra(char letra); //Declaração da Função ou Protótipo
main()
{
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\n\t\t ****  Programa Vogal  *** ";
  cout<<"\n\n Digite uma letra, descubra se é vogal  ";
  cin>>letra; 
  letra = toupper(letra); //transforma o caracter em maiúsculo
  verificarLetra(letra); //Chamando a função
  cout<<"\n\n\n\n";
 }
//Área de Implementação das Funções
void verificarLetra(char letra)
  {
   if ((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U')) {
     	cout<<"\n\n Você Digitou uma: VOGAL";
   } else{    
           cout<<"\n\n O que você Digitou: NÃO ERA VOGAL";
         }
}
 
  

