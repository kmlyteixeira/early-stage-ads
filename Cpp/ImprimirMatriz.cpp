#include <windows.h>
#include <iostream>

using namespace std;

int const TAM = 3;
int matriz[TAM][TAM];
int col, lin;

void gotoxy(int x, int y)
{
    HANDLE hOut;
    COORD Position;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    Position.X = x;
    Position.Y = y;
    SetConsoleCursorPosition(hOut, Position);
}

main()
{
    setlocale(LC_ALL, "Portuguese");

    gotoxy(8, 3);
    cout << " 1ª Matriz ";

    // Leitura da 1a Matriz
    lin = 5;
    for (int i = 0; i < TAM; i++)
    {
        col = 10;
        for (int j = 0; j < TAM; j++)
        {
            gotoxy(col, lin);
            cin >> matriz[i][j];
            col = col + 3;
        }
        lin = lin + 1;
        col = 10;
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j)
            {
                cout << matriz[i][j];
            }
        }
    }

    system("PAUSE");
}