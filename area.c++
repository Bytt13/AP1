#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double A, B, C;
    const double pi = 3.14159;

    cin >> A >> B >> C;

    double atri = (A*C) / 2;
    double atra = ((A + B) * C) / 2;
    double aq = pow(B, 2);
    double ac = pow(C,2) * pi;
    double ar = (A * B);

    cout.precision(3);

    cout << "TRIANGULO: " << fixed << atri << endl;
    cout << "CIRCULO: " << fixed << ac << endl;
    cout << "TRAPEZIO: " << fixed << atra << endl;
    cout << "QUADRADO: " << fixed << aq << endl;
    cout << "RETANGULO: " << fixed << ar << endl;
}