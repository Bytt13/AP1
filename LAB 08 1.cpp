#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int num;

int gerador(int x, int y)
{
    srand(time(0));
    if(x > y)
    {
    num = rand() % x + y;
    }
    else
    {
        num = rand() % y + x;
    }
    cout << "O numero aleatorio foi: " << num << endl;
    return num;
}

int main()
{
    int n;
    int m;
    cout << "Qual os numeros do intervalo? " << endl;
    cin >> m;
    cin >> n;
    gerador(m,n);
}
