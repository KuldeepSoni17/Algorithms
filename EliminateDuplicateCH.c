#include<stdio.h>

int main()
{int tc,j;
scanf("%d",&tc);
for(j=0;j<tc;j++)
{
    int N,i,k,a,flag;
    scanf("%d",&N);
    int No[N],Print[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&No[i]);
        Print[i] = 0;
    }
    Print[0] = No[0];
    a = 1;
    for(i=1;i<N;i++)
    { flag  = 0;
        for(k=0;k<a;k++)
        {
            if(No[i] == Print[k])
            {
             flag = 1;
             break;
            }
        }
    if(flag == 0)
    {

        Print[a] = No[i];
          a++;
     }

    }

for(i=0;i<a;i++)
{
    printf("%d\n",Print[i]);
}
}


    return 0;
}
