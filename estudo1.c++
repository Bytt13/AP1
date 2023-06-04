#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    if(n % 2 == 0)
    {
        cout << "par" << endl;
    }
    else
    {
        cout << "impar" << endl;
    }

    if(n < 0)
    {
        cout << "negativo" << endl;
    }
    else
    {
        cout << "positivo" << endl;
    }
    if(n > 100)
    {
        cout << "maior que 100" << endl;
    }
    if(n < 100)
    {
        cout << "menor que 100" << endl;
    }
    else
    {
        cout << "igual a 100" << endl;
    }
}

