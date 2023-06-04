#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    int anteanterior, anterior, resultado;
    anteanterior = 0;
    anterior = 1;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        c = c + i;
    }
    
    cout << c;

}