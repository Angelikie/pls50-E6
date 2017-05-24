#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int epilogi;
    float a, b, pi, r, perimetros;
    pi = 3.14;

    while(epilogi != 0)
 {
    printf("Epilejte perimetro sximatos:\n\n");

    printf("1. Perimetros tetragwnou\n2. Perimetros parallilogrammou\n3. Perimetros kyklou\n4. Perimetros orthogwniou trigonou\n0. Exit\n\n");
    scanf(" %d", &epilogi);


    if(epilogi == 1)
    {
        printf("Perimetros tetragwnou:\n");
        printf("Dwse diastasi pleuras a:\n\n", a);
        scanf(" %f", &a);
        perimetros = 4 * a;
        printf("Perimetros = 4 * %.2f = %.2f\n\n\n", a, perimetros);
    }


    else if(epilogi == 2)
    {
        printf("Perimetros parallilogrammou:\n");
        printf("Dwse diastasi pleuras a:\n", a);
        scanf(" %f", &a);
        printf("Dwse diastasi pleuras b:\n", b);
        scanf(" %f", &b);
        perimetros = 2 * (a + b);
        printf("Perimetros = 2 * (%.2f + %.2f) = %.2f\n\n\n", a, b, perimetros);
    }

    else if(epilogi == 3)
    {
        printf("Perimetros kyklou:\n");
        printf("Dwse diastasi aktinas r:\n", r);
        scanf(" %f", &r);
        perimetros = 4 * pi * r;
        printf("Perimetros = 4 * %.2f * %.2f = %.2f\n\n\n", pi, r, perimetros);
    }

    else if(epilogi == 4)
    {
        printf("Perimetros orthogwniou trigonou:\n");
        printf("Dwse diastasi kathetis pleuras a:\n", a);
        scanf(" %f", &a);
        printf("Dwse diastasi kathetis pleuras b:\n", b);
        scanf(" %f", &b);
        perimetros = a + b + sqrt((a * a) + (b * b)) ;
        printf("Perimetros = a + b + sqrt((a^2) + (b^2)) = %.2f\n\n\n", perimetros);
    }

    else if(epilogi == 0)
    {
        printf("Kleisimo programmatos\n");
    }

    else
    {
        printf("Lathos epilogi\n\n");

    }

 }

}

