#include<math.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
     int TS,DS,MxP,i,temp,CNT=0,k,x,a,b;
     scanf("%d %d %d",&TS,&DS,&MxP);
     int SP[TS],AD[TS],BD[TS];
     for(i=0;i<TS;i++)
     {
         scanf("%d",&SP[i]);
     }
            for(k=0;k<TS;k++)
            {
                for(i=k+1;i<TS;i++)
                {
                    if(SP[i]<SP[k])
                    {
                        temp = SP[k];
                        SP[k] = SP[i];
                        SP[i] = temp;
                    }
                }
 a=0;b=0;           }
for(i=0;i<TS;i++)
{
 if(SP[i] > DS)
 {
     AD[a] = SP[i];
     a++;
 }
 else if(SP[i] < DS)
 {
     BD[b] = SP[i];
     b++;
 }
}
if(a%MxP == 0)
{
    k = a/MxP;
}
else
{
    k = a/MxP + 1;
}
for(i=0;i<k;i++)
{
    CNT = CNT + 2*(AD[a-1-i*MxP]-DS);
}
if(b%MxP == 0)
{
    k = b/MxP;
}
else
{
    k = b/MxP + 1;
}
for(i=0;i<k;i++)
{
    CNT = CNT + 2*(DS-BD[i*MxP]);
}
printf("%d\n",CNT);


    }
return 0;}
