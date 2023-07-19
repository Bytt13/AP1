#include <iostream>
#include <ctime>
#include <random>

using namespace std;

const int tamanho = 500;
int M[tamanho];

int geradorArmazenador(int n, int a[]);
int pesquisaLinear(int a[], int k);

int main()
{
    int k;

    cout << "Digite uma chave: " << endl;
    cin >> k;
    geradorArmazenador(tamanho, M);
    pesquisaLinear(M, k);

    if(pesquisaLinear(M, k) == -1)
    {
        cout << "Sua chave nao foi encontrada" << endl;
    }
    else
    {
        cout << "Sua chave foi encontrada na posicao: " << pesquisaLinear(M, k) + 1 << endl;
    }

}

int geradorArmazenador(int n, int a[])
{
    srand(time(0));
    int x;

    for(int i = 0; i < n; i++)
    {
       x = rand() % n;
       a[i] = x;
    }

    return 0;
}

int pesquisaLinear(int a[], int k)
{
    for(int i = 0; i < tamanho; i++)
    {
        if(a[i] == k)
        {
            return i;
            break;
        }
    }

    return -1;
}