#include <iostream>

using namespace std;

int main()
{
    int n = 0, i;

    cin >> i;

    do
    {
        n++;
        if(n == (3*i) + 2)
        {
            cout << n;
            break;
        }
    } while (n != (3*i) + 2);
    
}