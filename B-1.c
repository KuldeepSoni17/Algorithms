#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int N,RES = 1,i;
        scanf("%d",&N);
        for(i=4;i<=N;i++)
        {
            RES = RES + i-3;
        }
        printf("%d\n",RES-1);

    }
}
