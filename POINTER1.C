
// practical set-8

#include<stdio.h>
#include<conio.h>

main()
{
char *x;
char str1[20];
char *ptr1;
printf("Enter a string:-");
gets(str1);
ptr1 = &str1[0];
x = &str1[0];
while(*ptr1 != '\0')
{
    ptr1++;
}
printf("%d is length of string....",ptr1-x);
getch();
}
