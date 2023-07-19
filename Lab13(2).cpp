#include <iostream>
#include <ctime>
#include <random>

using namespace std;

const int tam = 100;
int M[tam];
int ordenar(int a[], int n);
int armazenar(int a[], int n);
int buscar(int a[], int k);

int main()
{
    int k;

    armazenar(M, tam);
    ordenar(M, tam);

    for(int i = 0; i < tam; i++)
    {
        cout << M[i] << " " << endl;
    }

    cout << "Digite uma chave para ser procurada: " << endl;
    cin >> k;

    buscar(M, k);

    if(buscar(M, k) == -1)
    {
        cout << "Sua chave nao foi encontrada" << endl;
    }
    if(buscar(M, k) != -1)
    {
        cout << "Sua chave foi encontrada na posicao: " << buscar(M,k) + 1 << endl;
    }
}

int armazenar(int a[], int n)
{
    int x;

    srand(time(0));

    for(int i = 0; i < n; i++)
    {
        x = rand() % 100;
        a[i] = x;
    }

    return 0;
}

int ordenar(int a[], int n)
{
    int storage;
    for(int m = 0; m < n - 1; m++)
    {
        for(int p = 0; p < n - 1; p++)
        {
            if(a[p] > a[p + 1])
                {
                    storage = a[p];
                    a[p] = a[p+1];
                    a[p+1] = storage;
                }
            }
        }

    return 0;
}

int buscar(int a[], int n)
{
    int ini = 0, meio, fim = tam - 1;
        while(ini < fim)
        {
            meio = (ini + fim) / 2;

            if(a[meio] == n)
            {
                ini = fim;
                return meio;
            }
            
            if(a[meio] > n)
            {
                fim = meio;
            }
            if(a[meio] < n)
            {
                ini = meio;
            }   
        }

    return -1;
} 