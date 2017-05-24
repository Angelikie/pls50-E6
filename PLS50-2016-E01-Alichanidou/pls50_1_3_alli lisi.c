#include <stdio.h>

int main()
{
 long n;


do
{
      printf("Dwse neo arithmo:\n");
      scanf("%d", &n);

     if(n>0)
    {
      printf("H antistrofi dyadiki anaparastasi tou %d einai: ", n);
      for(n=n; n>0; n=n/2 )
      printf("%d", n%2);
      printf("\n");
    }
      else
    {
      printf("Lathos epilogi\n");
      printf("\n");
    }

}
 while(n != 0);
}
