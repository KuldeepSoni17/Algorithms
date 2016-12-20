//  practical set-8

#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
int x,y,flag = 1;
char *ptr1;
char *ptr2;
char  str1[50];
char  str2[50];
ptr1 = &str1[0];
ptr2 = &str2[0];
gets(str1);
gets(str2);
x = strlen(str1);
for(y=0;y<x;y++)
{
if(*ptr1 != *ptr2)
{
flag = 0;
break;
}
ptr1++;
ptr2++;
}
if(flag == 0)
{
    printf("Strings are not same.......");
}
else
{
printf("Strings are same......");
}
}




