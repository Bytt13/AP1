#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float pi = 3.14159;
int r;
int A;

int main()
{
    printf("Digite o raio do circulo: ");
    scanf("%i", &r);

    calculate();

    printf("A parte inteira da area desse circulo e: %i", A);
}

int calculate()
{
    int rsqr;
    A = ((rsqr = r * r) * pi);
}