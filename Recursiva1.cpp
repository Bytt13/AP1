#include <iostream>

using namespace std;

int somatorio(int n);

int main()
{
    int n;
    cout << "Digite um numero positivo inteiro: " << endl;
    cin >> n;
    cout << somatorio(n) << endl;
}

int somatorio(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return (n + somatorio(n-1));
    }
}