/* 
FUF que receba um n�mero e imprima a tabuada deste ?n�mero.       (void)?
*/
#include <iostream> // Incluir biblioteca

using namespace std; 
void imprimirTabuada(int num);// Declarando a Fun��o
int i,num;
main()
{ 
   setlocale(LC_ALL, "Portuguese"); 
   cout<<"\n\n\t ****  Programa Tabuada *** \n\n";
   cout<< "\n Digite um n�mero:  ";
   cin>>num;
   imprimirTabuada(num); //Chamando a Fun��o 
   cout<<"\n\n\n\n\n";
}
//===========================   
//Tabuada
void imprimirTabuada(int num) //Implementando a Fun��o
{
  for (i=0;i<10;i++)
    cout<<"\n "<<num<<"  *  " <<i<<"  =  "<<num*i;
}
