#include <iostream>

using namespace std;

int vet1[50];
int vet2[50];

int main()
{
    for(int i = 0; i <= 49; i++)
    {
        cin >> vet1[i];
    }
    for(int k = 0;  k <= 49; k++)
    {
        vet2[k] = vet1[k];
    }

    for(int j = 0; j <= 49; j++)
    {
        cout << vet1[j] << " ";
    }

    cout << endl;

    for(int n = 0; n <= 49; n++)
    {
        cout << vet2[n] << " ";
    }
}