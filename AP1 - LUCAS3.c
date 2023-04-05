#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//horas trabalhadas, valor da hora aula e percentual de desonto//
int HT;
float VH;
float PD;

//salario bruto (SB = VH * HT) & total de desconto (TD = PD/100) & salario liquido (SB * TD)//
float SB;
float TD;
float SL;

//calcular o salario bruto//

int salariob(void)
{
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%i", &HT);
    printf("Digite o valor de hora-aula: ");
    scanf("%f", &VH);
    printf("Insira o percentual de desconto: ");
    scanf("%f", &PD);

    SB = (VH * HT);
}

//calcular o salario liquido//

int salariol(void)
{
    TD = (PD/100);
    SL = (SB * (1 - TD));   
}

int main()
{
    salariob();
    salariol();
    printf("O salario bruto e este: %f", SB);
    printf("O salario liquido e este: %f", SL);
}