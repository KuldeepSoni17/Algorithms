#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
       long int MTCH,i,CNT;
       scanf("%ld",&MTCH);
       int MSS[MTCH],RNL[MTCH];
       for(i=0;i<MTCH;i++)
       {
           scanf("%d",&MSS[i]);
       }
       for(i=0;i<MTCH;i++)
       {
           scanf("%d",&RNL[i]);
       }
       CNT = 0;
       for(i=0;i<MTCH;i++)
       {
           CNT = CNT + abs(MSS[i] - RNL[i]);
       }
       if((float)CNT/MTCH <= 1)
       {
           printf("CONSISTENT\n");
       }
       else
       {
              printf("INCONSISTENT\n");
       }


    }
}
