#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int N,i,k,flag;
        scanf("%d",&N);
        long int b,X;
        for(k=0,b=2;k<N;b++)
        {
            flag = 0;
            for(i=2;i<=sqrt(b);i++)
            {
             if(b%i == 0)
             {
                 flag = 1;
                 break;
             }
            }
            if(flag == 0)
            {
               X = b;
               printf("%ld\n",X);
                k++;
            }
        }

        printf("%ld\n",X);


    }
}
