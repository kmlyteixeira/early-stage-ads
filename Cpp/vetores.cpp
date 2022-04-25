// Exercicios com vetores - Aluna: Kemily Teixeira

// 1.Leia  um  vetor  com  10  idades. Calcule  e  imprima:  a  média  das  idades,  a quantidade de pessoas com idade superior e inferior àmédia calculada.
// 2.Leia  um  vetor  de  caracteres.  Pergunte  ao  usuário  qual  caractere  ele  deseja procurar no vetor. Pesquise e imprima a quantidade de vezes que o caractere desejado está no vetor.
// 3.Leia um vetor de N posições onde N deverá ser informado pelo usuário. Crie um  vetor  de  100números  e  aviseao  usuário  que  o  valor  de  N não  poderá ultrapassar 100(se passar deverá ser informado o erro e deverá ser solicitado um novo valor para N). Após calcule e imprima a soma de todos os números informados no vetor.
// 4.Preencha  dois  vetores  de  15  números  com  números  aleatórios,  porém  um vetor somente poderá receber números pares e o outro vetor poderá receber somente números ímpares.
// 5.Leia um vetor referente a notas de uma prova. Informe a maior nota, a menor notae a média das notas da prova. Imprima quais os alunos tiraram a menor nota e a maior nota. Para saber  quais alunos tiraram a nota  maior e menor imprima o índicedo vetor (equivalente ao número da chamada do aluno).

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>



using namespace std;
main()
{
	int op;	
	
	setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    cout << "\n\n ================================";
    cout << "\n ==== EXERCICIOS COM VETORES ====";
    cout << "\n ================================";

    cout << "\n\n [1] INDICES DE IDADES";
    cout << "\n [2] BUSCAR CARACTERES";
    cout << "\n [3] VALIDACAO DE VALOR N";
    cout << "\n [4] NUMEROS ALEATÓRIOS - PAR E IMPAR";
    cout << "\n [3] NOTAS DE PROVAS";
    cout << "\n Selecione sua opção >>> \t";
    cin >> op;

    switch (op)
    {
    case 1:
    {
        int idade[10],acum=0, media=0, menorMedia=0,maiorMedia=0;

        cout << "\n\n ============================";
        cout << "\n ==== INDICES DE IDADES ====";
        cout << "\n ===========================";

        for (int i = 0; i < 10; i++)
        {
            cout << "\n\n Insira a " <<i+1<< "º idade >>> ";
            cin >> idade[i];
            acum += idade[i];
        }

        media = acum/10;

        for (int i = 0; i < 10; i++)
        {
            if (idade[i] < media)
                menorMedia++;
            else if (idade[i] > media)
                maiorMedia++;
        }

        cout << "\n\n A média de todas estas idades é >>> " << media;
        cout << "\n A quantidade de pessoas com idades abaixo da média é >>> " << menorMedia;
        cout << "\n A quantidade de pessoas com idades acima da média é >>> " << maiorMedia;

        break;
    }
    case 2:
    {
        int qtd, acum, count, x, i;
        char opc;

        cout << "\n\n ===========================";
        cout << "\n ==== BUSCAR CARACTERES ====";
        cout << "\n ===========================";
        cout << "\n Quantas letras aleatórias deseja gerar? >>> ";
        cin >> qtd;

        char caracter[qtd];

        for (int i = 0; i < qtd; i++)       
        {
            caracter[i] = 97 + (char)(rand()%26);
            caracter[i] = toupper (caracter[i]);
        }
        cout << "\n\n >>> CARACTERES SORTEADOS <<<\n";
        for (int i = 0; i < qtd; i++)       
        {
            cout << " | " << caracter[i];
        }

        cout << "\n\n Qual letra especifica gostaria de buscar e verificar quantas X se repete? >>> ";
        cin >> opc;
        opc = toupper (opc);

        for (int i = 0; i < qtd; i++)       
        {
            if (opc == caracter[i])
            {
                count++;
            }
        }

        cout << "\n\t Seu caracter apareceu em nossa seleção " << count << " vezes!";
    }
    case 3:
    {
        int n, x=0, vetor[100], soma;

        cout << "\n\n ==============================";
        cout << "\n ==== VALIDACAO DE VALOR N ====";
        cout << "\n ==============================";
        do{
            cout << "\n\n Quantas posições terá a sua sequencia de números? >>>\t";
            cin >> n;
            if (n<=100&&n>0)
            {
                x = 1;
                for (int i = 0; i < n; i++)
                {
                    vetor[i] = (rand() % 200) + 1;
                    soma +=vetor[i];
                }

                for (int i = 0; i < n; i++)
                {
                    cout << " | " << vetor[i];
                }

                cout << "\n\n A soma de todos estes valores é: " << soma;

            } else if (n>100)
            {
                x=0;
                cout << "\n\n Desculpe ... Este sistema não suporta uma sequência com mais de 100 posições! Train again...";
            } else if (n<0)
            {
                x=0;
                cout << "\n\n Vamos trabalhar apenas com números positivos. OK? Train again...";
            }
        } while (x==0);
        break;
    }
    case 4:
    {
        int seqPar[15], seqImpar[15], random[30];

        cout << "\n\n ==========================================";
        cout << "\n ==== NUMEROS ALEATÓRIOS - PAR E IMPAR ====";
        cout << "\n ==========================================\n\n";

        for (int i = 0; i < 30; i++)
        {
            random[i] = (rand() % 60) + 1;
        }

        for (int i = 0; i < 30; i++)
        {
            if (random[i]%2==0)
            {
                seqPar[i] = //CONTINUAR AQUI
            }
            
            cout << " | " << random[i];
        }

        
        cout << "\n\n A sequência de pares é >>>  ";
        for (int i = 0; i < 15; i++)
        {
            cout << " | " << seqPar[i];
        }
        cout << "\n\n A sequência de impares é >>>  ";
        for (int i = 0; i < 15; i++)
        {
            cout << " | " << seqImpar[i];
        }
        break;
    }

    default:
        break;
    }
}