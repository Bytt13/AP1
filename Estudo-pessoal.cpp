#include <iostream>
#include <iomanip>

using namespace std;

const int tamanho = 10;   
int crescente(int a[]);
int decrescente(int a[]);
int buscar(int a[], int n);
int Vetor[tamanho]; 
char c;
int chave;
int main()
{  
    cout << "Ola, digite uma sequencia de 10 numeros: " << endl;
    for(int i = 0; i < tamanho; i++)
    {
        cin >> Vetor[i];
    }

    cout << "Certo sua sequecia e:" << endl;
    for(int i = 0; i < tamanho; i++)
    {
        cout << Vetor[i] << " ";
    }

    cout << "Voce deseja organizar essa sequencia de modo crescente ou decrescente? (C/D)" << endl;
    cin >> c;

    if(c == 'c' || c == 'C')
    {
        crescente(Vetor);
    }

    if(c == 'd' || c == 'D')
    {
        decrescente(Vetor);
    }


    cout << "Voce quer escolher qual numero para procurar?" << endl;
    cin >> chave;
    buscar(Vetor, chave);

    cout << "O numero q vc escolheu esta na posicao: " << buscar(Vetor,chave) + 1 << endl;

    if(buscar(Vetor,chave) == -1)
    {
        cout << "O numero que voce escolheu naao pertence a sua sequencia" << endl;
    }
}

int crescente(int a[])
{
    int storage;
    for(int m = 0; m < tamanho - 1; m++)
    {
        for(int p = 0; p < tamanho - 1; p++)
        {
            if(a[p] > a[p + 1])
                {
                    storage = a[p];
                    a[p] = a[p+1];
                    a[p+1] = storage;
                }
            }
        }

    for(int p = 0; p < tamanho - 1; p++)
    {
        cout << a[p] << " ";
    }

    return 0;
}

int decrescente(int a[])
{
    int storage;

    for(int m = 0; m < tamanho - 1; m++)
    {
        for(int p = 0; p < tamanho - 1; p++)
        {
            if(a[p] < a[p+1])
            {
                storage = a[p];
                a[p] = a[p+1];
                a[p+1] = storage;
            }
        }
    }

    for(int p = 0; p < tamanho; p++)
    {
        cout << a[p] << " ";
    }

    return 0;
}

int buscar(int a[], int n)
{
    int ini = 0, meio, fim = tamanho - 1, t;
    while(ini <= fim)
    {
        meio = (fim - ini) / 2;

        if(a[meio] == n)
        {
            return meio;
        }

        else
        {
            
        }
    }

    if(a[meio] != n)
    {
        return -1;
    }

    return 0;
}   