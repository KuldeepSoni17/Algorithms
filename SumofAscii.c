#include<stdio.h>

int main()
{
    int tc,j;
    scanf("%d",&tc);
    char x;
    x = getchar();
    for(j=0;j<tc;j++)
    {
        long int Tot = 0;
        do
        {
            x = getchar();
            Tot = Tot + x;
        }while(x != '\n');
        if(Tot == 10)
        {
            printf("10\n");
        }
        else{
        printf("%ld\n",Tot-10);
        }
    }

}
