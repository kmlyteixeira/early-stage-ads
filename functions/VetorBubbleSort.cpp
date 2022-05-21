/*FUP que peça 15 numeros e imprima o maior deles
AULA: 11/04/2022
ALUNA: Kemily Teixeira
*/

#include <iostream>
#include <iomanip>
#define TAM 10
using namespace std;

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

main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color B");

    int number[TAM], numeroMaior = 0, numeroMenor = 0;

    cout << "\n\n\n\t =======================================";
    cout << "\n\t =======IMPRIMINDO O MAIOR NÚMERO=======";
    cout << "\n\t =========COM VALORES ALEATÓRIOS========\n\n";

    for (int i = 0; i < TAM; i++)
    {
        number[i] = (rand() % 30) + 1;
    }

    bubble_sort_cresc(number, TAM);

    cout << "ORDEM CRESCENTE: ";
    for (int i = 0; i < TAM; i++)
    {
        cout << " | " << number[i];
    }

    cout << "\n\n";
    cout << "ORDEM DECRESCENTE: ";
    bubble_sort_desc(number, TAM);

    for (int i = 0; i < TAM; i++)
    {
        cout << " | " << number[i];
    }

    for (int i = 0; i < TAM; i++)
    {
        if (i == 0)
        {
            numeroMaior = number[i];
            numeroMenor = number[i];
        }
        else if (number[i] > numeroMaior)
        {
            numeroMaior = number[i];
        }
        else if (number[i] < numeroMenor)
        {
            numeroMenor = number[i];
        }
    }

    cout << "\n\n O maior numero é >>> " << numeroMaior;
    cout << "\n O menor número é >>> " << numeroMenor;
}
