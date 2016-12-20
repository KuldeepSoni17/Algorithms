#include<stdio.h>

int main()
{
    int tc,j,CNT,N,i,a;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        CNT = 0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&a);
            if(a % 2 != 0)
            {
                CNT++;
            }
        }
    printf("%d\n",CNT);
    }

return 0;
}
