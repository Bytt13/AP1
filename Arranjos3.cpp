#include <iostream>

using namespace std;

int vet1[50];
int vet2[50];
int cont = 0;

int main()
{
    for(int i = 0; i <= 49; i++)
    {
        cin >> vet1[i];
    }

    for(int k = 49; k >= 0; k--)
    {
        vet2[cont] = vet1[k];
        cont++;
    }

    for(int n = 0; n <= 49; n++)
    {
        cout << vet1[n] << " ";
    }

    cout << endl;

    for(int m = 0; m <= 49; m++)
    {
        cout << vet2[m] << " ";
    }
}