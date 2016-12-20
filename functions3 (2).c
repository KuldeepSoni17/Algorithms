// practical set-6

#include<stdio.h>
#include<conio.h>
double PWR(float x,float y);
void main()
{
   float x,y;
   printf("Enter a number:-\n");
   scanf("%f",x);
   printf("Enter power of %d:-\n",x);
   scanf("%f",y);
   printf("%f power %f = %f",x,y,PWR(x,y));
   getch();
}
double PWR(float x,float y)
{
int i;
double RES = 1;
for(i=0;i<y;i++)
    RES = x*RES;
return(RES);
}
