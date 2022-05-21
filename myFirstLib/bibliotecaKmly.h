/*
My first Lib CPP
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

//Função Valida CPF
void validaCpf(char codCpf[10]){
	int  div, verificador1, verificador2, aux[10], aux2[10], mult;
	//Transformando valor recebido em int
    for(int i=0; i<11;i++){
        aux[i] = codCpf[i] - '0';
        cout << " " << aux[i];
    }
    
    //DEFININDO 1º DIG VERIFICADOR
    //Primeiro passo: multiplica-se cada um dos numeros, da direita para a esquerda por numeros crescentes a partir de 2
    //e armazena os resultador em uma soma 
	int j=10;
    for(int i=0; i<9; i++){
    	mult = aux[i]*j;
    	j--;
    	soma = soma + mult;
	}
    //Segundo passo: pega o modulo da soma por 11
        div = soma%11;
        
    //Verificação para deterinar 1º dig verificador, se menor que 2 --> 0, se não ---> 11 - resultado anterior
        if(div<2){
            verificador1 = 0;
        } else if (div>=2){
            verificador1 = 11-div;
        }
        
    //penultima posição do vetor recebe o 1º digito verificador
    for(int i=0; i<11;i++){
    	if(i==9){
        	aux2[9] = verificador1;
		} else
			aux2[i] = codCpf[i] - '0';
    }
	
	mult=0;
	soma=0;
	div = 0;
	
    //DEFININDO 2º DIG VERIFICADOR
    j=11;
    for(int i=0; i<10; i++){
    	mult = aux2[i]*j;
    	j--;
    	soma = soma + mult;
	}
	div = soma%11;
	
	if(div<2){
            verificador2 = 0;
        } else if (div>=2){
            verificador2 = 11-div;
        }
        
    aux2[10] = verificador2;

	if((aux[9] == aux2[9])&&(aux[10] == aux2[10]))
	    cout << "\n CPF VÁLIDO!";  
	else if ((aux[9] != aux2[9])&&(aux[10] != aux2[10]))
	    cout << "\n CPF INVÁLIDO!";
}

//Função Jogo CARA ou COROA
int CaraOuCoroa (int qtdGiros, int numSorte, char aposta){
    char sort;
    int acumSorte;

    for(int i=1; i<=qtdGiros; i++){
        acumSorte = acumSorte + ((i*numSorte)-qtdGiros);
    }

    if(acumSorte%2==0){
        sort = 'A'; //CARA
    } else if (acumSorte%2!=0){
        sort = 'C'; //COROA
    }

    if(sort == aposta){
        return 0;
    } else if (sort != aposta){
        return 1;
    }
}
