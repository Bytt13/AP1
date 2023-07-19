#include <iostream>
#include <cmath>

using namespace std;

template <class T>
T media_A(T a, T b, T c, T n)
{
    float x;
    x = (a + b + c) / n;

    return x;
}

template <class T>
T media_P(T a, T b, T c)
{
    int p1 = 5, p2 = 3, p3 = 2;
    float x;
    x = ((a*p1) + (b*p2) + (c*p3)) / (p1 + p2 + p3);

    return x;
}

template <class T>
T media_H(T a, T b, T c, T n)
{
    float x;
    x = n / (pow(a,-1) + pow(b,-1) + pow(c,-1));

    return x;
}

int main()
{
    float x, y, z;
    char c;
    float n = 3;

    cout << "Digite 3 valores: " << endl;
    cin >> x >> y >> z;
    cout << "Digite 'a', 'h' ou 'p': " << endl;
    cin >> c;

    if(c == 'a' || c == 'A')
    {
        cout << "a media aritmetica e: " << media_A(x,y,z,n) << endl;
    }
    if(c == 'p' || c == 'P')
    {
        cout << "a media ponderada e: " << media_P(x,y,z) << endl;
    }
    if(c == 'h' || c == 'H')
    {
        cout << "a media harmonica e: " << media_H(x,y,z,n) << endl;
    }
}