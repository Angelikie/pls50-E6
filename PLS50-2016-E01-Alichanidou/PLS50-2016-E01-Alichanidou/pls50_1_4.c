#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE* fp;
   int n, a, i;
   int gramma1, gramma2, gramma3, noumero;
   int theseis[a];

   fp = fopen("bus.txt","r");
   if (fp != NULL)
   {
    fscanf(fp," %c%c%c%d %d\n",&gramma1,&gramma2,&gramma3,&noumero,&theseis);
    fclose(fp);
   }
   else
    printf("To arxeio den yparxei\n");































}
