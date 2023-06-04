#include <iostream>

using namespace std;

int main()
{
    int p1 = 80000;
    int i;
    int p2 = 200000;
    int pc = p1 * 0.03;

    for(i = 0; p1 < p2; i++)
    {
        p1 = p1 + pc;
    }

    cout << i;

}