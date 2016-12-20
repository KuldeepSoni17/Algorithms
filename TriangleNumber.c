#include<stdio.h>
#include<math.h>


int main()
{
    float a;
    int tc,i,x,y,z;
    scanf("%d",&tc);
   long int N[tc];
    for(i=0;i<tc;i++)
    {
        scanf("%ld",&N[i]);
    }
    for(i=0;i<tc;i++)
    {
      a = sqrt(N[i]);

      for(x=(int)a;x>0;x--)
      {

         if(N[i]%x == 0)
         {

             y=x;
             z=N[i]/y;
             printf("%d \t %d\n",x,z);
             break;
         }
      }
      if(z == 2*y + 1)
      {
          printf("%d\n",2*y);
      }
      else if(z == 2*y-1)
      {
printf("%d\n",2*y-1);
      }
      else
      {
          printf("NO\n");
      }

    }

    return 0;
}
