#include<stdio.h>

int main()
{
    int T,j;
    scanf("%d",&T);
    for(j=0;j<T;j++)
    {
int N,i,k,sum=0,chksum=0,flag = 0;
scanf("%d",&N);
int X[N*N];
for(i=0;i<N*N;i++)
{
    scanf("%d",&X[i]);
}
for(i=0;i<N;i++)
{
    sum = sum + X[i];
}
for(i=0;i<N;i++)
{
    chksum = 0;
    for(k=0;k<N;k++)
    {
    chksum = chksum + X[N*i + k];
    }
    if(sum != chksum)
    {
        flag = 1;
        goto result;
    }
}
for(i=0;i<N;i++)
{
    chksum = 0;
    for(k=0;k<N;k++)
    {
    chksum = chksum + X[N*k + i];
    }
    if(sum != chksum)
    {
        flag = 1;
        goto result;
    }
}
    chksum = 0;
    for(k=0;k<N;k++)
    {
    chksum = chksum + X[k*(N+1)];
    }
    if(sum != chksum)
    {
        flag = 1;
        goto result;
    }
    chksum = 0;
    for(k=0;k<N;k++)
    {
    chksum = chksum + X[(N-1)*(k+1)];
    }
    if(sum != chksum)
    {
        flag = 1;
        goto result;
    }





result:
    if(flag == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}
return 0;}

