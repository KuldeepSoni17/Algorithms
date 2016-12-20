#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        long int N;
        scanf("%ld",&N);
        if(N == 5)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
