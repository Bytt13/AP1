#include <iostream>

using namespace std;

int main()
{
    int a,b;
    double p1;

    cin >> a >> b;

    if(a == 1)
    {
        p1 = 4.00;
    }
    if(a == 2)
    {
        p1 = 4.50;
    }
    if(a == 3)
    {
        p1 = 5.00;
    }
    if(a == 4)
    {
        p1 = 2.00;
    }
    if(a == 5)
    {
        p1 = 1.50;
    }

    cout.precision(2);
    cout << "Total : R$ " << fixed << p1 * b << endl;
}