#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int bubbleSort(int a[]);
int gerador(int a[], int n);

const int tamanho = 10;
int V[tamanho];

int main()
{
    int x;
    cout << "Digite o numero maximo da geracao aleatoria: " << endl;
    cin >> x;
    gerador(V, x);

    cout << "Esse e seu Vetor desorganizado: " << endl;

    for(int i = 0; i < tamanho - 1; i++)
    {
        cout << V[i] << " "; 
    }

    cout << endl << "Esse e eseu vetor organizado: " << endl;

    bubbleSort(V);
}

int gerador(int a[], int n)
{
    srand(time(0))
    int k;
    for(int i = 0; i < tamanho; i++)
    {
        k = rand() % n + 1;
        a[i] = k;
    }

    return 0;
}

int bubbleSort(int a[])
{
    int s;
    for(int m = 0; m < tamanho - 1; m++)
    {
        for(int p = 0; p < tamanho - 1; p++)
        {
            if(a[p] > a[p + 1])
            {
                s = a[p + 1];
                a[p + 1] = a[p];
                a[p] = s;
            }
        }
    }

    for(int i = 0; i < tamanho - 1; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}