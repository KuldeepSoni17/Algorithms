#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        int H1,H2,M1,M2,S1,S2;
        scanf("%d %d %d %d %d %d",&H1,&M1,&S1,&H2,&M2,&S2);
        printf("%d %d %d\n",(H1+H2+((M1+M2)/60)),(M1+M2+((S1+S2)/60))%60,(S1+S2)%60);
    }
}
