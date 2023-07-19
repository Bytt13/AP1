#include <iostream>

using namespace std;

template <class T>
T salario(T a)
{
    return 0;
}

template <class T>
T salario(T a, T b)
{
    int base = 0;
    float base_hora = 0;
    int salario_total;
    if(a == 1)
    {
        base = 20000;
        base_hora = 17.05;
    }
    if(a == 2)
    {
        base = 2500;
        base_hora = 21.31;
    }
    if(a == 3)
    {
        base = 4000;
        base_hora = 34.10;
    }

    salario_total = (base + (base_hora * b));

    cout << "O salario desse funcionario no mes foi: " << salario_total << endl;

    return salario_total;
}

int main()
{
    int codigo;
    int horas;
    int c;

    cout << "digite o codigo do funcionario: " << endl;
    cin >> codigo;
    cout << "digite as horas extras do funcionario: " << endl;
    cin >> horas;
    salario(codigo, horas);
    cout << "deseja continuar? aperte 0 para parar, e qualquer numero para continuar" << endl;
    cin >> c;
    while(c != 0)
    {
        cout << "digite o codigo do funcionario: " << endl;
        cin >> codigo;
        cout << "digite as horas extras do funcionario: " << endl;
        cin >> horas;
        salario(codigo, horas);
        cout << "deseja continuar? aperte 0 para parar, e qualquer numero para continuar" << endl;
        cin >> c;
    }
}