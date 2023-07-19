#include <iostream>

using namespace std;

void func4(int n);
void func7(int n);
void func11(int n);

int main()
{
    int op, n, resposta;
    void (*ptr[3]) (int) = {func4, func7, func11};
    do
    {
        cout << "Digite a opcao para somar seu numero, e seu numero (um numero n qualquer e o somador(4, 7 ou 11) respectivamente): " << endl;
        cin >> op >> n;

            switch(op)
            {
                case 4:
                    (*ptr [0]) (n);
                    break;
                case 7:
                    (*ptr [1]) (n);
                    break;
                case 11:
                    (*ptr [2]) (n);
                    break;
                default:
                    cout << "Digite uma opcao valida: " << endl;
                    break;
            }
            cout << endl << "Deseja reiniciar a digitacao?: (0 para nao/1 para sim)" << endl;
            cin >> resposta;
    } while (resposta == 1);
}

void func4(int n)
{
    int x;
    x = n + 4;
    cout << x;
}

void func7(int n)
{
    int x;
    x = n + 7;
    cout << x;
}
void func11(int n)
{
    int x;
    x = n + 11;
    cout << x;
}