/*
FUF que receba um caractere, verifique se � uma vogal.?
--> use ==>> verificarLetra(char letra)
RETORNE:
        UM   PARA  VOGAL
       ZERO  PARA N�O VOGAL
*/

#include <iostream>
#include <ctype.h>
using namespace std; 


int verificarLetra(char letra); //Declara��o da Fun��o ou Prot�tipo

main()
{
  char letra;
  int resposta;
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\n\t\t ****  Programa Vogal  *** ";
  cout<<"\n\n Digite uma letra, descubra se � vogal  ";
  cin>>letra; 
  letra = toupper(letra); //transforma o caracter em mai�sculo
  resposta = verificarLetra(letra); //Chamando a fun��o
  if (resposta==1)
      cout<<"\n\n Voc� Digitou uma: VOGAL";
  else
     cout<<"\n\n O que voc� Digitou: N�O ERA VOGAL";
  cout<<"\n\n\n\n";
 }
//�rea de Implementa��o das Fun��es
int verificarLetra(char letra)
  {
   if ((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U')) {
       return 1;	
   } else{    
      return 0; 
         }
        
}
 
  

