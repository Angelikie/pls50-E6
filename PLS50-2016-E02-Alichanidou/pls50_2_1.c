#include <stdio.h>  /* logw printf(), fscanf(), fopen(), fclose() */
#include <stdlib.h> /* logw exit() */


struct stoixeia
{
   char onoma[40];
   unsigned short thlefwno[10];
   unsigned int NoOfThesi;
};

void main()
{
   FILE* f_in, *f_out;        /* metablites-deiktes se arxeio */
   int bus[53];               /* lewforeio me to polu 53 theseis */
   char license[8];           /* pinakida kykloforias, 7 grammata-arithmoi kai to '\0' */
   int seats;                 /* plithos thesewn */
   int i, choice, count;      /* boithitikes metablites */

   struct stoixeia thesi[53];

   f_in = fopen("bus.txt", "r"); /* Anoigei to arxeio eisodou*/
   if(f_in == NULL) /* se periptwsi problimatos kata to anoigma */
   {
      printf("To arxeio bus.txt de mporese na anagnwstei\n");
      exit(1);      /* ejodos apo to programma */
   }
   fscanf(f_in,"%s %d", license, &seats);
   fclose(f_in);    /* kleisimo arxeiou eisodou */
   printf("%s %d\n", license, seats); /* ektypwsi pinakidas kai plithous thesewn */
   if (seats > 53) {
     printf("megisto plitos thesewn 53\n");
     exit(1);
   }
   /* elegxos elaxistou kai megistou plithous thesewn */
   if (seats < 5 || (seats-5)%4 != 0 ) {
     printf("mi egkyro plithos thesewn\n");
     exit(1);
   }
   for (i=0;i<seats;i++)
     thesi[i].NoOfThesi=0; /* arxikopoiisi thesewn lewforeiou */

   choice = 1; /* arxiki timi gia eisodo sto loop */
   while (choice != 0) { /* mexri na epilegei termatismos */
      printf("1. emfanish synolikoy plhthous kenwn thesewn kai twn arithmwn  tous\n");
      printf("2. krathsh theshs me sygkekrimeno arithmo\n");
      printf("3. anazhthsh thesis me onoma h thlefwno\n");
      printf("4. akyrwsh krathshs theshs me sygkekrimeno arithmo\n");
      printf("5. emfanish listas krathmenwn thesewn\n");
      printf("0. termatismos\n");
      scanf("%d", &choice); printf("Epilogi: %d\n",choice);

      switch(choice) {
        case 1:
           count = 0;   /* arxikopoiisi metriti */
           for (i=0;i<seats;i++)
              if (thesi[i].NoOfThesi == 0) count++;
              printf("Plithos kenwn thesewn = %d apo %d\nArithmoi thesewn:\n",count,seats);
           for (i=0;i<seats;i++)
              if (thesi[i].NoOfThesi == 0)   /* an thesi eleutheri */
                printf("%d ",i+1); /* typwse ton arithmot tis */
           printf("\n");
           break;

        case 2:
           printf("dwse arithmo thesis\n");
           scanf("%d", &i);
           if (i<1 || i>seats) /* elegxos oti arithmos thesis entos oriwn */
              printf("arithmos thesis ektos oriwn\n");
           else if (thesi[i-1].NoOfThesi == 0) {/* an einai eleutheri */
                  thesi[i-1].NoOfThesi == 1;     /* kratise tin */
                  printf("dwse stoixeia:\n");
                  printf("onoma:\n");
                  scanf("%s", &thesi[i-1].onoma[40]);
                  printf("Dwse thlefwno:\n");
                  scanf("%d", &thesi[i-1].thlefwno[10]);
                }
                else
                  printf("thesi idi kateilhmmeni\n");
           break;

        case 3:
           printf("dwse onoma\n");
           scanf("%s", &thesi[i].onoma);
        break;


        case 4:
           printf("dwse arithmo thesis\n");
           scanf("%d", &thesi[i].NoOfThesi);
           if (i<1 || i>seats)   /* elegxos oti arithmos thesis entos oriwn */
              printf("arithmos thesis ektos oriwn\n");
           else if (thesi[i].onoma[0] != '\0') {
                  thesi[i].onoma[0] == '\0';
                  printf("thesi apodesmeutike\n");
                }
                else
                  printf("thesi idi eleutheri\n");
           break;

        case 5:
           for (i=0;i<seats;i++) {
              if (thesi[i].onoma[0]!='\0')
                 printf("%s \n %d \n %d", thesi[i-1].onoma[40], thesi[i-1].thlefwno[10], thesi[i-1].NoOfThesi);
           break;

         case 0:  /* min kaneis tipote */
           break;

        default:
           printf("akatallili epilogi\n");
      }


       f_out = fopen("bus.txt", "w+"); /* Anoigei to arxeio ejodou*/

           fprintf(f_out,"%s %d \n",license, seats);
           for (i=0;i<seats;i++) {
              if (thesi[i].onoma[0]!='\0')
                 fprintf(f_out,"Thesi %d \n", thesi[i].NoOfThesi );
                 fprintf(f_out,"Onoma %s \n", thesi[i].onoma );
                 fprintf(f_out,"Thlefwno %d \n", thesi[i].thlefwno );

           }
           fprintf(f_out,"\n");
           fclose(f_out); /* kleise to arxeio ejodou */
    }

}
}

