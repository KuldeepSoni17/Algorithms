#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char x;
    int tc,j,k;
    scanf("%d",&tc);
int RES[tc];
   x = getchar();
    for(j=0,k=0;j<tc;j++,k++)
    {
        int CNT = 0,L,i,N,sum;
        char S[1100];
        scanf("%s",S);
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
            while(N >= 10)
            {
                sum = sum + N%10;
                N = N/10;
            }
            sum = sum + N;
            N = sum;
          }while(sum > 10);
          RES[k] = sum;
      printf("%d\n",sum);
      }

    }

    return 0;
}
