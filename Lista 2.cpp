#include <iostream>
#include <cmath>

using namespace std;

int jogo(int h, int i, int j, int k);

int main()
{
    int hi, hf, mi, mf;
    cout << "Digite a hora (horas e minutos) de inicio  do jogo: " << endl;
    cin >> hi >> mi;
    cout << "Digite a hora de final do jogo: " << endl;
    cin >> hf >> mf;
    jogo(hi, mi, hf, mf);
    cout << "A duracao do jogo em minutos foi: " << jogo(hi, mi, hf, mf) << endl;
}

jogo(int h, int i, int j, int k)
{
    int hora_inicio, hora_final, minuto_inicio, minuto_final, duracao_hora, duracao_minuto, duracao_total;
    hora_inicio = h;
    minuto_inicio = i;
    hora_final = j;
    minuto_final = k;

    if(hora_final < hora_inicio)
    {
        duracao_hora = (24 - hora_inicio) + hora_final;
    }
    else
    {
        duracao_hora = hora_final - hora_inicio;
    }
    if(minuto_final == 0 || minuto_final < minuto_inicio)
    {
        duracao_minuto = 60 - minuto_inicio + minuto_final;   
        duracao_hora = duracao_hora - 1;
    }
    else
    {
        duracao_minuto = minuto_final - minuto_inicio;
    }

    duracao_total = (duracao_hora * 60) + duracao_minuto;

    return duracao_total;
}