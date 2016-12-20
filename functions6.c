//practical set-6
#include<stdio.h>
#include<conio.h>
#include<math.h>
int PRIME(int n);
void main()
{
int n;
printf("Enter a no.");
scanf("%d",&n);
PRIME(n);
printf("%d",PRIME(n));
getch();
}
int PRIME(int n)
{
    int i,flag = 1;
for(i=2;i<=sqrt(n);i++)
{
if(n%i == 0)
{
    flag = 0;
}
}
if(flag ==  1)
    {return 1;}
else
    {return 0;}

}
