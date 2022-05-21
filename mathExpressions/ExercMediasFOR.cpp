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
	int n = 0, 
	idadeFem = 0, 
	idadeMasc = 0, 
	acumIdadeFem = 0, 
	acumIdadeMasc = 0,
	contIdadeFem = 0,
	contIdadeMasc = 0,
	contHFem = 0,
	contHMasc = 0,
	contFem170 = 0,
	contMasc170 = 0,
	contMasc190 = 0,
	maiorIdadeFem = 0,
	menorIdadeFem = 0,
	maiorIdadeMasc = 0,
	menorIdadeMasc = 0,
	menorIdadeGeral = 0,
	maiorIdadeGeral = 0,
	x = 0,
	y = 0;
	
	char sexo;
	
	float 
	alturaFem = 0, 
	alturaMasc = 0, 
	acumHFem = 0, 
	acumHMasc = 0, 
	mediaIdades = 0, 
	mediaH = 0, 
	mediaHMasc = 0, 
	mediaIdadeMasc = 0,
	mediaHFem = 0,
	mediaIdadeFem = 0,
	maiorHFem = 0,
	menorHFem = 0,
	maiorHMasc = 0,
	menorHMasc = 0,
	menorHGeral = 0,
	maiorHGeral = 0;
	
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);  	
	system ("color B");						
	
	cout<< "\n\t-------------------------------------------";
	cout<< "\n\t--------------PROGRAMA MÉDIAS--------------";
	cout<< "\n\t-------------------------------------------\n\n";
	
	cout<< "\n\tQual a quantidade de pessoas que deseja informar? \t";
	cin>> n;
	
	for (int i=1;i<=n;i++){
		cout<< "\n\t Informe o sexo  da "<<i<<"ª pessoa [F]Fem [M]Masc: \t";
		cin>> sexo;
		sexo = toupper(sexo);
			if (sexo=='F'){
				x++;
				do{
					cout<< "\n\t Insira a idade desta mulher: \t";
					cin>> idadeFem;
					if((idadeFem<0)||(idadeFem>150))
						cout<< "\n\t ERRO: Idade INVÁLIDA! Tente novamente...";
				} while ((idadeFem<0)||(idadeFem>150));
				
				do{
					cout<< "\n\t Agora, informe a altura: \t";
					cin>> alturaFem;
					if((alturaFem<0)||(alturaFem>3))
						cout<< "\n\t ERRO: Altura INVÁLIDA! Tente novamente...";
				} while ((alturaFem<0)||(alturaFem>3));
			}
					
			if(sexo=='M'){
				y++;
				do{
					cout<< "\n\t Agora insira a idade deste homem: \t";
					cin>> idadeMasc;
					if((idadeMasc<0)||(idadeMasc>150))
						cout<< "\n\t ERRO: Idade INVÁLIDA! Tente novamente...";
				} while ((idadeMasc<0)||(idadeMasc>150));
				
				do{
					cout<< "\n\t E por último... insira a altura: \t";
					cin>> alturaMasc;
					if((alturaMasc<0)||(alt\/*$$*/uraMasc>3))
						cout<< "\n\t ERRO: Altura INVÁLIDA! Tente novamente...";
				} while ((alturaMasc<0)||(alturaMasc>3));
			}
					
		acumIdadeFem = acumIdadeFem + idadeFem;
		contIdadeFem++;
		acumHFem = acumHFem + alturaFem;
		contHFem++;
			if(alturaFem> 1.70){
				contFem170++;
			}
					
		acumIdadeMasc = acumIdadeMasc + idadeMasc;
		contIdadeMasc++;		
		acumHMasc = acumHMasc + alturaMasc;
		contHMasc++;
		
			if((alturaMasc<1.70)&&(alturaMasc!=0)){
				contMasc170++;
			} 
			if(alturaMasc>1.90){
				contMasc190++;
			}	
					
		if((i==1)&&(sexo=='F')){
			maiorIdadeFem = idadeFem;
			menorIdadeFem = idadeFem;
				} 
				if (maiorIdadeFem<idadeFem){
					maiorIdadeFem=idadeFem;
				}
					if (menorIdadeFem>idadeFem){
					    menorIdadeFem=idadeFem;
					}
							
		if((i==1)&&(sexo=='M')){
			maiorIdadeMasc = idadeMasc;
			menorIdadeMasc = idadeMasc;
				} 
				if (maiorIdadeMasc<idadeMasc){
					maiorIdadeMasc=idadeMasc;
				}
					if (menorIdadeMasc>idadeMasc){
						menorIdadeMasc=idadeMasc;
					}
					
		if((i==1)&&(sexo=='F')){
			maiorHFem = alturaFem;
			menorHFem = alturaFem;
				} 
				if (maiorHFem<alturaFem){
					maiorHFem=alturaFem;
				}
					if (menorHFem>alturaFem){
					    menorHFem=alturaFem;
					}
							
		if((i==1)&&(sexo=='M')){
			maiorHMasc = alturaMasc;
			menorHMasc = alturaMasc;
				} 
				if (maiorHMasc<alturaMasc){
					maiorHMasc=alturaMasc;
				}
					if (menorHMasc>alturaMasc){
						menorHMasc=alturaMasc;
					}
	}
	
	if(maiorHMasc>maiorHFem){
		maiorHGeral = maiorHMasc;
	} else {
		maiorHGeral = maiorHFem;
	}
	
	if(menorHMasc<menorHFem){
		menorHGeral = menorHMasc;
	} else {
		menorHGeral = menorHFem;
	}
 
 	if(maiorIdadeMasc>maiorIdadeFem){
		maiorIdadeGeral = maiorIdadeMasc;
	} else {
		maiorIdadeGeral = maiorIdadeFem;
	}
	
	if(menorIdadeMasc<menorIdadeFem){
		menorIdadeGeral = menorIdadeMasc;
	} else {
		menorIdadeGeral = menorIdadeFem;
	}	
	
	mediaIdades = (acumIdadeMasc + acumIdadeFem)/n;
	mediaH = (acumHFem + acumHMasc)/n;
	
	mediaHMasc = acumHMasc/contHMasc;
	mediaIdadeMasc = acumIdadeMasc/contIdadeMasc;
	
	mediaHFem = acumHFem/contHFem;
	mediaIdadeFem = acumIdadeFem/contIdadeFem;
	
	cout<< "\n\n\n\t\t ====RESULTADOS GERAIS==== ";
	cout<< "\n\t A média de todas as idades é " << mediaIdades;
	cout<< "\n\t A média de todas as alturas é " << mediaH;
	cout<< "\n\t A pessoa mais baixa de todas mede: " << menorHGeral;	
	cout<< "\n\t A pessoa mais alta de todas mede: " << maiorHGeral;
	cout<< "\n\t A pessoa mais nova de todas tem: " << menorIdadeGeral << " anos";
	cout<< "\n\t A pessoa mais velha de todas tem: " << maiorIdadeGeral << " anos";
	
	if(x != 0){
		cout<< "\n\n\n\t\t ====RESULTADOS específicos MULHERES==== ";
		cout<< "\n\t A média da idade das mulheres é " << mediaIdadeFem;
		cout<< "\n\t A média de suas alturas é " << mediaHFem;
		cout<< "\n\t A quantidade de mulheres com altura acima de 1.70 é: " << contFem170;
		cout<< "\n\t A maior idade entre as mulheres é: " << maiorIdadeFem;
		cout<< "\n\t A menor idade entre as mulheres é: " << menorIdadeFem;
		cout<< "\n\t A mulher mais baixa mede: " << menorHFem;	
		cout<< "\n\t A mulher mais alta mede: " << maiorHFem;
	}
	
	if(y != 0){
		cout<< "\n\n\n\t\t ====RESULTADOS específicos HOMENS==== ";
		cout<< "\n\t A média da idade dos homens é " << mediaIdadeMasc;
		cout<< "\n\t e a média de suas alturas é " << mediaHMasc;
		cout<< "\n\t A quantidade de homens com altura abaixo de 1.70 é: " << contMasc170;
		cout<< "\n\t A quantidade de homens com altura acima de 1.90 é: " << contMasc190;
		cout<< "\n\t A maior idade entre os homens é: " << maiorIdadeMasc;
		cout<< "\n\t A menor idade entre os homens é: " << menorIdadeMasc;
		cout<< "\n\t O homem mais alto mede: " << maiorHMasc;
		cout<< "\n\t O homem mais baixo mede: " << menorHMasc;
	}	
}
