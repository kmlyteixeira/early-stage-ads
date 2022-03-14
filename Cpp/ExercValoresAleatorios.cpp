/*GERANDO NUMEROS ALEATÓRIOS
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
   cout<<"\n-----GERANDO NÚMEROS ALEATÓRIOS----";
   cout<<"\n-----------------------------------\n\n";  
   srand(time(NULL));
   
   	for(i=0; i<TAM;i++)
     { 
      // gera um número aleatório entre 1 e 100 (inclusive)
       num =(rand()%100)+1; // fórmula
       cout << "   " << num;
     }

   
   cout<<"\n\n\n";

}
