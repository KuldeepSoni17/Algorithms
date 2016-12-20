#include<stdio.h>

int main()

{
    int tc,i,j;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        int M,S,score=0;
        scanf("%d",&M);
        for(j=0;j<M;j++)
        {
            scanf("%d",&S);
            score = score + S;
        }
        printf("%d\n",score);
    }
}

