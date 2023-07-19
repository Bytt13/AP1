#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int fat(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * fat(n-1);
    }
}

int fib(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

void dados()
{
    int x;
    srand(time(0));

    x = (1 + rand() % 6);

    cout << x << endl;
}

int main()
{
    int n, x, d;

    cout << "digite um  numero  para  calular seu fatorial: " << endl;
    cin >> n;
    cout << "digite um  numero  para  calular seu fibonacci: " << endl;
    cin >> x;
    cout << "digite quantos dados voce quer jogar: " << endl;
    cin >> d;

    cout << fat(n) << endl;
    
    for(int i = 1; i <= x; i++)
    {
        cout << fib(i) << " ";
    }

    for(int i = 0; i < d; i++)
    {
        dados();
    }
}