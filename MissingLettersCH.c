#include<stdio.h>

int main()
{
int tc,i;
char y;
scanf("%d",&tc);
y=getchar();

for(i=0;i<tc;i++)
{
    int a,b,CNT = 0;
    char *STR,x;
    a = STR;
    do
        {
        x = getchar();
        *STR = x;
        STR++;
    }while(x != '\n');
    *(STR-1) = '\0';

    b = STR - a;
    STR = a;
    char s[b];
    for(i = 0;i<b;i++,STR++)
    {
         s[i] = *STR;
        // CNT = CNT + s[i];
    }

    puts(s);
    printf("%d",CNT);

}
}
