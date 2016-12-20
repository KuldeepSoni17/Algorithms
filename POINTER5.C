// practical set-8

#include<stdio.h>
#include<conio.h>

main()
{


int ARR1[50] = {0},*x;
int *ptr1;
ptr1 = &ARR1[0];
printf("Enter integer and tap enter, to stop entries press 999\n");
x = ptr1;


do
{
    scanf("%d",ptr1);
    //printf("%d %d\n",*ptr1,ptr1);
    ptr1++;
}while(*(ptr1-1) != 999);
printf("In reverse form\n");
while((ptr1-2) != x-1)
{
    printf("%d\n",*(ptr1-2));
    ptr1--;
}
}
