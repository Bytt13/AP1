#include <iostream>

using namespace std;

int fibonacci(int num);

int main()
{
    int n;
    cout << "Quantos numeros vc quer na sequencia de fibonacci? " << endl;
    cin >> n;
    fibonacci(n);
}

int fibonacci(int num)
{
    if(num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
       return fibonacci(num -1) + fibonacci(num -2);
    }
}