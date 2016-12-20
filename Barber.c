#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int N,i,k,temp;
        scanf("%d",&N);
        int C[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&C[i]);
        }
        for(i=0;i<N;i++)
        {
            for(k=i+1;k<N;k++)
            {
                if(C[k] < C[i])
                {
                    temp = C[k];
                    C[k] = C[i];
                    C[i] = temp;}
            }
        }
        temp = 0;

       if(C[0] == 0)
       {
          for(i=0;i<N-1;i++)
        {
         if(C[i+1] > i+1 )
         {
             temp = 1;
             break;
         }

        }
       if(temp == 0)
       {
           printf("YES\n");
       }
       else{printf("NO\n");}
       }
       else
       {
           printf("NO\n");
       }

    }

    return 0;
}
