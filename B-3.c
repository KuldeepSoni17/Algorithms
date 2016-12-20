#include<stdio.h>
#include<stdlib.h>


int main()
{
    int tc,j;
    scanf("%d",&tc);

    for(j=0;j<tc;j++)
    {
        int R,C,a,b,ind=0,RS,CS;
        scanf("%d %d",&R,&C);
        int area[R+1][C+1];
        for(a=0;a<R+1;a++)
        {
            for(b=0;b<C+1;b++)
            {
                area[a][b] = 0;
            }
        }


        for(a=0;a<R;a++)
        {
            for(b=0;b<C;b++)
            {
                scanf("%d",&area[a][b]);
            }
        }

               for(a=0;a<R;a++)
        {
            for(b=0;b<C;b++)
            {
                printf("%d\t",area[a][b]);
            }
            printf("\n");
        }
        for(a=0;a<R;a++)
        {
            for(b=0;b<C;b++)
            {
                if(area[a][b] == 1)
                {
                printf("%d %d\n",a,b);
                RS = a;
                CS = b;
                 if(area[RS][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS;
            CS = CS+1;
            printf("ONE\n");
                    if(area[RS][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS;
            CS = CS+1;
            printf("ONE\n");

        }
        if(area[RS+1][CS-1] == 1)
        {
            area[RS][CS] = 0;
           RS = RS + 1;
           CS = CS-1;
           printf("TWO\n");

        }
        if(area[RS+1][CS] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS;
            printf("THREE\n");

        }
        if(area[RS+1][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS+1;
            printf("FOUR\n");

        }
        if(area[RS+1][CS+1] == 0 && area[RS+1][CS] == 0 && area[RS+1][CS-1] == 0 && area[RS][CS+1] == 0)
        {
        printf("%dP\n",ind);
            area[RS][CS] = 0;

        }

        }
        if(area[RS+1][CS-1] == 1)
        {
            area[RS][CS] = 0;
           RS = RS + 1;
           CS = CS-1;
           printf("TWO\n");
                  if(area[RS][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS;
            CS = CS+1;
            printf("ONE\n");

        }
        if(area[RS+1][CS-1] == 1)
        {
            area[RS][CS] = 0;
           RS = RS + 1;
           CS = CS-1;
           printf("TWO\n");

        }
        if(area[RS+1][CS] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS;
            printf("THREE\n");

        }
        if(area[RS+1][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS+1;
            printf("FOUR\n");

        }
        if(area[RS+1][CS+1] == 0 && area[RS+1][CS] == 0 && area[RS+1][CS-1] == 0 && area[RS][CS+1] == 0)
        {
        printf("%dP\n",ind);
            area[RS][CS] = 0;

        }
        }
        if(area[RS+1][CS] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS;
            printf("THREE\n");
                 if(area[RS][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS;
            CS = CS+1;
            printf("ONE\n");

        }
        if(area[RS+1][CS-1] == 1)
        {
            area[RS][CS] = 0;
           RS = RS + 1;
           CS = CS-1;
           printf("TWO\n");

        }
        if(area[RS+1][CS] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS;
            printf("THREE\n");

        }
        if(area[RS+1][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS+1;
            printf("FOUR\n");

        }
        if(area[RS+1][CS+1] == 0 && area[RS+1][CS] == 0 && area[RS+1][CS-1] == 0 && area[RS][CS+1] == 0)
        {
        printf("%dP\n",ind);
            area[RS][CS] = 0;

        }
        }
        if(area[RS+1][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS+1;
            printf("FOUR\n");
                 if(area[RS][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS;
            CS = CS+1;
            printf("ONE\n");

        }
        if(area[RS+1][CS-1] == 1)
        {
            area[RS][CS] = 0;
           RS = RS + 1;
           CS = CS-1;
           printf("TWO\n");

        }
        if(area[RS+1][CS] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS;
            printf("THREE\n");

        }
        if(area[RS+1][CS+1] == 1)
        {
            area[RS][CS] = 0;
            RS = RS+1;
            CS = CS+1;
            printf("FOUR\n");

        }
        if(area[RS+1][CS+1] == 0 && area[RS+1][CS] == 0 && area[RS+1][CS-1] == 0 && area[RS][CS+1] == 0)
        {
        printf("%dP\n",ind);
            area[RS][CS] = 0;

        }
        }
        if(area[RS+1][CS+1] == 0 && area[RS+1][CS] == 0 && area[RS+1][CS-1] == 0 && area[RS][CS+1] == 0)
        {ind++;
        printf("%dP\n",ind);
            area[RS][CS] = 0;

        }



                }
            }
        }

printf("%d",ind);
    }

    return 0;
}
