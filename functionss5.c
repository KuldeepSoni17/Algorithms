// practical set-6

#include<stdio.h>
#include<conio.h>
#include<string.h>
void Swap(char STR1[],char STR2[]);
void main()
{
int i;
char NAME1[20],NAME2[20],SRNAME1[20],SRNAME2[20];
printf("Enter your name:-\n");
scanf("%s",NAME1);
printf("Enter your surname:-\n");
scanf("%s",SRNAME1);
printf("your full name is:-%s %s",NAME1,SRNAME1);
printf("\nEnter your friend's name:-\n");
scanf("%s",NAME2);
printf("Enter your friend's surname:-\n");
scanf("%s",SRNAME2);
printf("\nyour friend's full name is:-%s %s\n",NAME2,SRNAME2);
printf("\nLet's exchange your surnames........\n");
for(i=0;i<10000;i++)
{
}
Swap(SRNAME1,SRNAME2);
printf("\nyour full name is:-%s %s",NAME1,SRNAME1);
printf("\nyour full name is:-%s %s",NAME2,SRNAME2);
getch();
}
void Swap(char STR1[],char STR2[])
{
char TMP[20];
strcpy(TMP,STR2);
strcpy(STR2,STR1);
strcpy(STR1,TMP);
}
