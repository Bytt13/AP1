#include <iostream>

using namespace std;

int progressiva(int n, int x);

int main()
{
    int n;
    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> n;
    int x = 0;
    cout << progressiva(n, x) << endl;
}

int progressiva(int n, int x)
{
    cout << x << endl;

    if(x == (n - 1))
    {
        return n;
    }
    else
    {
    return progressiva(n, x+1);
    }
}