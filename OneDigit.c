#include<stdio.h>

int main()
{
    int i,tc,j,sum,temp;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
      int X,k;
      scanf("%d",&X);
      long int N[X];
      int RES[X];
      for(k=0;k<X;k++)
      {

      sum =0;
      scanf("%ld",&N[k]);
      RES[k] = N[k];

      if(N[k] < 10)
      {
          printf("%ld\n",N[k]);
      }
      else
      {
          do
          {
              sum = 0;
            while(N[k] >= 10)
            {
                sum = sum + N[k]%10;
                N[k] = N[k]/10;
            }
            sum = sum + N[k];
            N[k] = sum;
          }while(sum >= 10);

      }
      }
      for(i=0;i<X;i++)
      {
          for(k=0;k<X;k++)
          {
              if(N[i] > N[k])
          {
              temp = RES[i];
              RES[i] = RES[k];
              RES[k] = temp;
          }
          }
      }
for(i=0;i<X;i++)
{
    printf("%d\n",RES[i]);
}

    }
}
