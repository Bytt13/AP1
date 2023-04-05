#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    int x;

    if(b > a)
    {
        x = (b - a);
    }

    else
    {
        x = (24 - a) + b;
    }

    cout << "O JOGO DUROU " << x <<  " HORA(S)" << endl;
}