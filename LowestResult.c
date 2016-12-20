#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int N,i,k,temp;
        scanf("%d",&N);
        int M[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&M[i]);
        }
        for(k=0;k<N;k++)
            {
                for(i=k+1;i<N;i++)
                {
                    if(M[i]<M[k])
                    {
                        temp = M[j];
                        M[k] = M[i];
                        M[i] = temp;
                    }
                }
            }
    printf("%d\n",M[0]);
    }
    return 0;
}
