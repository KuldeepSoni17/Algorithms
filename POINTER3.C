// practical set-8

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int x,i,j;
char str1[50] = {0};
char str2[50] = {0};
char *ptr1;
char *ptr2;
printf("Enter a string:-\n");
gets(str1);
printf("\nEnter another string:-\n");
gets(str2);
ptr1 = &str1[0];
ptr2 = &str2[0];
x = strlen(str1);
j=0;
exit(1) ;
*(ptr1 + x) = ' ';
while(str2[j] != '\0')
{
    *(ptr1 + x + j + 1) = str2[j];
    j++;
}

while(*ptr1 != '\0')
{
    printf("%c",*ptr1);
    ptr1++;
}
getch();
}

