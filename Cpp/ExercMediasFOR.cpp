/*FUP que leia a idade, o sexo e a altura de N pessoas, onde N pessoas
deverá ser o limite da repetição do FOR e deverá ser solicitado ao usuário. 
Após a entrada dos valores o prgrama deverá informar:

A média de todas as idades e alturas.
A média das alturase das idades das mulheres e dos homens.
A quantidade demulheres acima de 1,70 m.
A quantidade de homens acima de 1,90 m.
A quantidade de homens abaixo de 1,70 m.
Amaior e menor altura de todos.
Amaior e menor idadede todos
A maior altura e maior idade dos homens.
A menoraltura e menor idade das mulheres.
Aluna: Kemily Teixeira
Data: 21/03/2022
*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

main()
{		
	int n, idadeFem, idadeMasc, acumIdadeFem, acumIdadeMasc,contIdadeFem,
		contIdadeMasc,contHFem,contHMasc,contFem170,contMasc170,contMasc190,maiorIdadeFem,menorIdadeFem,maiorIdadeMasc,menorIdadeMasc;
	char sexo;
	float alturaFem, alturaMasc, acumHFem, acumHMasc, mediaIdades, 
		  mediaH, mediaHMasc, mediaIdadeMasc,mediaHFem,mediaIdadeFem;
	
	setlocale(LC_ALL, "Portuguese"); 	
	system ("color B");						
	
	cout<< "\n\t-------------------------------------------";
	cout<< "\n\t--------------PROGRAMA MÉDIAS--------------";
	cout<< "\n\t-------------------------------------------\n\n";
	
	cout<< "\n\tQual a quantidade de pessoas que deseja informar? \t";
	cin>> n;
	
	for (int i=1;i<=n;i++){
		cout<< "\n\t Comece informando o sexo [F]Fem [M]Masc: \t";
		cin>> sexo;
		sexo = toupper(sexo);
		
			if (sexo=='F'){
				cout<< "\n\t Agora insira a idade desta mulher: \t";
				cin>> idadeFem;
				acumIdadeFem = acumIdadeFem + idadeFem;
				contIdadeFem++;
				
				cout<< "\n\t E por último... insira a altura: \t";
				cin>> alturaFem;
				acumHFem = acumHFem + alturaFem;
				contHFem++;
					if(alturaFem> 1.70){
						contFem170++;
					}
				
			}
					if(sexo=='M') {
						cout<< "\n\t Agora insira a idade deste homem: \t";
						cin>> idadeMasc;
						acumIdadeMasc = acumIdadeMasc + idadeMasc;
						contIdadeMasc++;
					
					cout<< "\n\t E por último... insira a altura: \t";
					cin>> alturaMasc;
					acumHMasc = acumHMasc + alturaMasc;
					contHMasc++;
						if(alturaMasc<1.70){
							contMasc170++;
							} if(alturaMasc>1.90){
								contMasc190++;
								}			 
					}
					
		if((i==1)&&(sexo=='F')){
				maiorIdadeFem = idadeFem;
				menorIdadeFem = idadeFem;
					} if (maiorIdadeFem<idadeFem){
						maiorIdadeFem=idadeFem;
						} if (menorIdadeFem>idadeFem){
							menorIdadeFem=idadeFem;
							}
							
			if((i==1)&&(sexo=='M')){
				maiorIdadeMasc = idadeMasc;
				menorIdadeMasc = idadeMasc;
					} if (maiorIdadeMasc<idadeMasc){
						maiorIdadeMasc=idadeMasc;
						} if (menorIdadeMasc>idadeMasc){
							menorIdadeMasc=idadeMasc;
							}
	}
	
	mediaIdades = (acumIdadeMasc + acumIdadeFem)/n;
	mediaH = (acumHFem + acumHMasc)/n;
	
	mediaHMasc = acumHMasc/contHMasc;
	mediaIdadeMasc = acumIdadeMasc/contIdadeMasc;
	
	mediaHFem = acumHFem/contHFem;
	mediaIdadeFem = acumIdadeFem/contIdadeFem;
	
	cout<< "\n\t A média de todas as idades é " << mediaIdades;
	cout<< "\n\t E a média de todas as alturas é " << mediaH ;
	
	cout<< "\n\n\t A média da idade dos homens é " << mediaIdadeMasc;
	cout<< "\n\t e a média de suas alturas é " << mediaHMasc;
	
	cout<< "\n\n\t A média da idade das mulheres é " << mediaIdadeFem;
	cout<< "\n\t e a média de suas alturas é " << mediaHFem;
	
	cout<< "\n\n\t A quantidade de mulheres com altura acima de 1.70 é: " << contFem170;
	cout<< "\n\t A quantidade de homens com altura abaixo de 1.70 é: " << contMasc170;
	cout<< "\n\t A quantidade de homens com altura acima de 1.90 é: " << contMasc190;
	
	cout<< "\n\n\t A maior idade entre os homens é: " << maiorIdadeMasc;
	cout<< "\n\t A menor idade entre os homens é: " << menorIdadeMasc;
	
	cout<< "\n\n\t A maior idade entre as mulheres é: " << maiorIdadeFem;
	cout<< "\n\t A menor idade entre as mulheres é: " << menorIdadeFem;
		
	
}
