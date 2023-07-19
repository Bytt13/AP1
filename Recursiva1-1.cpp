#include <iostream>

using namespace std;

int potencia(int i, int j);

int main()
{
    int a, b;
    cout << "Digite dois numeros positivos e inteiros: " << endl;
    cin >> a >> b;
    cout << potencia(a,b) << endl;
}

int potencia(int i, int j)
{
    if(j == 0)
    {
        return 1;
    }
    else
    {
        return i * potencia(i, j-1);
    }
}