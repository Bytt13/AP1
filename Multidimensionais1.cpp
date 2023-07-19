#include <iostream>
#include <iomanip>

using namespace std;

int matriz[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

int main()
{
    int l, c, n;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }

    cout << "Digite uma linha: " << endl;
    cin >> l;
    l = l - 1;
    cout << "Digite uma coluna" << endl;
    cin >> c;
    c = c - 1;

    cout << "O elemento que voce pediu e " <<  matriz[l][c] << endl;

    cout << "Digite de novo uma linha: " << endl;
    cin >> n;
    n =n - 1;

    cout << "os elementos dessa linha sao:";

    for(int k = 0; k < 4; k++)
    {
        cout << setw(4) << matriz[n][k];
    }

    cout << endl;
}