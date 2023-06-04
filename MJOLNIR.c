#include <stdio.h>
#include <math.h>
#include <string.h>

int c;
int n;
char s[] = "";

int main() 
{
   printf("Digite a quantidade de tentativas: ");
   scanf("%i", &c);

   int f[c];
   char *nm[c];

   for(int i = 0; i < c; i++)
   {
      printf("Digite o nome da pessoa: ");
      scanf("%s", s);
      strcpy(nm[i], s);

      do
      {
         printf("Digite a forca (valida): ");
         scanf("%i", &n);
         f[i] = n;
      } while(n < 1 || n > 25000);
   }

   for(int loop = 0; loop < c; loop++)
   {
      printf("%s, %i\n", nm[loop], f[loop]);
   }

   for(int k = 0; k < c; k++)
   {
      if(strcmp(nm[k], "Thor") == 0)
      {
         printf("Y\n");
      }
      else
      {
         printf("N\n");
      }
   }

}