#include <iostream>
#include <iomanip>

using namespace std;

int M[4][4] = {{7, 8, 11, 32}, {36, 45, 47, 49}, {52, 56, 57, 61}, {63, 80, 98, 99}};

int imprimeMatriz(int a[4][4]);
int Mk[4][4];
int multk(int k, int a[4][4], int b[4][4]);

int main()
{
    int k;
    imprimeMatriz(M);
    cout << "Digite uma constante k: " << endl;
    cin >> k;
    cout << "A matriz anterior multiplicada por k e: " << endl;
    multk(k, M, Mk);
    imprimeMatriz(Mk);
}

int imprimeMatriz(int a[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
           cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    return 0;
}

int multk(int k, int a[4][4], int b[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            b[i][j] = a[i][j] * k;
        }
    }

    return 0;
}