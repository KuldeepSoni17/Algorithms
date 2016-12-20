#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        long int N,i,k,CNT,m;
        scanf("%ld",&N);
        int Bulb[N];
        for(i=0;i<N;i++)
        {
            Bulb[i] = 1;
        }
        for(i=2;i<=N;i++)
        {
            for(k=0;k<N;k++)
            {
                if((k+1)%i == 0)
                {
                    if(Bulb[k] == 1 )
                    {
                        Bulb[k] = 0;
                    }
                    else
                    {
                        Bulb[k] = 1;
                    }
                }
            }
//        for(m=0;m<N;m++)
//        {
//            printf("%d ",Bulb[m]);
//        }
        }
            CNT=0;
        for(i=0;i<N;i++)
        {
            if(Bulb[i] == 1)
            {
                CNT++;
            }
        }
        printf("%ld\n",CNT);
    }
return 0;}
