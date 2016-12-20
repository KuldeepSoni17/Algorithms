// practical set-6

#include<stdio.h>
#include<conio.h>
void CMPR(int a,int b,int c);
void main()
{
int a,b,c;
printf("Enter Three Numbers, which you want to compare:-\n");
scanf("%d %d %d",&a,&b,&c);
CMPR(a,b,c);
getch();
}


void CMPR(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
         printf("%d is largest",a);
        }
        else
        {
          printf("%d is largest",c);
        }
    }
    else if(b>c)
    {
    printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
}
