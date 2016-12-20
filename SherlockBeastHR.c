#include<stdio.h>
int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
    long int X,N,cnt=0;
    scanf("%ld",&N);
    X = N;
    do
    {if( X%10 != 0)
    {

    if(N%(X%10) == 0)
    {
        cnt++;
    }
    }
    X = X/10;
    }while(X != 0);
    printf("%d\n",cnt);
    }
return 0;
}

