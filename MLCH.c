#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int tc,j,k;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int i,L1,L2,temp=0,l,m = 0;
        char STR1[10000],STR2[10000],STR3[10000];
        scanf("%s",STR1);
        L1 = strlen(STR1);
        scanf("%s",STR2);
        L2 = strlen(STR2);
        for(i=0;i<L1;i++)
        {
            for(k=i+1;k<L1;k++)
            {
                if(STR1[k] < STR1[i])
                {
                    temp = STR1[i];
                    STR1[i] = STR1[k];
                    STR1[k] = temp;
                }
            }
        }
   for(i=0;i<L2;i++)
        {
            for(k=i+1;k<L2;k++)
            {
                if(STR2[k] < STR2[i])
                {
                    temp = STR2[i];
                    STR2[i] = STR2[k];
                    STR2[k] = temp;
                }
            }
        }
    k=0;
    for(i=0;i<L2;i++)
    {
        temp = 0;
        for(l=m;l<L1;l++)
        {
        if(STR2[i] == STR1[l])
        {
          temp = 1;
          m++;
          break;
        }
        }
        if(temp == 0)
        {
         STR3[k] = STR2[i];
         k++;
        }


    }
    printf("%d ",k);
    for(i=0;i<k;i++)
    {
        printf("%c ",STR3[i]);
    }
    printf("\n");

    }


return 0;}
