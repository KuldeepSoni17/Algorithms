// practical set-7

#include<stdio.h>
#include<conio.h>
struct personal
{
    char NAME[20];
    int DOJ;
    int MOJ;
    int YOJ;
    float salary;
};

main()
{
 struct personal EMPY;
 printf("\nEnter Employee's name:-\n");
 gets(EMPY.NAME);
 printf("\nEnter date of joining in DD-MM-YYYY format\n");
 scanf("%2d-%2d-%4d",&EMPY.DOJ,&EMPY.MOJ,&EMPY.YOJ);
 printf("\nEnter salary of Employee:-\n");
 scanf("%f",&EMPY.salary);
 printf("%s\t %d-%d-%d \t%f",EMPY.NAME,EMPY.DOJ,EMPY.MOJ,EMPY.YOJ,EMPY.salary);
 getch();

}

