#include <iostream>
#include <ctime>
#include <random>

using namespace std;

/*Prototipo de funcoes*/
int buscar(int v[], int key, int tam);
void bubblesort(int v[], int tam);
void gerar(int v[], int p, int x, int y);

int main()
{   
    /* Colocando a semente de geracao aleatoria*/
    srand(time(0));

    /*Declaracao de variaveis posteriores*/
    int inicio, fim, key, tamanho;

     /* Pedindo o tamanho do vetor */
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanho;

    const int tam = tamanho;

    /*Declaracao do vetor, agora que o tamanho foi estabelecido*/
    int v[tam];

    /* Gerando e imprimindo os numeros que o vetor armazena, com o tamanho dado pelo usuario*/
    cout << "Voce deseja gerar numeros aleatorios de que numero ate que numero, respectivamente" << endl;
    cin >> inicio >> fim;
    gerar(v, tam, inicio, fim);
    cout << "Esse e seu vetor desorganizado: " << endl;

    for(int i = 0; i < tam; i++)
    {
        cout << v[i] << " ";
    }

    /* ordenando e imprimindo de forma ordenada o vetor*/
    cout << endl << "Agora esse e o vetor ordenado: " << endl;
    bubblesort(v,tam);

    for(int i = 0; i < tam; i++)
    {
        cout << v[i] << " ";
    }

    /*Usando bussca binaria para procurar uma chave, e retornar o resultado da busca*/
    cout << endl << "Agora digite um numero para procurar no seu vetor (entre os dito anteriormente para geracao aleatoria): " << endl;
    cin >> key;
    buscar(v, key, tam);
    if(buscar(v, key, tam) == -1)
    {
        cout << "Sua chave nao foi encontrada, que pena" << endl;
    }
    else
    {
        cout << "Sua chave foi encontrada! esta na posicao: " << buscar(v,key, tam) << endl;
    }
}

void gerar(int v[], int tam, int x, int y)
{
    int z;
    for(int i = 0; i < tam; i++)
    {
        z = rand() % ((y - x) + 1) + x;

        v[i] = z;
    }
}

void bubblesort(int v[], int tam)
{
    int t, c, flag;
    flag = 1;

    do
    {
        c = 1;
        for(int p = 0; p < tam - c; p++)
        {
            if(v[p] > v[p+1])
            {
                t = v[p];
                v[p] = v[p+1];
                v[p+1] = t;
                c++;
            }
        }

        if(c == 1)
        {
            flag = 0;
        }

    } while (flag != 0);
}

int buscar(int v[], int key, int tam)
{
    int ini = 0;
    int meio;
    int fim = tam - 1;
    
    while(ini < fim)
    {
        meio = (ini + fim)/2;
        if(v[meio] == key)
        {
            ini = fim;
            return meio;
        }
        if(v[meio] > key)
        {
            fim = meio;
        }
        if(v[meio] < key)
        {
            ini = meio;
        }
    }

    return -1;
}