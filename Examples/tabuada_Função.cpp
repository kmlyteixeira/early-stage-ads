/* 
FUF que receba um número e imprima a tabuada deste ?número.       (void)?
*/
#include <iostream> // Incluir biblioteca

using namespace std; 
void imprimirTabuada(int num);// Declarando a Função
int i,num;
main()
{ 
   setlocale(LC_ALL, "Portuguese"); 
   cout<<"\n\n\t ****  Programa Tabuada *** \n\n";
   cout<< "\n Digite um número:  ";
   cin>>num;
   imprimirTabuada(num); //Chamando a Função 
   cout<<"\n\n\n\n\n";
}
//===========================   
//Tabuada
void imprimirTabuada(int num) //Implementando a Função
{
  for (i=0;i<10;i++)
    cout<<"\n "<<num<<"  *  " <<i<<"  =  "<<num*i;
}
