#include <iostream>

using namespace std;

int vetorA[10];
int vetorB[10];
int vetorC[10];

int main()
{
    for(int i = 0; i <= 9; i++)
    {
        cout << "Digite um valor para o vetor A: " << endl;
        cin >> vetorA[i];

        for(int j = i; j <= i; j++)
        {
            cout << "Digite um valor para o vetor B: " << endl;
            cin >> vetorB[j];
        }
    }

    for(int k = 0; k <= 9; k++)
    {
        if(vetorA[k] > vetorB[k])
        {
            vetorC[k] = 1;
        }
        if(vetorA[k] == vetorB[k])
        {
            vetorC[k] = 0;
        }
        if(vetorA[k] < vetorB[k])
        {
            vetorC[k] = -1;
        }
    }

    cout << "VetorA : " << endl;
    for(int n = 0; n <= 9; n++)
    {
        cout << vetorA[n] << " ";
    }
    cout << endl;
    
    cout << "VetorB : " << endl;
    for(int m = 0; m <= 9; m++)
    {
        cout << vetorB[m] << " ";
    }
    cout << endl;

    
    cout << "VetorC : " << endl;
    for(int d = 0; d <= 9; d++)
    {
        cout << vetorC[d] << " ";
    }
    cout << endl;
}