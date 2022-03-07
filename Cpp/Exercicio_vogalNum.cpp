/*FUP que leia um caracter, verifique e imprima se o caracter
é uma vogal ou é um número, ignorando os demais caracteres
EXERCICIO AULA 02/03/2022
ALUNA: Kemily Teixeira
*/

#include <iostream>
#include <ctype.h>

using namespace std;
main()
{
   char caracter;

   setlocale(LC_ALL, "Portuguese");
   cout << "\n\t-----------------------------------------------------";
   cout << "\n\t--------VERIFIQUE SE E UMA VOGAL ou UM NUMERO--------";
   cout << "\n\t-----------------------------------------------------";

   cout << "\n\n\n\t Insira um caracter:\t";
   cin >> caracter;
   caracter = toupper(caracter);
   
   if ((caracter == 'A') ||
       (caracter == 'E') || 
       (caracter == 'I') || 
       (caracter == 'O') || 
       (caracter == 'U'))
   {
      cout << "\n\n\t Seu caracter e uma VOGAL!";
   }
   else if ((caracter == '9') ||
            (caracter == '8') ||
            (caracter == '7') ||
            (caracter == '6') ||
            (caracter == '5') ||
            (caracter == '4') ||
            (caracter == '3') ||
            (caracter == '2') ||
            (caracter == '1') ||
            (caracter == '0'))
   {
      cout << "\n\n\t Seu caracter e NUMERICO!";
   }
   else
   {
      cout << "\n\n\t Voce nao inseriu nenhum valor valido para esta verificacao!";
   }
   cout << "\n\n\n\n\n\n";
}
