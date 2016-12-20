#include<stdio.h>
long long int fact(int x);
int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int s;
        scanf("%d",&s);
        printf("%lld\n",fact(s)%1000000007);
    }

return 0;}
long long int fact(int s)
{
   long long int FAC = 1;
    if(s==1)
    {
        return 1;
    }
    else
    {
        FAC = fact(s-1)*s;
    }
    return(FAC);
}
