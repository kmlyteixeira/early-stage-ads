/*
FUF que receba um caractere, verifique se � uma vogal.?
--> use ==>> verificarLetra(char letra)
*/

#include <iostream>
#include <ctype.h>
using namespace std; 
char letra;
void verificarLetra(char letra); //Declara��o da Fun��o ou Prot�tipo
main()
{
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\n\t\t ****  Programa Vogal  *** ";
  cout<<"\n\n Digite uma letra, descubra se � vogal  ";
  cin>>letra; 
  letra = toupper(letra); //transforma o caracter em mai�sculo
  verificarLetra(letra); //Chamando a fun��o
  cout<<"\n\n\n\n";
 }
//�rea de Implementa��o das Fun��es
void verificarLetra(char letra)
  {
   if ((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U')) {
     	cout<<"\n\n Voc� Digitou uma: VOGAL";
   } else{    
           cout<<"\n\n O que voc� Digitou: N�O ERA VOGAL";
         }
}
 
  

