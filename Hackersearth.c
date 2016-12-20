#include<stdio.h>
#include<string.h>
main()
{
    int tc,n,k,i,j,temp,x,a;
    char name[100];
    scanf("%d",&tc);
    for(a=1;a<=tc;a++)
    {
        n = k = i = j = temp = x = 0;
        scanf("%d %d",&n,&k);
        int L[n],sum[n];
        for(i=0;i<n;i++)
        {
            L[i] = 0;
            sum[i] = 1;
        }


        if(n%k == 0)
        {
            for(j=0;j<n;j++)
            {
                scanf("%s",name);
                L[j] = strlen(name);
            }
           /* for(i=0;i<n;i++)
            {
                printf("%d",L[i]);
            }*/
            for(j=0;j<n;j++)
            {
                for(i=j+1;i<n;i++)
                {
                    if(L[i]<L[j])
                    {
                        temp = L[j];
                        L[j] = L[i];
                        L[i] = temp;
                    }
                }
            }

            x = L[0];
            for(i=1,j=0;i<n;i++)
            {

                if(L[i] == x)
                {
                    sum[j]++;
                }
                else
                {
                    x = L[i];
                    j++;
                }
            }
            for(i=0;i<=j;i++)
            {
                printf("%d",sum[i]);
            }
            x = 0;
            for(i=0;i<=j;i++)
            {
                if(sum[i] != k)
                {
                    x=1;
                }
            }
            if(x == 0)
            {
                printf("Possible");
            }
            else
            {
                printf("Not Possible1");
            }
}
       else
       {
        printf("Not possible");
       }
    }
}
