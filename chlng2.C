#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    int L;
    char *str1,a;
    printf("Enter a Word(Strike \"Spacebar\" to end the Word):-");
do
{
    a = getchar();
    printf("ok");
   // *str1 = a;
    //printf("%s",str1);
   // str1++;
}while(a != ' ');



   // L = strlen(str1);
    //puts(str1);
    if((str1 = (char*)malloc(L)) == NULL)
    {
     printf("Not Enough Space");
    }
    else
    {
    printf("Bro! It works");
    }


}
