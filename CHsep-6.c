#include<stdio.h>
int main()
{

int tc,j;
scanf("%d",&tc);
for(j=0;j<tc;j++)
{
    int N,i;
    scanf("%d",&N);
    int X[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&X[i]);
    }
   if(N%2 == 0)
   {
       for(i=0;i<N/2;i++)
       {
           printf("%d ",X[N-1-2*i]);
       }
       for(i=0;i<N - (N/2);i++)
       {
           printf("%d ",X[N-2-2*i]);
       }
   }
   else
   {
       for(i=0;i<N/2;i++)
       {
           printf("%d ",X[N-2-2*i]);
       }
       for(i=0;i<N -(N/2);i++)
       {
           printf("%d ",X[N-1-2*i]);
       }

   }
printf("\n");
}
return 0;
}
