#include<stdio.h>

int main()
{
    int tc,j,N,CNT,i,k,Rkey,flag;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        CNT = i = k = Rkey = flag = 0;
        scanf("%d",&N);
        if(N != 1)
        {
        char STR[2*(N-1)],key[N-1];
        scanf("%s",STR);
        for(i=0;i<2*(N-1);i=i+2)
        {
         flag = 0;
         if(STR[i+1] != STR[i]-32)
         {
             for(k=0;k<Rkey;k++)
             {
                 if(key[k] == STR[i+1] + 32)
                 {
                     key[k] = 0;
                     flag = 1;
                     break;
                 }

             }
             if(flag == 0)
             {
                 CNT++;
             }
          key[Rkey] = STR[i];
          Rkey++;
         }
        }
        }

    printf("%d\n",CNT);
    }
    return 0;
}
