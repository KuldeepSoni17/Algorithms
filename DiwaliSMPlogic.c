#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        long int N,y;
        scanf("%ld",&N);
        y = sqrt(N);
        printf("%ld",y);
        printf("\n");
    }
return 0 ;
}
