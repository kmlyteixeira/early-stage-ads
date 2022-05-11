/*
MINHA BIBLIOTECA FOFA

Biblioteca de funções C++
By: Kemily (2022)

Para utilizar: #include "bibliotecaKmly.h"

*/

using namespace std;

//Função para imprimir Tabuada ==============================================================
void imprimirTabuada (int number){
	int i = 0;
	do{
		cout<< "\n\t\t" <<number<< " X " <<i<< " = " <<number*i<<"\n";
		i++;
	} while (i<=10);		
}

//Função maior entre 2 numeros ==============================================================
void imprimirMaiorNumero(int firstNumber, int secondNumber){
	if(firstNumber>secondNumber){
		cout<< "\n\n\n\t " <<firstNumber<< " é o maior valor!";
	} else {
		cout<< "\n\n\n\t " <<secondNumber<< " é o maior valor!";
	}
}

//Função Verifica se letra é vogal ==========================================================
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

//Função Bubble Sort - crescente ===========================================================
void bubble_sort_cresc(int vetor[], int tam)
{
    int aux;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

//Função Bubble Sort - decrescente ========================================================
void bubble_sort_desc(int vetor[], int tam)
{
    int aux;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

//Função verifica se é Par ou Impar ======================================================
int parOuImpar (int num)
{
    if (num %2==0)
    	return 1; // Retorna 1 para os pares
    else
    	return 0; //Retorna 0 para os ímpares
}

//Função para Calcular conforme o sinal ==================================================
float calcular (float num1, float num2, char sinal)
{
	if (sinal =='+')
		return (num1 + num2);
	if (sinal == '-')
		return (num1 - num2);
	if (sinal == '*')
		return (num1 * num2);
	if (sinal == '/')
		return (num1 / num2);
}

//Função verifica se a data é válida
int verificaData (int ano,int mes,int dia){
	if((ano>=1)&&(ano<=9999)){
		if ((mes>=1)&&(mes<=12)){
			if ((mes=2)&&(ano%4==0)&&(dia<=29)){
				return 1;
			} else if ((mes=2)&&(ano%4!=0)&&(dia<=28)){
				return 1;
			} else if (((mes=4)||(mes=6)||(mes=9)||(mes=11))&&(dia<30)){
				return 1;
			} else if (dia<31){
				return 1;
			} else {
				return 0;
			}	
		} else {
			return 0;
		}
	} else {
		return 0;
	}
}
