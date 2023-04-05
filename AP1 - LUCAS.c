#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int m;
float n;
float sum;
float media;

int main()
{
    do
    {
    printf("Quantas notas vamos analisar? ");
    scanf("%d", &m); 
    }
    while(m < 0);

    float notas[m];
 
    for(int count = 0; count < m; count++)
    {
        do
        {
        printf("Digite uma nota: ");
        scanf("%f", &n);
        notas[count] = n;
        }
        while(n < 0 || n > 10);
    }

    for(int loop = 0; loop < m; loop++)
    {
        sum += notas[loop];
    }

    media = (sum / m);
    printf("A media do aluno foi: %f \n", media);

    if(media >= 7)
    {
            printf("Este aluno esta APROVADO\nA somatoria de suas notas foi: %f \nNotas: \n", sum);
            for(int loop2 = 0; loop2 < m; loop2++)
            {
                printf("%f ", notas[loop2]);
            } 
    }
    else
    {
            printf("Este aluno esta REPROVADO\nA somatoria de suas notas foi: %f \nNotas: \n", sum);
            for(int loop3 = 0; loop3 < m; loop3++)
            {
                printf("%f ", notas[loop3]);
            } 
    }
}