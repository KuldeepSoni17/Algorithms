#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(;tc>0;tc--)
    {
        char MON[50],RAC[50],PHB[50];
        int MONscr,RACscr,j=0,PHBscr;
        scanf("%s",MON);
        //scanf("%s",RAC);
        //scanf("%s",PHB);
        while(MON[j] != '\0')
        {
            MONscr += MON[j];
        }
        printf("%d",MONscr);
    }
}
