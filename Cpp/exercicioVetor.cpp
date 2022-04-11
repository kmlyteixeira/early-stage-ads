#include <iostream>
#include <iomanip>
#define TAM 5
using namespace std;

main()
{
    float nota[TAM], acum = 0, media = 0;
    int qntAcimaMedia = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color B");

    cout << "\n\t---------------------------------------------";
    cout << "\n\t------------VERIFICANDO NOTAS ---------------";
    cout << "\n\t---------------------------------------------";

    for (int i = 0; i < TAM; i++)
    {
        cout << "\n\n\t Informe a nota do " << i + 1 << "º aluno \n";
        cin >> nota[i];
        acum = acum + nota[i];
    }

    media = acum / TAM;

    for (int i = 0; i < TAM; i++)
    {
        if (nota[i] > media)
        {
            qntAcimaMedia++;
        }
    }

    cout << "\n\n A quantidade de alunos com nota acima da média é: " << qntAcimaMedia;
}