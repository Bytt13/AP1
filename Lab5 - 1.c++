#include <iostream>

using namespace std;

int main()
{
    int i, n = 0;

    cin >> i;

    while(n != (3*i) + 2)
    {
        n++;
    }

    cout << n;

}