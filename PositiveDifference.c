#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int N,i;
        scanf("%d",&N);
        long int RES[N-1],a,b;
        scanf("%ld",&a);
        for(i=0;i<N-1;i++)
        {
            scanf("%ld",&b);
            RES[i] = abs(b-a);
            a = b;
        }
        for(i=0;i<N-2;i++)
        {
            printf("%ld ",RES[i]);
        }
        printf("%ld\n",RES[N-2]);
    }

return 0;}
