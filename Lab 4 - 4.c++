#include <iostream>

using namespace std;

int main()
{
    int i, a, c;
    c = 0;
    cin >> a;
    i = 0;

    while(a >= 0)
    {
        i = i + a;
        c++;
        cin >> a;
    }

    cout << i/c;
}