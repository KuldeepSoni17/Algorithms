#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
   {

    int T=0,i=0,H=0,j=0,k=0;
    scanf("%d",&T);
    int N[T];
    for(k=0;k<T;k++)
        {
        scanf("%d",&N[k]);
        }
    for(i=0;i<T;i++)
        {
            H=1;
        for(j=1;j<=N[i];j++)
            {
            if(j%2 == 0)
                {
                H = H + 1;
                }
            else
                {
                H = H * 2;
                }
            }
            printf("%d\n",H);
        }

    return 0;
}
