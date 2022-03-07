#include <iostream>
#include <iomanip>
using namespace std;

main()
{	
	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, nota3, nota4, media;
	
	cout << fixed << setprecision(2); 		
	system ("color B");						
	
	cout<< "\n\n\t ***CALCULANDO A MÉDIA DAS NOTAS *** ";
	cout<< "\n\n\t Informe a 1ª nota: ";
	cin>> nota1;
	cout<< "\n\t Informe a 2ª nota: ";
	cin>> nota2;
	cout<< "\n\t Informe a 3ª nota: ";
	cin>> nota3;
	cout<< "\n\t Informe a 4ª nota: ";
	cin>> nota4;
	
	media = (nota1+nota2+nota3+nota4)/4;
	cout<< "\n\n\t A média das notas é: " << media;
	
if (media>=7){
	cout<<"\n\n\t Parabéns, você foi APROVADO!";
} else if ((media>=4)&&(media<7))  {
	cout<<"\n\n\t Você está em RECUPERAÇÃO!";
	} else {
		cout<<"\n\n\t Você foi REPROVADO";
		}
	
}
