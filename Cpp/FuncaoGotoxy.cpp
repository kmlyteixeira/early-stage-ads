#include <windows.h>
#include <iostream>
using namespace std;

//função para fazer funcionar o gotoxy
void gotoxy(int x, int y)
{
    HANDLE hOut;
    COORD Position;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    Position.X = x;
    Position.Y = y;
    SetConsoleCursorPosition(hOut, Position);
}

//=========================================================
int const TAM = 3; //foi utilizado somente uma constante - para matriz quadrada

int mat[TAM][TAM], i, j, m, n, col, lin;

main()
{
    lin = 5;
    // posiciona o cursor na  coluna e linha indicados no gotoxy
    gotoxy(15, 2);
    cout << " Matriz ";

    //leitura da matriz
    for (i = 0; i < TAM; i++) // leitura da linha da matriz
    {
        col = 10;                 // posiciona o cursor na coluna desejada
        for (j = 0; j < TAM; j++) // leitura da coluna da matriz
        {

            gotoxy(col, lin); // para posicionar o cursor para ler o elemento da matriz
            cin >> mat[i][j];

            col = col + 6; // dá 6 espaços entre cada elemento da matriz
        }

        lin = lin + 1; //pular uma linha
    }

    gotoxy(8, 20);
    system("PAUSE"); // dá uma pausa na tela
}
