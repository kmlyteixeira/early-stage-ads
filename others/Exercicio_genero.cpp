/*FUP que solicite uma letra informando o SEXO e imprima as mensagens correspondentes
EXERCICIO AULA 02/03/2022
ALUNA: Kemily Teixeira
*/

#include <iostream> 

using namespace std;
main()
{
    char sexo;

    setlocale(LC_ALL, "Portuguese");
    cout << "\n\t--------PESQUISA DE GENERO--------";
    cout << "\n\t-----------[F]FEMININO------------";
    cout << "\n\t-----------[M]MASCULINO-----------";
    cout << "\n\t-----------[N]NAO INFORMAR--------";

    cout << "\n\n\n\t Informe seu SEXO: \t";
    cin >> sexo;
    sexo = toupper(sexo);
    
    if (sexo == 'F')
    {
        cout << "\n\n\t SEXO [FEMININO] SELECIONADO";
    }
    else if (sexo == 'M')
    {
        cout << "\n\n\t SEXO [MASCULINO] SELECIONADO";
    }
    else if (sexo == 'N')
    {
        cout << "\n\n\t SEXO NAO INFORMADO";
    }
    else
    {
        cout << "\n\n\t FAVOR INFORMAR UMAS DAS OPCOES \
               \n\n\t [F] ou [M] ou [N]";
    }
    cout << "\n\n\n\n\n\n";
}
