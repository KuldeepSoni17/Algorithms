#include<stdio.h>
#include<conio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(;tc>0;tc--)
    {
        char S[1000];
        int CHK[5] = {0,0,0,0,0};
        gets(S);
        int j=0,sum = 0;
        while(S[j] != '\0')
        {
            if(S[j] == 'u')
            {
                CHK[0] = 1;
            }
             else if(S[j] == 'n')
            {
                CHK[1] = 1;
            }
           else if(S[j] == 'a')
            {
                CHK[2] = 1;
            }
            else if(S[j] == 'g')
            {
                CHK[3] = 1;
            }
            else if(S[j] == 'i')
            {
                CHK[4] = 1;
            }
            j++;
        }
        for(j=0;j<5;j++)
        {
            sum += CHK[j];
        }
        if(sum == 5)
        {
            printf("Unagi\n");

        }
        else
        {
            printf("Aah, Salmon Skin Roll\n");
        }
    }

return 0;
}
