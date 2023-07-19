#include <iostream>

using namespace std;

void dividepor10(float&, float&);

    float n = 0;
    float m = 0;

int main()
{
    float j;
    float k;
    float& r1 = n;
    float& r2 = m;

    cout << "Digite 2 numeros: " << endl;
    cin >> j >> k;
    dividepor10(j,k);
    cout << "A divisao por 10 e igual a " << r1 << " e " << r2 << endl;
}

void dividepor10(float& j, float& k)
{
    n = j / 10;
    m = k / 10;
}