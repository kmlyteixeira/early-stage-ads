#include <iostream>
#include <iomanip>
using namespace std;

main()
{	
	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, nota3, nota4, media;
	
	cout << fixed << setprecision(2); 		
	system ("color B");						
	
	cout<< "\n\n\t ***CALCULANDO A M�DIA DAS NOTAS *** ";
	cout<< "\n\n\t Informe a 1� nota: ";
	cin>> nota1;
	cout<< "\n\t Informe a 2� nota: ";
	cin>> nota2;
	cout<< "\n\t Informe a 3� nota: ";
	cin>> nota3;
	cout<< "\n\t Informe a 4� nota: ";
	cin>> nota4;
	
	media = (nota1+nota2+nota3+nota4)/4;
	cout<< "\n\n\t A m�dia das notas �: " << media;
	
if (media>=7){
	cout<<"\n\n\t Parab�ns, voc� foi APROVADO!";
} else if ((media>=4)&&(media<7))  {
	cout<<"\n\n\t Voc� est� em RECUPERA��O!";
	} else {
		cout<<"\n\n\t Voc� foi REPROVADO";
		}
	
}
