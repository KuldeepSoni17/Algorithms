#include <stdio.h>

int main()
{
    int tc,M,N,i,j,a,temp,count = 0;
    scanf("%d",&tc);

    for(a=0;a<tc;a++)
    {
        M = N = temp = count = i = j = 0;
        scanf("%d %d",&M,&N);
        int HB[M],HG[N];

    	if(M<=N)
    	{
    		for(i=0;i<M;i++)
    		{
    			scanf("%d",&HB[i]);
            }

    		for(i=0;i<N;i++)
    		{
    	     	scanf("%d",&HG[i]);
            }
    	 for(j=0;j<M;j++)
            {
                for(i=j+1;i<M;i++)
                {
                    if(HB[i]>HB[j])
                    {
                        temp = HB[j];
                        HB[j] = HB[i];
                        HB[i] = temp;
                    }
                }
            }
             for(j=0;j<N;j++)
            {
                for(i=j+1;i<N;i++)
                {
                    if(HG[i]>HG[j])
                    {
                        temp = HG[j];
                        HG[j] = HG[i];
                        HG[i] = temp;
                    }
                }
            }
        j=0;
    	for(i=0;i<M;i++)
    	{
    		for(j=j;j<N;j++)
            {
                if(HB[i] > HG[j])
    		{
    		    count++;
                j++;
    			break;
    		}
            }
    	}
    	if(count == M)
    	{
    		printf("YES\n");
    	}
    	else
    	{
    		printf("NO\n");
    	}
    	}
    	else
    	{
    		printf("NO\n");
    	}
    }
    getchar();
    return 0;
}
