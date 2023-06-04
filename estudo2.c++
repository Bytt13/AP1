#include <iostream>

using namespace std;

int main()
{
    int t, m = 0;

    do
    {
        cin >> t;
    } while(t < 0);
    

    if(t <= 3)
    {
        m = 500*(t + 1);
    }
    if(t == 4)
    {
        m = 500*(t + 2);
    }
    if(t > 4)
    {
        m = 5000;
    }

    cout << m;
}