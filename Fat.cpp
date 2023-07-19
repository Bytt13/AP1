#include <iostream>

using namespace std;

int fatorial(int num);

int main()
{
    int n;
    cout << "ate que numero deseja fazer fatorial? " << endl;
    cin >> n;
    cout << fatorial(n) << endl;
    
}

int fatorial(int num)
{
    if(num == 0)
    {
        return 1;
    }
    else
    {
        return num * fatorial(num-1);
    }
}