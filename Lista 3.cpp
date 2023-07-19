#include <iostream>

using namespace std;

int contadigitos(int n, int d);

int main()
{
    int cont = 0;
    int n;
    int d;
    int x;

    cout << "Digite dois numeros inteiros: " << endl;
    cin >> n >> x;

    for(d = 0; d <= 9; d++)
    {
        contadigitos(n,d);
        contadigitos(x,d);

        if(contadigitos(n,d) == contadigitos(x,d))
        {
            cont++;
        }
    }
    if(cont == d)
    {
        cout << "e permutacao" << endl;
    }
    else
    {
        cout << "nao e permutacao" << endl;
    }
}

contadigitos(int n, int d)
{
    int contador = 0;
    do
    {
        if(n % 10 == d)
        {
            contador++;
        }
        n = n / 10;
    } while (n != 0);
    
    return contador;
}
