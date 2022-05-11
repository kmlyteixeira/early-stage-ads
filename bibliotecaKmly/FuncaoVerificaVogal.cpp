#include <iostream>
#include <ctype.h>
#include "bibliotecaKmly.h"

main()
{
   char caracter;

   setlocale(LC_ALL, "Portuguese");
   cout << "\n\t----------------------------------------";
   cout << "\n\t--------VERIFIQUE SE E UMA VOGAL--------";
   cout << "\n\t----------------------------------------";

   cout << "\n\n\n\t Insira um caracter:\t";
   cin >> caracter;
   caracter = toupper(caracter);
   
   verificaVogal(caracter);
}
