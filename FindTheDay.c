#include<stdio.h>

int main()
{
    int i,j,a,N,tc;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
    scanf("%d",&N);
    a = 4;
    for(i=2016;i<=N;i++)
    {
        if(a < 7)
        {
            if(i%4==0)
            {
                if(a == 6)
                {
                    a = 1;
                }
                else{
                a = a+2;}
            }
            else
            {
                a = a+1;
            }
        }
        else
        {
            a=0;
            if(i%4==0)
            {
                a = a+2;
            }
            else
            {
                a = a+1;
            }


        }

    }
    if(a<6)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
}
