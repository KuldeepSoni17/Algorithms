// practical set-6

#include<stdio.h>
#include<conio.h>

main()
{
 char c;
 FILE *p1;
 p1 = fopen("data", "w");
 while((c = getchar()) != 'k')
 {putc(c,p1);}
 fclose(p1);
 printf("\n");
 p1 = fopen("data", "r");
 while((c = getc(p1)) != 'j')
 {
     printf("%c",c);
 }
 fclose(p1);
 printf("\n");

 p1 = fopen("data", "a");
 while((c = getchar()) != 'z')
 {
    putc(c,p1);
 }
 fclose(p1);
 printf("\n");
 p1 = fopen("data", "r");
 while((c = getc(p1)) != 'y')
 {
     printf("%c",c);
 }
 fclose(p1);
printf("\n");

}

