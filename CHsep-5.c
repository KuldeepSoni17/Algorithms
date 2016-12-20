#include<stdio.h>

int main()
{
    int tc,j;
    char y;
    scanf("%d",&tc);
    y = getchar();
    for(j=0;j<tc;j++)
    {
        int cnt=0,temp;
        char x;
        x = getchar();
        temp = x;
        do{
            x = getchar();
            if(temp == x)
            {
            cnt++;
            }
            if(temp == 0)
            {
                temp = 1;
            }
            else
            {
                temp = 0;
            }
            printf("d");
            putchar(x);
            }while(x != '\n');

printf("%d",cnt);
    }

 return 0;
}
