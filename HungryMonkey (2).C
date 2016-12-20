#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main()
{
     long int i,tc;
    long int n,x1,x2,y1,y2,Steps = 0;

    scanf("%ld",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%ld",&n);
        Steps = 0;
    scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
    if(x1 > n || x2 > n || y1 > n || y2 > n)
    {
         printf("Out of Grid\n");
    }
    else
    {

Steps = abs(x2-x1) + abs(y2-y1);
    printf("%ld\n",Steps);


    }
    }


return 0;
}
