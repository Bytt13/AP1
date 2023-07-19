#include <iostream>

using namespace std;

int soma;

template <class T> T multiplos(T soma1, T x, int n)
{
    soma = soma1;
    int acumulador = 0;
    for(int i = 1; i <= n; i++)
    {
        acumulador = acumulador + i*x; 
    }

    soma1 = 1 + acumulador;
    cout << "soma = " << soma1 << endl;

    return 0;
}

int main()
{
    int x;
    int n;
    cout << "Digite x: " << endl;
    cin >> x;
    cout << "Digite n: " << endl;
    cin >> n;

    multiplos(soma, x, n);
 
}