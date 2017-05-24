#include <stdio.h>

int main()
{
 int n, d;
 const a=2;
    do{
      printf("Dwse neo arithmo\n");
      scanf("%d", &n);
      d = getchar();

      printf("H antistrofi dyadiki anaparastasi tou %d einai: ", n);
      for(n=n ; n>0; n=n/a )
      {
      d = n%a;
      n > 0 ? putchar(d): printf("Lathos epilogi\n");
      }
      }
    while(n!=0);
}
