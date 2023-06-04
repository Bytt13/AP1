#include <iostream>

using namespace std;

int main()
{
    int c, n;
    c = 0; 
    cin >> n;

    while(n > 0)
    {
        if(n < 25)
        {
            c++;
        }

        cin >> n;
    }

    cout << c;
}