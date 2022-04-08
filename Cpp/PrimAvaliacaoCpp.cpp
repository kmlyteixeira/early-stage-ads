/*
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores
ALUNA: Kemily Teixeira da Rosa
Data: 04/04/2022
(Altere a data conforme a entrega)
*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h> // Para usar o getch();

int i, x = 0, op, numero = 0, inicio, fim, contador, aux, nprimo, positivo, negativo;
char escolha, repetir, um, dois, tres, quatro, cinco, seis, sete, oito, opcao;
bool valid = false;

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    system("cls");
    cout << fixed << setprecision(2);

    cout << "ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO \n";
    cout << "INDICADORES: \n";
    cout << "1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
    cout << "2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
    cout << "3. Utiliza operações aritméticas em programas.\n";
    cout << "4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
    cout << "5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
    cout << "6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
    cout << "7. Utiliza vetores para solução de problemas computacionais em determinado contexto. \n";

    do
    {
        system("cls");
        cout << "\n ====================================================================================";
        cout << "\n [1] Questão 01 - Invetigação Criminal";
        cout << "\n [2] Questão 02 - Será liberada no dia 06/04/2022";
        cout << "\n [3] Questão 03 - Será liberada no dia 11/04/2022";
        cout << "\n [4] Questão 04 - Será liberada no dia 11/04/2022";
        cout << "\n [5] Questão 05 - Será liberada no dia 13/04/2022";
        cout << "\n [6] Questão 06 - Será liberada no dia 13/04/2022";
        cout << "\n [7] Questão 07 - Números Primos";
        cout << "\n [8] FIM.";
        cout << "\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
        cin >> op;
        switch (op)
        {
        case 1:
        {
            cout << "\n ========================================";
            cout << "\n == QUESTÃO 01 - INVESTIGAÇÃO CRIMINAL ==";
            cout << "\n ========================================";
            cout << "\n\n Você está pronto para responder ao questionário? [S]SIM [N]NÃO >>>\t ";
            cin >> opcao;
            opcao = toupper(opcao);
            if (opcao == 'N')
            {
                cout << "\n\n OK. Volte quando estiver pronto. Até mais!\n\n";
                system("pause");
                break;
            }
            do
            {
                cout << "\n\n >>> INVESTIGAÇÃO Assassinato na Casa Branca <<<";
                cout << "\n RESPONDA AS PERGUNTAS APENAS COM [S]SIM ou [N]NÃO";
                do
                {
                    cout << "\n\n >>> Trocou mensagens com a vítima? <<<";
                    cin >> um;
                    um = toupper(um);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Esteve no local do crime? <<<";
                    cin >> dois;
                    dois = toupper(dois);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> É parente ou reside perto da vítima? <<<";
                    cin >> tres;
                    tres = toupper(tres);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Devia algum valor para a vítima? <<<";
                    cin >> quatro;
                    quatro = toupper(quatro);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Trabalha ou trabalhou com a vítima? <<<";
                    cin >> cinco;
                    cinco = toupper(cinco);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Possui algum tipo de relacionamento amoroso com a vítima? <<<";
                    cin >> seis;
                    seis = toupper(seis);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Ficou feliz pelo destino fatídico da vítima? <<<";
                    cin >> sete;
                    sete = toupper(sete);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Possui algum tipo de arma de fogo? <<<";
                    cin >> oito;
                    oito = toupper(oito);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                cout << "\n\n Com base em suas respostas, você foi classificado como...";
                getch();

                if (positivo == 4)
                {
                    cout << "\n\n========================";
                    cout << "\n======= SUSPEITO =======";
                    cout << "\n========================\n\n";
                }
                else if ((positivo >= 5) && (positivo <= 7))
                {
                    cout << "\n\n========================";
                    cout << "\n== POSSÍVEL CRIMINOSO ==";
                    cout << "\n========================\n\n";
                }
                else if (positivo == 8)
                {
                    cout << "\n\n===========================";
                    cout << "\n==========ASSASSINO========";
                    cout << "\n===========================";
                    cout << "\n\n      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¯¯¯¦¦¦¦¦¦¦¯¯¯¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¯¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¯¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦++¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦++¦¦¦\n";
                    cout << "      ¦¦¦¦++¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦++¦¦¦¦\n";
                    cout << "      ¦¦¦¦++_____¦¦¦¦¦_____++¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¦¦¯¯¦¦_¦¦¯¯¦¦¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¯-+¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦+-¯¦¦\n";
                    cout << "      ¦¦_¦¦¦___¦¦¦¯¦¯¦¦¦___¦¦¦_¦¦\n";
                    cout << "      ¦¦¦¦_-+¦¦¦¦¦¦¦¦¦¦¦¦¦+-_¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¦¯-+++++++-¯¦¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦_¦¦¦+-------+¦¦¦_¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦_¦¦¦¦¦¦¦¦¦¦¦_¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¦¦¦_______¦¦¦¦¦¦¦¦¦¦\n";
                    cout << "      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n\n";
                }
                else
                {
                    cout << "\n\n===============================================";
                    cout << "\n== INOCENTE... Até que se prove ao contrário ==";
                    cout << "\n===============================================\n\n";
                }
                opcao = 'N';
            } while (opcao == 'S');
            system("pause");
            break;
        }
        case 2:
        {
            system("color 3");
            cout << "\n Opção 02";
            cout << " \n APERTE UMA TECLA";
            getch(); // ou system("pause");
            break;
        }

        case 7:
        {
            cout << "\n =================================";
            cout << "\n == QUESTÃO 07 - NÚMEROS PRIMOS ==";
            cout << "\n =================================";
            cout << "\n\n [P] - Verificar se é um Número Primo";
            cout << "\n [L] - Mostrar os Numeros Primos entre determinado intervalo";
            cout << "\n\n Selecione uma das opções acima >>>> \t";
            cin >> escolha;
            escolha = toupper(escolha);
            switch (escolha)
            {
            case 'P':
            {
                x = 0;
                do
                {
                    cout << "\n\n Insira um número para iniciarmos a verificação >>> \t";
                    cin >> numero;
                    for (int i = 1; i <= numero; i++)
                    {
                        if (numero % i == 0)
                        {
                            contador++;
                        }
                    }
                    if (contador == 2)
                    {
                        cout << "\n\n\t" << numero << " é um número PRIMO. \t";
                    }
                    else if (contador != 2)
                    {
                        cout << "\n\n\t" << numero << " não é um número PRIMO. \t";
                    }

                    cout << "\n\n >> Deseja verificar outro número? [S]SIM  [N]NÃO \t";
                    cin >> repetir;
                    repetir = toupper(repetir);
                    if (repetir == 'S')
                    {
                        x = 1;
                    }
                    else if (repetir == 'N')
                    {
                        x = 2;
                    }
                } while ((x == 0) || (x == 1));
                system("pause");
                break;
            }

            case 'L':
            {
                cout << "\n\n Insira um número para iniciar a seleção >>> \t";
                cin >> inicio;
                cout << "\n\n Agora defina um limite para sua seleção >>> \t";
                cin >> fim;
                for (int i = inicio; i <= fim; i++)
                {
                    if ((i == 0) || (i == 1))
                    {
                        nprimo = 1;
                    }
                    else if ((i != 0) || (i != 1))
                    {
                        for (int j = 2; j < i; j++)
                        {
                            if (i % j == 0)
                            {
                                nprimo = 1;
                            }
                        }
                        if (nprimo == 0)
                        {
                            cout << " " << i;
                        }
                    }
                    nprimo = 0;
                }
                system("pause");
                break;
            }
                system("pause");
                break;
            }
        }
        case 8:
        {
            system("color 8");
            cout << "\n\n Finalizando seu PROGRAMA! See you later :) \n ";
            getch();
            break;
        }
        default:
        {
            cout << "\n Escolha Inválida! Tente novamente >>> ";
            cin >> op;
            getch();
            break;
        }
        }

    } while (op != 8);
}
