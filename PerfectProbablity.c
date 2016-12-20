#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        long int N,M;
        scanf("%ld %ld",&N,&M);
        if((M*N) % 2 == 0)
        {
            printf("1/2\n");
        }
        else
        {
            printf("%ld/%ld\n",M*N-(M*N)/2-1,M*N);
        }
    }

    return 0;
}

