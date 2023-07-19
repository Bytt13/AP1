#include <iostream>

using namespace std;

int array[20];

int main()
{
    int cont = 0;

    for(int i = 0; i <= 19; i++)
    {
        cin >> array[i];
    }

    for(int k = 0; k <= 19; k++)
    {
        if(array[k] % 2 == 0)
        {
            cont++;
        }
    }

    if(cont == 20)
    {
        cout << "Todos os elementos da sequencia sao pares" << endl;
    }
    else
    {
        cout << "Nem todos os elementos da sequencia sao pares" << endl;
    }
}