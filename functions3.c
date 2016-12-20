// practical set-6

#include<stdio.h>
#include<conio.h>
double PWR(int x,int y);
void main()
{
   int x,y;
   printf("Enter a number:-\n");
   scanf("%d",&x);
   printf("Enter power of %d:-\n",x);
   scanf("%d",&y);
   printf("%d power %d = %f",x,y,PWR(x,y));
   getch();
}
double PWR(int x,int y)
{
int i;
double RES = 1;
for(i=0;i<y;i++)
    RES = x*RES;
return(RES);
}
