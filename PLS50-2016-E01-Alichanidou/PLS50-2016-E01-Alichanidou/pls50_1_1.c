#include <stdio.h>

int main()
{
    char symbolo;
    float num1, num2;

    printf("dwse arithmo praji arithmo\n");
    scanf("%f %c %f",&num1, &symbolo, &num2);

    switch(symbolo)
    {
        case '+':
            printf("apotelesma = %.2f\n", num1 + num2);
            break;
        case '-':
            printf("apotelesma = %.2f\n", num1 - num2);
            break;
        case '*':
            printf("apotelesma = %.2f\n", num1 * num2);
            break;
        case '/':
            if(num2!=0){printf("apotelesma = %.2f\n", num1 / num2);
            break;}
        default:
            printf("Error!");


   }

}
