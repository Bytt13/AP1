#include <iostream>

using namespace std;

void soma(int a, int b)
{
    cout << a + b << endl;
}
void soma(int a, float t)
{
    cout << a + t << endl;
}
void soma(int a, int b, int c)
{
    cout << a + b + c << endl;
}

int main()
{
    int n,m,i,k,j, x;
    float a;

    cout << "Digite dois inteiros: " << endl;
    cin >> n >> m;
    cout << "Digite um inteiro e um real: " << endl;
    cin >> x >> a;
    cout << "Digite tres inteiros: " << endl;
    cin >> i >> j >> k;

    soma(n,m);
    soma(x,a);
    soma(i,j,k);

}