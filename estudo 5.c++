#include <iostream>

using namespace std;

int main()
{
    int x;

    while(x > 10 || x < 0)
    {
        cin >> x;
        if(x > 10 || x < 0)
        {
            cout << "Insira um numero inteiro entre 0 e 10" << endl;
        }
    }
    
    
}