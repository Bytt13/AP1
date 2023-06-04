#include <iostream>

using namespace std;

int count = 0;

int fun(int n, int d)
{
    while(n > 10)
    {
        if(n % 10 == d)
        {
            count++;
        }
        n = n / 10;
        if(n == d)
        {
            count++;
        }
    }
    return 0;
}

int main()
{
    int n;
    int d;

    cin >> n;

    do
    {
        cin >> d;
    } while (0 > d && d > 9);

    fun(n, d);

    cout << count;
}