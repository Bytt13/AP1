#include <iostream>
#include <cmath>

using namespace std;

int divisao(double&, double&);

int main()
{
    double i, j;

    cout << "Digite 2 numeros: " << endl;
    cin >> i >> j;
    divisao(i,j);
}

int divisao(double&i, double&j)
{
    if(j == 0)
    {
       return 0;
    }

    else
    {
        cout << i/j << endl;
        return 1;
    }
}
