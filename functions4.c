// practical set-6
#include<stdio.h>
#include<conio.h>
long int FAC(int k);
void main()
{
int k;
printf("Enter a number:-");
scanf("%d",&k);
printf("%d! = %d",k,FAC(k));
getch();
}
long int FAC(int k)
{
int FACT;
if(k==1)
    {return(1);}
else
    {FACT = k*FAC(k-1);
return(FACT);}
}
