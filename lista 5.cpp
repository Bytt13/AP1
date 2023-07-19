#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int lanca3dados(int &, int &, int &);
int soma3dados(int a, int b, int c);

int main()
{
    int d1, d2, d3;
    int cont = 0;
    char c;
    int recorde = 0;

    while(cont <= 8)
    {
        cout << "Voce deseja jogar os dados? voce ainda possui " << (8 - cont) << " vezes restantes (S/N)" << endl;
        cin >> c;
        if(c == 'S' || c == 's')
        {
            if(cont == 8)
            {
                cout << "Voce ja jogou maximo de vezes possivel : " << cont <<  endl;
                break;
            }
            lanca3dados(d1,d2,d3);
            if(lanca3dados(d1,d2,d3) > recorde)
            {
                cout << "d1 = " << d1 << " " << "d2 = " << d2 << " " << "d3 = " << d3 << "--> " << lanca3dados(d1,d2,d3) << endl;
                recorde = lanca3dados(d1,d2,d3);
                cout << "Bateu seu recorde!" << endl;
                cout << "Sua melhor pontuacao ate agora: " << recorde << endl;
            }
            else
            {
                cout << "d1 =" << d1 << " " << "d2 = " << d2 << " " << "d3 = " << d3 << "--> " << lanca3dados(d1,d2,d3) << endl;
                cout << "Voce nao passou seu recorde :(" << endl;
                cout << "Sua melhor pontuacao ate agora: " << recorde << endl;
            }

        } 
        if(c == 'n' || c == 'N')
        {
            cout << "Jogou " << cont << " vez(es)" << endl; 
            break;
        }

        cont++;

    }
}

lanca3dados(int &d1, int &d2, int &d3)
{
    int x;
    srand(time(0));

    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    d3 = rand() % 6 + 1;

    soma3dados(d1,d2,d3);

    x = soma3dados(d1,d2,d3);

    return x;
}

soma3dados(int a, int b, int c)
{
    return a + b + c;
}