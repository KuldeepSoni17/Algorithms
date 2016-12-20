#include<stdio.h>

int main()
{
int tc,j;
scanf("%d",&tc);
for(j=0;j<tc;j++)
{
    int X,i,CNT,temp;
    scanf("%d",&X);
    int No[X];
    long int N;
    scanf("%ld",&N);
    for(i=X-1;i>=0;i--)
    {
        No[i] = N%10;
        N = N/10;
    }
    CNT = 0;
    temp = No[0];
    for(i=1;i<X;i++)
    {
        if(No[i] == temp)
        {
         CNT = CNT + 1;
        }
        else
            {
                temp = No[i];

            }
        }

printf("%d\n",CNT);}
    return 0;
}
