#include <iostream>

using namespace std;

int bubbleSort(int a[]);
int bubbleSortMelhor(int a[]);
int gerador(int a[], int b[], int n);
int imprimir(int a[]);

const int tamanho = 500;
int Vet1[tamanho];
int Vet2[tamanho];

int main()
{
    int x = 100;

    cout << "Digite o numero maximo da geracao aleatoria: " << endl;

    gerador(Vet1, Vet2, x);

    cout << "Esse e seu Vetor 1 desorganizado: " << endl;

    for(int i = 0; i < tamanho; i++)
    {
        cout << Vet1[i] << " "; 
    }

    cout << endl << "Esse e seu Vetor 2 desorganizado: " << endl;

    for(int i = 0; i <  tamanho; i++)
    {
        cout << Vet2[i] << " "; 
    }

    cout << endl << "Esse e eseu vetor 1 organizado por bubbleSort padrao: " << endl;

    bubbleSort(Vet1);
    imprimir(Vet1);

    cout << endl << "Esse e eseu vetor 2 organizado por bubbleSort melhor: " << endl;

    bubbleSortMelhor(Vet2);
    imprimir(Vet2);
}

int gerador(int a[], int b[], int n)
{
    int k;
    for(int i = 0; i < tamanho; i++)
    {
        k = rand() % n + 1;
        a[i] = k;
        b[i] = k;
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

    return 0;
}

int bubbleSortMelhor(int a[])
{
    int s;
    int flag = 1;
    int c = 1;
    while(flag != 0)
    {
        for(int m = 0; m < tamanho - 1; m++)
        {
            c = 1;
            for(int p = 0; p < tamanho - c; p++)
            {
                if(a[p] > a[p + 1])
                {
                    s = a[p + 1];
                    a[p + 1] = a[p];
                    a[p] = s;
                    c++;
                }
            }

            if(c == 1)
            {
                flag = 0;
            }
        }
    }

    return 0;
}

int imprimir(int a[])
{
    for(int i = 0; i < tamanho; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}