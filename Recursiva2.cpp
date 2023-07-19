#include <iostream>

using namespace std;

int multiplicacao(int a, int b);

int main()
{
    int a,b;
    cout << "Digite dois numeros inteiros positivos: " << endl;
    cin >> a >> b;
    cout << multiplicacao(a,b) << endl;
}

multiplicacao(int a, int b)
{
    if(b == 0)
    {
        return 0;
    }
    else
    {
        return a + multiplicacao(a, b-1);
    }
}