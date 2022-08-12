#include <stdio.h>

int main (void)
{
  int i;
  float SAL, NOM;
  NOM = 0;
  for(i =1; i <=15; i++)
    {
      printf("\Ingrese el salario del profesor%d:\t", i );
      scanf("%f", &SAL);
      NOM = NOM + SAL;
      }
  printf("\nEl total de la nómina es: %.2f", NOM);
  }