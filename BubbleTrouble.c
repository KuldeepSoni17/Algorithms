#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        long int N,R,i,key1,key2,m;
        scanf("%ld %ld",&R,&N);
        int Price[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&Price[i]);
        }
        for(m=0;m<N;m++)
        {
            key1 = Price[m];
        for(i=m+1;i<N;i++)
        {
            if(Price[i] == R - key1)
            {
                printf("%ld %ld\n",m+1,i+1);
            }
        }
        }


    }

return 0;}
