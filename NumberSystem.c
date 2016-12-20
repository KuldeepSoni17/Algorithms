#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int tc,j;
    scanf("%d",&tc);
    int RES[tc];
    for(j=0;j<tc;j++)
    {
        long int N,Y,X,Z;
        int K;
        scanf("%ld %d",&N,&K);
        Y = pow(2,K) - 1;
        X = pow(3,K-1);
        Z = pow(2,K-1);
        if((N < X && N > Y) || N < Z)
        {
            RES[j] = 1;
            printf("NO\n");
        }
        else{RES[j] = 0;printf("YES\n");}
    }
    for(j=0;j<tc;j++)
    {
        if(RES[j] == 1)
        {
            printf("NO\n");
        }
        else{printf("YES\n");}
    }
}
