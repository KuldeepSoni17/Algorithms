#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int N,i,k,flag;
        scanf("%d",&N);
        int No[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&No[i]);
            flag = 0;
            for(k=0;k<i;k++)
            {
                if(No[i] == No[k])
                {
                    printf("DUPLICATE\n");
                    flag = 1;
                    break;
                }

            }
            if(flag == 0)
            {
                printf("ADDED\n");
            }

        }

    }

return 0;}
