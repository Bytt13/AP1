#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float raiz(float x);

int main()
{
    float n;
    cout << "Digite um numero: " << endl;
    cin >> n;
    raiz(n);

    cout << "A raiz do numero e: " << setprecision(6) << raiz(n) << endl;

    cout << raiz(n)*raiz(n) << endl;
}

float raiz(float a)
{
    float s;
    s = sqrt(a);

    return s;
}