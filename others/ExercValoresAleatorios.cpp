/*GERANDO NUMEROS ALEAT�RIOS
ALUNA: Kemily
Data: 14/03/2022
*/

#include <iostream>
#include<stdlib.h>
#include<time.h>

#define TAM 5
int num,i;

using namespace std;
 main()
{
   setlocale(LC_ALL, "Portuguese");
   cout<<"\n-----------------------------------";  
   cout<<"\n-----GERANDO N�MEROS ALEAT�RIOS----";
   cout<<"\n-----------------------------------\n\n";  
   srand(time(NULL));
   
   	for(i=0; i<TAM;i++)
     { 
      // gera um n�mero aleat�rio entre 1 e 100 (inclusive)
       num =(rand()%100)+1; // f�rmula
       cout << "   " << num;
     }

   
   cout<<"\n\n\n";

}
