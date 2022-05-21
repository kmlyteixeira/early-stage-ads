#include <iostream>
#include <ctype.h>

using namespace std;

void verificaVogal (char letra){
	if ((letra == 'A') ||
       (letra == 'E') || 
       (letra == 'I') || 
       (letra == 'O') || 
       (letra == 'U'))
   {
      cout << "\n\n\t Seu caracter é uma VOGAL!";
   } else 
   {
   		cout << "\n\n\t Seu caracter não é uma VOGAL!";
   }
}

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
   
   verificaVogal(caracter);
}
