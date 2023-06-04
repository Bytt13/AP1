#include <iostream>

using namespace std;

int main()
{
    int n, m, i , k;
    k = 0;
    cin >> n;
    cin >> m;  

    for(i = n + 1; i < m; i++)
    {
        k = k + i;
    }
    
    cout << k;
}