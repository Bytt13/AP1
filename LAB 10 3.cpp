#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int gera(int = 15);

int main()
{
    int x;
    int j;  
    cout << "Digite um numero positivo (ou um -1 caso queira parar): " << endl;
    cin >> x;
    while(x > 0)
    {
        cout << "Digite o numero maximo do intervalo: " << endl;
        cin >> j;
        cout << gera() << endl;
        cout << gera(j) << endl;
        cout << "Digite um numero positivo (ou um -1 caso queira parar): " << endl;
        cin >> x;
    }
}

int gera(int m)
{
    int gerado;
    srand(time(0));
    gerado = rand() % m;
    return gerado;
}