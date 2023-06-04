#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int carta1, naipe1;
int carta2, naipe2;
int carta3, naipe3;
int carta4, naipe4;
int cartag1, cartag2;
int naipeg1, naipeg2;
int pontos1 = 0, pontos2 = 0;

int sorteiodupla1()
{
    carta1 = rand() % 10 + 1;
    carta2 = rand() % 10 + 1;
    naipe1 = rand() % 4 + 1;
    naipe2 = rand() % 4 + 1;

    cout << carta1 << endl << carta2 << endl << naipe1 << endl << naipe2 << endl;

    if(carta1 > carta2)
    {
        cartag1 = carta1;
        naipeg1 = naipe1;
    }
    else
    {
        cartag1 = carta2;
        naipeg1 = naipe2;
    }

    return 0;
}

int sorteiodupla2()
{
    carta3 = rand() % 10 + 1;
    carta4 = rand() % 10 + 1;
    naipe3 = rand() % 4 + 1;
    naipe4 = rand() % 4 + 1;

    cout << carta3 << endl << carta4 << endl << naipe3 << endl << naipe4 << endl;

    if(carta3 > carta4)
    {
        cartag2 = carta3;
        naipeg2 = naipe3;
    }
    else
    {
        cartag2 = carta4;
        naipeg2 = naipe4;
    }

    return 0;
}

int comparacao()
{
    if(cartag1 > cartag2)
    {
        pontos1++;
    }
    if(cartag1 < cartag2)
    {
        pontos2++;
    }
    if(cartag1 == cartag2)
    {
        if(naipeg1 > naipeg2)
        {
            pontos1++;
        }
        if(naipeg2 > naipeg1)
        {
            pontos2++;
        }
        else
        {
            pontos1 = pontos1 + 0;
            pontos2 = pontos2 + 0;
        }
    }

    cout << pontos1 << endl << pontos2 << endl;

    return 0;
}

int main()
{
    srand(time(0));
    do
    {
    sorteiodupla1();
    sorteiodupla2();
    comparacao();
    }while(pontos1 < 5 || pontos2 < 5);

    if(pontos1 == 5)
    {
        cout << "A dupla 1 venceu" << endl;
    }
    if(pontos2 == 5)
    {
        cout << "A dupla 2 venceu" << endl;
    }
}