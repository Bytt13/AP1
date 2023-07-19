#include <iostream>

using namespace std;

int regressiva(int n);

int main()
{
    int n;
    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> n;
    cout << regressiva(n) << endl;
}

int regressiva(int n)
{
    cout << n << endl;

    if(n == 1)
    {
        return 0;
    }
    else
    {
    return regressiva(n-1);
    }
}