#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int tc,j,N,M,TMP,i,a,k;
long int RES;
scanf("%d",&tc);
for(j=0;j<tc;j++)
{
    scanf("%d %d",&M,&N);
    RES = 1;
    RES  = (N / M);
    a = RES;
    TMP = N  - RES;
    for(i=1;TMP >(M-i)*a;i++)
    {
        RES = RES*(a+1);
        TMP = TMP - (a+1);
    }
    for(k=0;k<(M-i);k++)
{
    RES = RES * a;
}

printf("%ld\n",RES);

}



return 0;
}
