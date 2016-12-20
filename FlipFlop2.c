#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        long int N,i,X,CNT=0;
        scanf("%ld",&N);
        int STR[N];
        long int A;
        scanf("%ld",&A);
        for(i=0;i<N;i++)
        {
          STR[N-i-1] = A%10;
          A = A/10;
        }

        X = STR[0];
        if(X == 1)
        {
        for(i=1;i<N;i++)
        {
        if(STR[i] == X)
        {
            CNT++;
        }
        else
        {
            X = STR[i];
        }
        }

        printf("%ld\n",CNT);
    }
    else{
        for(i=0;i<N;i++)
        {
            if(STR[i] == 1)
            {
                break;
            }
            else{CNT++;}
        X = STR[i];
        for(i=i+1;i<N;i++)
        {
        if(STR[i] == X)
        {
            CNT++;
        }
        else
        {
            X = STR[i];
        }
        }

        printf("%ld\n",CNT);
        }

    }

    }
    return 0;

}
