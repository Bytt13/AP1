#include <iostream>

using namespace std;

int main()
{
    int tipo;
    int area;
    double custo;
    double preco;
    double areatotal = 0;
    double precototal = 0;
do
{ 
    cout << "Digite a a area de pulverizacao" << endl;
    cin >> area;
    cout << "Digite o tipo de pulverizacao" << endl;
    cin >> tipo;

    switch(tipo)
    {
        case 1:
            custo = 500;
            break;
        case 2:
            custo = 1000;
            break;
        case 3:
            custo = 1500;
            break;
        case 4:
            custo = 2000;
            break;
        case 5:
            custo = 3000;   
            break;
        default:
            cout << "digite um dos tipos possiveis" << endl;
            break;
    }

    preco = custo * area;
    precototal = precototal + preco;
    areatotal = areatotal + area;

}while (area != 0);

    if(areatotal > 100)
    {
        precototal = (precototal * 0.95);
    }
    if(precototal > 75000)
    {
        precototal = precototal - ((precototal - 75000) * 0.1);
    }

    cout << precototal;

}