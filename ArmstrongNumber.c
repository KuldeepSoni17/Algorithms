#include<stdio.h>

int main()
{

    int tc,i,N,A,j;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
{    A =0 ;
    scanf("%d",&N);
    j = N;
    for(;N!=0;)
    {
        A = A + (N%10)*(N%10)*(N%10);

        N = N/10;
    }
    if(A == j)
    {
        printf("YES\n");
    }
    else

    {
        printf("NO\n");

    }
        }
return 0;}
