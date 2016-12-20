// practical set-8

#include<stdio.h>
#include<conio.h>

 main()
{
int j = 0;
char str1[50] = {0};
char str2[50] = {0};
char *ptr1;
ptr1 = &str1[0];
printf("Enter a string:-\n");
gets(str1);
printf("\nEnter another string:-\n");
gets(str2);
while(str2[j] != '\0')
{
*ptr1 = str2[j];
ptr1++;
j++;
}
j=0;
printf("\nNow 1st string will be changed to 2nd string..........\n");
while(str1[j] != '\0')
{
    printf("%c",str2[j]);
    j++;
}
getch();
}

