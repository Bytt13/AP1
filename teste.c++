#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int num;

int sorteio()
{
    srand(time(0));
    num = rand() % 51;
    return 0;
}

int main()
{
    int x;
    sorteio();
    cout << "o numero foi sorteado! tente acertar" << endl;
    cin >> x;
    while(x != num)
    {
        if(x > 50)
        {
            cout << "o numero esta entre 0 e 50" << endl;
        }

        if(x < 0)
        {
            cout << "o numero esta entre 0 e 50" << endl;
        }

        if(x < num && 0 <= x && x <= 50)
        {
            if(x > num && x <= num + 10)
            {
                cout << "Chute um pouco mais baixo" <<  endl;
            }
            cout << "Muito baixo" << endl;
        }
        if(x > num && 0 <= x && x <= 50)
        {
            if(x > num && x <= num - 10)
            {
                cout << "Chute um pouco mais baixo" <<  endl;
            }
            cout << "Muito alto" << endl;
        }

        cin >> x;
    }
   
}