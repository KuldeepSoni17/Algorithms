#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char x;
    int tc,j;
    scanf("%d",&tc);
   x = getchar();
    for(j=0;j<tc;j++)
    {
        int CNT = 0,L,i,N,sum;
        char S[500];
        gets(S);
        L = strlen(S);
        for(i=0;i<L;i++)
        {
            CNT = CNT + S[i] - 48;
        }
        N = CNT;
      if(N<10)
      {
          printf("%d\n",N);
      }
      else
      {
          do
          {
              sum = 0;
            while(N > 10)
            {
                sum = sum + N%10;
                N = N/10;
            }
            sum = sum + N;
            N = sum;
          }while(sum > 10);
          printf("%d\n",sum);
      }

    }
    return 0;
}
