#include<stdio.h>
int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
    int N,K,i,cnt=0,T;
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&T);
        if(T<=0)
        {
            cnt++;
        }
    }
    if(cnt<K)
    {
        printf("YES\n");
    }
    else{printf("NO\n");}
    }

return 0;}
