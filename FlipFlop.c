#include<stdio.h>

int main()
{
int tc,j;
scanf("%d",&tc);
for(j=0;j<tc;j++)
{
    int X;
    scanf("%d",&X);
    long int N,CNT = 0;
    scanf("%ld",&N);
    while(N/10  != 0)
    {
        if(N % 10 == 0)
        {
            N = N/10;
          if(N % 10 == 0)
          {
              CNT++;
              N = N/10;
          }
        }
        else
                   {
            N = N/10;
          if(N % 10 == 1)
          {
              CNT++;
          }
        }


    }

    printf("%ld\n",CNT);
}
    return 0;
}
