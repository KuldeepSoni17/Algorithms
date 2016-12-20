#include<stdio.h>

int main()

{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        long int N,M,K,A,B;
        scanf("%ld %ld %ld",&N,&M,&K);
        B = (K/(N-1));
        A = (N*B);
        printf("%ld %ld\n",A+M,B+M);



    }
}
