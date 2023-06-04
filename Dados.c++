#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int soma1 = 0;
int soma2 = 0;
int dado1;
int dado2;
int perde1 = 0, perde2 = 0;
int ganha1 = 0, ganha2 = 0;

int lancardados()
{
    srand(time(0));
    do
    {
    for(int i = 0; i < 3; i++)
    {
        dado1 = rand() % 7 + 1;
        dado2 = rand() % 7 + 1;
        soma1 = soma1 + dado1;
        soma2 = soma2 + dado2;
        cout << dado1 << endl;
        cout << dado2 << endl;
    }

    if(soma1 == 7)
    {
        perde1 = 1;
        ganha2 = 1;
        cout << "Jogador 1 perdeu" << endl;
        cout << "Jogador 2 ganhou" << endl;
    }

    if(soma1 == 21)
    {
        ganha1 = 1;
        perde1 = 1;
        cout << "Jogador 1 Ganhou" << endl;
        cout << "Jogador 2 perdeu" << endl;
        
    }
    if(soma2 == 21)
    {
        ganha2 = 1;
        perde1 = 1;
        cout << "Jogador 2 ganhou" << endl;
        cout << "Jogador 1 perdeu" << endl;
    }
    if(soma2 == 7)
    {
        ganha1 = 1;
        perde2 = 1;
        cout << "Jogador 2 perdeu" << endl;
        cout << "Jogador 1 Ganhou" << endl;
    }
    else
    {
        soma1 = 0;
        soma2 = 0;
    }
    }while(perde1 == 0 && ganha1 == 0);
    return 0;
}

int main()
{
    lancardados();
    
}