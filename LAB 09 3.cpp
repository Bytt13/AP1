#include <iostream>

using namespace std;

void teste();

int main()
{
    int x;
    cout << "Digite um numero para comecar o laco (digite -1 caso nao queira mais)" << endl;
    cin >> x;
    while(x != -1)
    {
        teste();
        cout << "Digite mais um numero para continuar (ou -1 caso queira parar)" << endl;
        cin >> x;
    }
}

void teste()
{   int nova = 0;
    static int contador = 0;
    contador++;
    nova = contador*5;
    cout << "A funcao foi usada: " << contador << "Vez(es)" << endl;
    cout << "O valor de nova e: " << nova << endl;
}